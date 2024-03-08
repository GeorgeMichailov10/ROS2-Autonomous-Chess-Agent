import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import String, Empty
from cv_bridge import CvBridge
import cv2
from project_files.srv import GetCorners
import numpy as np
from project_files.msg import Bitmap, ImageAndBitmap

class BoardStateDetector(Node):
    def __init__(self):
        super().__init__('board_state_detector')
        # ROS Node Interaction Attributes
        self.subscriber1_ = self.create_subscription(Image, 'BoardImage', self.image_reception_callback, 2)  # Recieving Image from Video Processor
        self.subscriber2_ = self.create_subscription(Bitmap, 'update_bitmap', self.add_engine_move, 1)         # For Updating what current state should be after engine move
        self.subscriber3_ = self.create_subscription(Empty, 'shutdown', self.node_shutdown_sequence, 1)
        self.publisher1_ = self.create_publisher(Bitmap, 'occupied_squares', 2)                                   # Publish user change to interpreter node
        self.publisher2_ = self.create_publisher(Empty, 'resume_image_fetching', 1)                               # Tell Image Fetching node to resume fetching images
        self.publisher3_ = self.create_publisher(Empty, 'done_updating_bitmap', 1)

        self.cli = self.create_client(Corners, 'get_board_corners')                                            # Become client to get corners service node
        self.br = CvBridge()
        # For image processing        self.previous_state_image = None
        self.previous_state_bitmap = [
            ['w', 'w', 'w', 'w', 'w', 'w', 'w', 'w'],
            ['w', 'w', 'w', 'w', 'w', 'w', 'w', 'w'],
            ['o', 'o', 'o', 'o', 'o', 'o', 'o', 'o'],
            ['o', 'o', 'o', 'o', 'o', 'o', 'o', 'o'],
            ['o', 'o', 'o', 'o', 'o', 'o', 'o', 'o'],
            ['o', 'o', 'o', 'o', 'o', 'o', 'o', 'o'],
            ['b', 'b', 'b', 'b', 'b', 'b', 'b', 'b'], 
            ['b', 'b', 'b', 'b', 'b', 'b', 'b', 'b'],
        ]
        self.corners = None
        self.current_board_image = None


    # iMAGE RECEIVED RESPONSE
    def image_reception_callback(self, msg):
        # Only need to get corners first time
        self.current_board_image = self.br.imgmsg_to_cv2(msg, "bgr8")
        if self.corners is None:
            self.send_request()
        # Use else because of async call to avoid race conditions
        else:
            self.stateChange()
        
        
    # SERVICE CALL FUNCTIONS
    # NEED TO HANDLE HOW CORNERS GETS PASSED BACK EXACTLY
    def send_request(self):
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for service')
        req = GetCorners.Request()
        req.board = self.br.cv2_to_imgmsg(self.current_board_image.copy(), "bgr8")
        self.future = self.cli.call_async(req)
        self.future.add_done_callback(self.corners_response_callback)

    def corners_response_callback(self, future):
        response = future.result()
        if not response:
            self.get_logger().warn('RESPONSE FAILURE')
            self.publisher2_.publish(Empty())
        if response.success:
            self.corners = [
                response.corners_list.top_left_corner,
                response.corners_list.top_right_corner,
                response.corners_list.bottom_right_corner,
                response.corners_list.bottom_left_corner
            ]
            self.stateChange()
        else:
            self.get_logger().warn('COULDNT FIND CORNERS')
            self.publisher2_.publish(Empty())

    # STATE CHANGE DETECTION FUNCTIONS
    def stateChange(self):
        self.cropImageToCorners()
        current_state_bitmap = self.generateBitMap()
        if current_state_bitmap == self.previous_state_bitmap:
            self.get_logger().info('No Changes Detected')
            self.publisher2_.publish(Empty())
        else:
            self.previous_state_bitmap = current_state_bitmap
            self.previous_state_image = self.current_state_image
            self.send_message_to_move_interpreter()
            


    # CROP IMAGE BASED ON CORNERS
    def cropImageToCorners(self):
        x_min = min(self.corners, key=lambda x: x[0])[0]
        y_min = min(self.corners, key=lambda x: x[1])[1]
        x_max = max(self.corners, key=lambda x: x[0])[0]
        y_max = max(self.corners, key=lambda x: x[1])[1]
        self.current_state_image = self.current_state_image[y_min:y_max, x_min:x_max]

    # GENERATE 8X8 LIST OF BOOLS FOR EACH SQUARE ABOUT WHETHER IS OCCUPIED OR NOT
    def generateBitMap(self):
        bitmap = np.zeros((8, 8), dtype=int)
        height, width, _ = self.current_state_image.shape
        for row in range(8):
            for col in range(8):
                square = self.current_state_image[row * height // 8 : (row + 1) * height // 8, col * width // 8 : (col + 1) * width // 8]
                bitmap[row][col] = self.isOccupied(square)
        return bitmap

    #DETERMINES IF AN INDIVIDUAL SQUARE IS OCCUPIED
    def isOccupied(self, square):
        height, width, _ = square.shape
        interesting_block = square[height // 4 : 3 * height // 4, width // 4 : 3 * width // 4]
        count = 0
        for row in range(0, interesting_block.shape[0], 3):
            for col in range(0, interesting_block.shape[1], 3):
                if self.isGreen(interesting_block[row][col]):
                    count+=1
        if count >= 10:
            return 'o'
        else:
            return self.get_piece_color(interesting_block)

    # USES GREEN STICKER TO DETERMIE EMPTY OR OCCUPIED
    def isGreen(self, pixel):
        lower_green = np.array([0, 190, 0], dtype=np.uint8)
        upper_green = np.array([100, 255, 100], dtype=np.uint8)
        return np.all(pixel >= lower_green) and np.all(pixel <= upper_green)

    # GETS THE COLOR OF A PIECE ON A SQUARE
    def get_piece_color(self, interesting_block):
        gray = cv2.cvtColor(interesting_block, cv2.COLOR_BGR2GRAY)
        white_counter = 0
        black_counter = 0
        for row in range(0, gray.shape[0], 3):
            for col in range(0, gray.shape[1], 3):
                if gray[row][col] <= 100:
                    black_counter += 1
                elif gray[row][col] >= 155:
                    white_counter += 1
        if white_counter > black_counter:
            return 'w'
        else:
            return 'b'

    # SENDS MESSAGE TO MOVE INTERPRETER
    def send_message_to_move_interpreter(self):
        img_and_bitmap_message = ImageAndBitmap()
        bitmap_message = Bitmap()
        bitmap_message.row1 = self.previous_state_bitmap[0]
        bitmap_message.row2 = self.previous_state_bitmap[1]
        bitmap_message.row3 = self.previous_state_bitmap[2]
        bitmap_message.row4 = self.previous_state_bitmap[3]
        bitmap_message.row5 = self.previous_state_bitmap[4]
        bitmap_message.row6 = self.previous_state_bitmap[5]
        bitmap_message.row7 = self.previous_state_bitmap[6]
        bitmap_message.row8 = self.previous_state_bitmap[7]
        img_and_bitmap_message.board = self.br.cv2_to_imgmsg(self.previous_state_image.copy(), "bgr8")
        img_and_bitmap_message.occupied_squares = bitmap_message
        self.publisher1_.publish(img_and_bitmap_message)



    # ADD ENGINE MOVE AND TELL VIDEO PROCESSOR NODE TO RESUME FETCHING
    def add_engine_move(self, msg):
        self.previous_state_bitmap = [
            msg.row1,
            msg.row2,
            msg.row3,
            msg.row4,
            msg.row5,
            msg.row6,
            msg.row7,
            msg.row8
        ]
        self.publisher3_.publish(Empty())
        
    def node_shutdown_sequence(self):
        self.get_logger().info('Terminating chess_engine_node')
        rclpy.destroy_node()
        rclpy.shutdown()

def main(args=None):
    rclpy.init(args=args)
    board_state_detector = BoardStateDetector()
    rclpy.spin(board_state_detector)
    board_state_detector.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()