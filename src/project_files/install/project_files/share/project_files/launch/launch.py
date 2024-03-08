from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='project_files',
            executable='move_interpreter',
            name='move_interpreter',
        ),
        Node(
            package='project_files',
            executable='image_fetcher',
            name='image_fetcher',
        ),
        Node(
            package='project_files',
            executable='chess_engine',
            name='chess_engine',
        ),
        Node(
            package='project_files',
            executable='corner_finder',
            name='corner_finder',
        ),
        Node(
            package='project_files',
            executable='board_state_detector',
            name='board_state_detector',
        ),
    ])