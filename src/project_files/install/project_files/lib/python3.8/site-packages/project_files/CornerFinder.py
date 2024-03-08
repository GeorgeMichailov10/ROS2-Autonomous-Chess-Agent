import rclpy
from rclpy.node import Node
import sys
import cv2
import numpy as np
from std_msgs.msg import Empty
from sensor_msgs.msg import Image
from cv_bridge import CvBridge, CvBridgeError

from project_files.srv import GetCorners
from project_files.msg import CornersList
    
class CornerFinder(Node):
    def __init__(self):
        super().__init__('corner_finder')
        self.subscriber1_ = self.create_subscription(Empty, 'shutdown', self.node_shutdown_sequence, 1)
        self.srv = self.create_service(Image, 'get_board_corners', self.getCornersCallback)       # Create service provider to get corners of a board image
        # BGR NOT RGB
        self.lower_pink = np.array([110, 25, 200], dtype=np.uint8)
        self.upper_pink = np.array([255, 140, 255], dtype=np.uint8)
        self.skip_steps = 5    # Number of pixels to skip when iterating
        self.br = CvBridge()

    # CALLBACK UPON SERVICE REQUEST
    def getCornersCallback(self, request, response):
        try:
            image = self.br.imgmsg_to_cv2(request.board, "bgr8")
        except CvBridgeError as e:
            self.get_logger().error('FAILED TO READ PASSED IN IMAGE')
            response.success = False
            return response

        corners = self.getCorners(image)
        # If failed to get all corners
        if None in corners:
            response.success = False
            self.get_logger().info('FAILED TO GET CORNERS')
        else:
            response.success = True
            corners = self.normalize_corners(corners)
            response.corners_list = CornersList()
            response.corners_list.top_left_corner = corners[0]
            response.corners_list.top_right_corner = corners[1]
            response.corners_list.bottom_right_corner = corners[2]
            response.corners_list.bottom_left_corner = corners[3]
            self.get_logger().info('Found Corners') 
        return response

    # RETURNS CORNERS LIST FROM IMAGE [TL, TR, BR, BL]
    def getCorners(self, board_image):
        height, width, _ = board_image.shape
        top_left_quad = board_image[:height//2, :width//2]
        top_right_quad = board_image[:height//2, width//2:]
        bottom_left_quad = board_image[height//2:, :width//2]
        bottom_right_quad = board_image[height//2:, width//2:]
        
        tl_corner = self.findTopLeftCorner(top_left_quad)
        tr_corner = self.findTopRightCorner(top_right_quad)
        tr_corner[1] += width // 2
        bl_corner = self.findBottomLeftCorner(bottom_left_quad)
        bl_corner[0] += height // 2
        br_corner = self.findBottomRightCorner(bottom_right_quad)
        br_corner[0] += height // 2
        br_corner[1] += width // 2

        self.get_logger().info('Done looking for corners')
        return [tl_corner, tr_corner, br_corner, bl_corner]


    # CORNER FINDER FUNCTIONS
    def findTopLeftCorner(self, quadrant):
        corner = None
        for row in range(0, quadrant.shape[0], self.skip_steps):
            for col in range(0, quadrant.shape[1], self.skip_steps):
                if self.is_pink(quadrant[row, col]):
                    corner = [row, col]
                    break
            if corner is not None:
                break
        if corner is None:
            return None 

        while self.is_pink(quadrant[corner[0] + 1, corner[1]]):
            corner[0] += 1
        while self.is_pink(quadrant[corner[0], corner[1] + 1]):
            corner[1] += 1
        self.get_logger().info("Potentially Found Top Left Corner")
        return corner

    def findTopRightCorner(self, quadrant):
        corner = None
        for row in range(0, quadrant.shape[0], self.skip_steps):
            for col in range(quadrant.shape[1] - 1, -1, -1 * self.skip_steps):
                if self.is_pink(quadrant[row, col]):
                    corner = [row, col]
                    break
            if corner is not None:
                break
        if corner is None:
            return None
        while self.is_pink(quadrant[corner[0] + 1, corner[1]]):
            corner[0] += 1
        while self.is_pink(quadrant[corner[0], corner[1] - 1]):
            corner[1] -= 1
        self.get_logger().info("Potentially Found Top Right Corner")
        return corner

    def findBottomLeftCorner(self, quadrant):
        corner = None
        for row in range(quadrant.shape[0] - 1, -1, -1 * self.skip_steps):
            for col in range(0, quadrant.shape[1], self.skip_steps):
                if self.is_pink(quadrant[row, col]):
                    corner = [row, col]
                    break
            if corner is not None:
                break
        if corner is None:
            return None
        while self.is_pink(quadrant[corner[0] - 1, corner[1]]):
            corner[0] -= 1
        while self.is_pink(quadrant[corner[0], corner[1] + 1]):
            corner[1] += 1
            self.get_logger().info("Potentially Found Bottom Left Corner")
        return corner

    def findBottomRightCorner(self, quadrant):
        corner = None
        for row in range(quadrant.shape[0] - 1, -1, -1 * self.skip_steps):
            for col in range(quadrant.shape[1] - 1, -1, -1 * self.skip_steps):
                if self.is_pink(quadrant[row, col]):
                    corner = [row, col]
                    break
            if corner is not None:
                break
        if corner is None:
            return None
        while self.is_pink(quadrant[corner[0] - 1, corner[1]]):
            corner[0] -= 1
        while self.is_pink(quadrant[corner[0], corner[1] - 1]):
            corner[1] -= 1
        self.get_logger().info("Potentially Found Bottom Right Corner")
        return corner

    # COLOR VERIFICATION FUNCTION
    def is_pink(self, pixel):
        return np.all(pixel >= self.lower_pink) and np.all(pixel <= self.upper_pink)

    # RETURNS CORNERS AS [TL, TR, BR, BL]
    def normalize_corners(self, corners_list):
        # Bring TL and TR down
        corners_list[0][0] = max(corners_list[0][0], corners_list[1][0])
        corners_list[1][0] = max(corners_list[0][0], corners_list[1][0])
        # Bring BL and BR up
        corners_list[2][0] = min(corners_list[2][0], corners_list[3][0])
        corners_list[3][0] = min(corners_list[2][0], corners_list[3][0])
        # Bring TL and BL right
        corners_list[0][1] = max(corners_list[0][1], corners_list[3][1])
        corners_list[3][1] = max(corners_list[0][1], corners_list[3][1])
        # Bring TR and BR left
        corners_list[1][1] = min(corners_list[1][1], corners_list[2][1])
        corners_list[2][1] = min(corners_list[1][1], corners_list[2][1])
        self.get_logger().info("Successfully Normalized Corners")
        return corners_list

    # SHUTDOWN SEQUENCE WHEN DONE
    def node_shutdown_sequence(self):
        self.get_logger().info('Terminating corner_finder node')
        rclpy.destroy_node()
        rclpy.shutdown()

def main():
    rclpy.init()
    corner_finder = CornerFinder()
    rclpy.spin(corner_finder)
    rclpy.shutdown()


if __name__ == '__main__':
    main()