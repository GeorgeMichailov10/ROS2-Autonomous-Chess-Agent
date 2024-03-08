from setuptools import setup

package_name = 'project_files'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    data_files=[
        ('share/' + package_name, ['package.xml']),
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name + '/launch', ['launch/launch.py']),
    ],
    install_requires=['setuptools', 'numpy', 'opencv-python', 'python-chess'], 
    zip_safe=True,
    maintainer='George Michailov',
    maintainer_email='george@michailov.org',
    description='Project for my robotics class',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'move_interpreter = project_files.MoveInterpreter:main',
            'image_fetcher = project_files.ImageFetcher:main',
            'chess_engine = project_files.EngineInterface:main',
            'corner_finder = project_files.CornerFinder:main',
            'board_state_detector = project_files.ChangeInStateDetector:main',
        ],
    },
)
