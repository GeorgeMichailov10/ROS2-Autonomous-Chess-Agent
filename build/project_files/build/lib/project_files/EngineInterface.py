import rclpy
from rclpy.node import Node
from std_msgs.msg import String, Empty
from custom_msgs_srvs.msg import EngineMove

import chess
import chess.engine
import time

class Chess_Engine(Node):
    def __init__(self):
        super().__init__('chess_engine')
        self.subscriber1_ = self.create_subscription(String, 'player_move', self.move_received_callback, 1)
        self.subscriber2_ = self.create_subscription(Empty, 'done_updating_bitmap', self.display_engine_move, 1)
        self.publisher1_ = self.create_publisher(EngineMove, 'engine_move', 1)
        self.publisher2_ = self.create_publisher(Empty, 'shutdown', 1)
        self.publisher3_ = self.create_publisher(Empty, 'resume_image_fetching', 1)
        self.board = chess.Board()
        self.engine = chess.engine.SimpleEngine.popen_uci('/home/george/Documents/ProjectDir/src/project_files/Stockfish/src/stockfish')
        self.last_engine_move = None

    # RECIEVES MOVE AS STRING, PUSHES MOVE ONTO BOARD, CHECKS IF GAME OVER, GETS ENGINE MOVE, FORMATS, SENDS BACK TO MOVE INTERPRETER OR SHUTSDOWN
    def move_received_callback(self, msg):    
        self.board.push(chess.Move.from_uci(msg.data))
        self.get_logger().info('Player move has been pushed to board')
        code = self.end_of_game()
        if code == 0:
            self.get_logger().info('Game continues after player move')
            self.last_engine_move = self.engine.play(self.board, chess.engine.Limit(time = 0.5))
            self.publish_engine_move()
        else:
            self.log_end_of_game_sequence(code)
            self.publisher2_.publish(Empty())
    
    # FUNCTION FOR VERIFYING END OF GAME (0 means continue, 1 means white won, 2 means black one, 3 means draw)
    def end_of_game(self):
        if self.board.is_checkmate():
            # Black mated white
            if self.board.turn == chess.WHITE:
                return 2
            # White mated black
            else:
                return 1
        elif self.board.can_claim_draw() or self.board.is_stalemate() or self.board.is_insufficient_material() or self.board.is_seventyfive_moves() or self.board.is_fivefold_repetition():
            return 3
        else:
            return 0

    # PLAYS THE ENGINE MOVE, CREATES THE MESSAGE, DETERMINES IF IMAGE FETCHER SHOULD CONTINUE PULLING
    def display_engine_move(self, msg):
        self.board.push(self.last_engine_move.move)
        message = self.get_message()
        self.get_logger().info(message)
        code = self.end_of_game()
        if code == 0:
            self.get_logger().info('Make Move now, quickly')
            time.sleep(15)
            self.publisher3_.publish(Empty())
        else:
            self.log_end_of_game_sequence(code)
            self.get_logger().info('Termination Signal sent')
            self.publisher2_.publish(Empty())
            self.node_shutdown_sequence()

    # PUBLISHES ENGINE RESPONSE TO MOVE INTERPRETER
    def publish_engine_move(self):
        msg = EngineMove()
        msg.castle = self.board.is_castling(self.last_engine_move.move)
        msg.move = str(self.last_engine_move.move)
        self.get_logger().info(f'{str(self.last_engine_move.move)}')
        self.get_logger().info('Publishing Engine Response back to Move Interpreter')
        self.publisher1_.publish(msg)

    # FORMATS MOVE TO BE PRINTED TO TERMINAL
    def get_message(self):
        engine_move = str(self.last_engine_move.move)
        message = 'Engine Plays: '
        if self.board.is_castling(self.last_engine_move.move):
            if ord(engine_move[0]) < ord(engine_move[2]):
                message += 'Kingside Castle'
            else:
                message += 'Queenside Castle'
        elif len(engine_move) == 5:
            message += engine_move[:4] + ' promoting to ' + engine_move[4]
        else:
            message += engine_move
        return message

    # LOG END OF GAME RESULT
    def log_end_of_game_sequence(self, code):
        if code == 1:
            self.get_logger().info("White has checkmated black, WHITE WINS")
        elif code == 2:
            self.get_logger().info("Black has checkmated white, BLACK WINS")
        else:
            self.get_logger().info("Game has been drawn.")


    def node_shutdown_sequence(self):
        self.get_logger().info('Terminating chess_engine node')
        rclpy.destroy_node()
        rclpy.shutdown()


def main(args=None):
    rclpy.init(args=args)
    chess_engine = Chess_Engine()
    rclpy.spin(chess_engine)
    chess_engine.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()