import rclpy
from rclpy.node import Node
from std_msgs.msg import String, Empty
from custom_msgs_srvs.msg import Bitmap, EngineMove

class MoveInterpreter(Node):
    def __init__(self):
        super().__init__('move_interpreter')
        # NODE INTERACTION ATTIRUBTES
        self.subscriber1_ = self.create_subscription(Bitmap, 'occupied_squares', self.determine_player_move, 1)
        self.subscriber2_ = self.create_subscription(EngineMove, 'engine_move', self.translate_engine_move, 1)
        self.subscriber3_ = self.create_subscription(Empty, 'shutdown', self.node_shutdown_sequence, 1)
        self.publisher1_ = self.create_publisher(String, 'player_move', 1)
        self.publisher2_ = self.create_publisher(Bitmap, 'update_bitmap', 1)
        # OTHER ATTRIBUTES
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

    # DETERMINES PLAYER MOVE AND SENDS IT TO ENGINE INTERFACE NODE
    def determine_player_move(self, msg):
        current_state_bitmap = [
            msg.row1,
            msg.row2,
            msg.row3,
            msg.row4,
            msg.row5,
            msg.row6,
            msg.row7,
            msg.row8, 
        ]
        self.get_logger().info(f'Previous State Bitmap: \n{self.previous_state_bitmap}')
        self.get_logger().info(f'Current State Bitmap: \n{current_state_bitmap}')
        src_coordinates, dest_coordinates, normal = self.determineSquareChange(current_state_bitmap)          # Source coordinates, destination coordinates, is normal move t or f
        self.get_logger().info(f"Player move was normal move: {normal}")
        self.previous_state_bitmap = current_state_bitmap
        if normal:
            player_move = self.generate_normal_string(src_coordinates[0], dest_coordinates[0])
        else:
            player_move = self.generate_castle_string(src_coordinates, dest_coordinates)
        msg = String()
        msg.data = player_move
        self.get_logger().info(f'Player move: {player_move}')
        self.publisher1_.publish(msg)
        
    # Determines which square coordinates changed and if it is normal"
    def determineSquareChange(self, current_state_bitmap):
        src = []
        dest = []
        for row in range(8):
            for col in range(8):
                if self.previous_state_bitmap[row][col] != current_state_bitmap[row][col]:
                    if current_state_bitmap[row][col] == 'o':
                        src.append([row, col])
                    else:
                        dest.append([row, col])
        # Castled
        self.get_logger().info(f'src coordinates: {len(src)}')
        if len(src) > 2:
            self.get_logger().error('DID NOT GET CORRECT SQUARE COLORS')
        if len(src) == 2:
            return src, dest, False
        else:
            return src, dest, True

    # GENERATES STRING FOR CASTLING
    def generate_castle_string(self, src, dest):
        # Determine if King side castle or Queen side castle
        # King side castle (rook came from top left)
        if src[0] == [0,0]:
            move = 'e1g1'
        else:
            move = 'e1c1'
        return move

    # GENERATES UCI STRING FOR NORMAL MOVE
    def generate_normal_string(self, src, dest):
        return chr(104 - src[1]) + str(src[0] + 1) + chr(104 - dest[1]) + str(dest[0] + 1)


    # Takes engine string, converts to coordinates, updates its own coordinates, then
    def translate_engine_move(self, msg):
        move_str = msg.move
        src = [[int(move_str[1]) - 1, 104 - ord(move_str[0])]]
        dest = [[int(move_str[3]) - 1, 104 - ord(move_str[2])]]
        if msg.castle:
            # King side castle
            if src[0][1] < dest[0][1]:
                src.append([7, 0])
                dest.append([7, 2])
            # Queen side castle
            else:
                src.append([7,7])
                dest.append([7, 4])
        self.get_logger().info('Updating own bitmap')
        self.update_self_bitmap(src, dest)
        self.send_msg_to_CISD()


    # UPDATE PREVIOUS STATE WITH ENGINE'S MOVE
    def update_self_bitmap(self, src, dest):
        for i in range(len(src)):
            dest_row, dest_col = dest[i]
            src_row, src_col = src[i]
            self.previous_state_bitmap[dest_row][dest_col] = self.previous_state_bitmap[src_row][src_col]
            self.previous_state_bitmap[src_row][src_col] = 'o' 

    # SENDS MESSAGE TO CHANGE IN STATE DETECTOR TO UPDATE ITS BITMAP AS WELL
    def send_msg_to_CISD(self):
        msg = Bitmap()
        msg.row1 = self.previous_state_bitmap[0]
        msg.row2 = self.previous_state_bitmap[1]
        msg.row3 = self.previous_state_bitmap[2]
        msg.row4 = self.previous_state_bitmap[3]
        msg.row5 = self.previous_state_bitmap[4]
        msg.row6 = self.previous_state_bitmap[5]
        msg.row7 = self.previous_state_bitmap[6]
        msg.row8 = self.previous_state_bitmap[7]    
        self.publisher2_.publish(msg)

    # SHUTDOWN SEQUENCE WHEN GAME OVER
    def node_shutdown_sequence(self):
        self.get_logger().info('Terminating move_interpreter node')
        rclpy.destroy_node()
        rclpy.shutdown()


def main(args=None):
    rclpy.init(args=args)
    move_interpreter = MoveInterpreter()
    rclpy.spin(move_interpreter)
    move_interpreter.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()