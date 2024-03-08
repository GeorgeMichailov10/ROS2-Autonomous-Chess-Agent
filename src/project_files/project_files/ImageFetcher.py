import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import Empty
from cv_bridge import CvBridge, CvBridgeError
import cv2
import subprocess
import os
import time

class ImageFetcher(Node):
    def __init__(self):
        super().__init__('image_fetcher')
        self.subscriber1_= self.create_subscription(Empty, 'resume_image_fetching', self.resume_reading_images, 2)
        self.subscriber2_ = self.create_subscription(Empty, 'shutdown', self.node_shutdown_sequence, 1)
        self.publisher_ = self.create_publisher(Image, 'BoardImage', 1)
        self.br = CvBridge()
        self.counter = 1
        package_directory = os.path.dirname(os.path.realpath(__file__))
        self.debug_folder = os.path.join(package_directory, 'debugging')
        if not os.path.exists(self.debug_folder):
            os.makedirs(self.debug_folder)
            self.get_logger().info(f'Successfully created debugging directory at {self.debug_folder}')
        else:
            self.get_logger().info(f'debugging directory already exists at {self.debug_folder}')
        self.phone_image_directory = '/storage/emulated/0/Pictures'
        self.wipe_directories()
        self.timer = self.create_timer(15.0, self.timer_callback)
        self.should_read = True
        self.get_logger().info('Successfully initialized image_fetcher')
        self.get_logger().info('Please make first move now')

    # CLEANS DEBUG FOLDER AND PHONE DIRECTORY
    def wipe_directories(self):
        self.wipe_phone_images()
        for image in os.listdir(self.debug_folder):
            os.remove(os.path.join(self.debug_folder, image))
        self.get_logger().info('Success Wiping All Directories')

    # WIPES PHONE DIRECTORY
    def wipe_phone_images(self):
        wipe_phone = ['adb', 'shell', 'rm', '-rf', f'{self.phone_image_directory}']
        subprocess.run(wipe_phone, capture_output=True, text=True)
        self.get_logger().info('Wiped Phone Directory')

    # TIMER CALLBACK TO POTENTIALLY READ IMAGE IF SHOULD_READ = TRUE
    def timer_callback(self):
        self.get_logger().info('Timer went off')
        self.timer.cancel()
        self.timer = None
        self.get_logger().info('Attempting to Process Image has begun')    
        image_path = self.get_latest_image_from_phone()
        if image_path is not None:
            self.get_logger().info('Image grabbed')
            boardImage = cv2.imread(image_path)
            try:
                ros_image = self.br.cv2_to_imgmsg(boardImage, "bgr8")
                self.publisher_.publish(ros_image)
                self.get_logger().info('VP Node sent image for board state detection')
            except CvBridgeError as e:
                self.get_logger().warn('FAILURE WITH BRIDGING IMAGE')
                self.timer = self.create_timer(15.0, self.timer_callback)
        else:
            self.get_logger().warn('NO AVAILABLE IMAGES')
            self.get_logger().info('Recreating Timer')
            self.timer = self.create_timer(15.0, self.timer_callback)

    # FETCHES LAST IMAGE IN PHONE, SAVES IN DEBUG FOLDER, RETURNS IMAGE PATH FROM DEBUG FOLDER
    def get_latest_image_from_phone(self):
        adb_command_list = ['adb', 'shell', 'ls', f'{self.phone_image_directory}']
        result = subprocess.run(adb_command_list, capture_output=True, text=True)
        if result.returncode == 0 and result.stdout:
            files = result.stdout.splitlines()
            latest_image_name = sorted(files)[-1]
            phone_image_path = os.path.join(self.phone_image_directory, latest_image_name).replace(' ', '\ ')
            local_image_path = os.path.join(self.debug_folder, latest_image_name)
            adb_command_pull = ['adb', 'pull', phone_image_path, local_image_path]
            pull_result = subprocess.run(adb_command_pull, capture_output=True, text=True)
            if pull_result.returncode == 0:
                self.get_logger().info('Image pulled successfully')
                return local_image_path
            else:
                self.get_logger().warn("IMAGE PULL FAILED")
        else:
            self.get_logger().warn("NO IMAGES FOUND")
            return None

    # VERIFIES A HAND IS NOT BLOCKING THE CAMERA BY ATTEMPTING TO GET THE INTERNAL CORNERS OF THE BOARD
    # THIS FUNCTION DOES NOT WORK WHEN THERE ARE PIECES ON THE BOARD
    #def verify_no_obstruction(self, image_path):
    #    image = cv2.imread(image_path)
    #    gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
    #    self.get_logger().info('Locating Corners')
    #    ret, _ = cv2.findChessboardCorners(gray, (7,7), None)
    #    self.get_logger().info(f'Internal Corners located:{ret}')
    #    if ret:
    #        return True            
    #    else:
    #        return False

    # CALLBACK FROM RECIEVING SIGNAL TO CONTINUE FETCHING IMAGES
    def resume_reading_images(self, msg):
        self.get_logger().info('YOU HAVE 7 SECONDS TO MAKE YOUR NEXT MOVE IF YOU WISH TO MAKE IT NOW')
        time.sleep(7)
        self.timer = self.create_timer(15.0, self.timer_callback)
        self.get_logger().info('DO NOT TOUCH BOARD')
        self.wipe_phone_images()
        self.get_logger().info("Signal Recieved to Continue Fetching Images")

    # NODE SHUTDOWN
    def node_shutdown_sequence(self):
        self.get_logger().info('Terminating image_fetcher node')
        rclpy.destroy_node()
        rclpy.shutdown()

def main(args=None):
    rclpy.init(args=args)
    image_fetcher = ImageFetcher()
    rclpy.spin(image_fetcher)
    image_fetcher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()