from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    return LaunchDescription([
        # 声明启动参数
        DeclareLaunchArgument(
            'serial_port',
            default_value='/dev/ttyS0',
            description='Serial port device'
        ),
        DeclareLaunchArgument(
            'baudrate',
            default_value='115200',
            description='Serial port baudrate'
        ),
        DeclareLaunchArgument(
            'launch_rviz',
            default_value='true',
            description='Launch RViz visualization'
        ),
        
        # T265相机
        Node(
            package='car_t265',
            executable='t265_publisher',
            name='t265_publisher',
            output='screen',
            parameters=[
                {'frame_id': 't265_frame'},
            ]
        ),
        
        # 启动UART驱动
        Node(
            package='car_t265',
            executable='uart_driver',
            name='uart_driver',
            parameters=[
                {'port': LaunchConfiguration('serial_port')},
                {'baudrate': LaunchConfiguration('baudrate')}
            ],
            output='screen'
        ),
        
        # 其他节点
        Node(
            package='car_t265',
            executable='motor_controller',
            name='motor_controller',
            output='screen'
        ),
        
        Node(
            package='car_t265',
            executable='navigation_controller',
            name='navigation_controller',
            output='screen'
        ),
        
        Node(
            package='car_t265',
            executable='target_publisher',
            name='target_publisher',
            output='screen'
        ),
        
        # @TODO
        # # 启动RViz可视化（使用IfCondition）
        # Node(
        #     package='rviz2',
        #     executable='rviz2',
        #     name='rviz2',
        #     arguments=['-d', LaunchConfiguration('rviz_config', default='$(find car_t265)/rviz/navigation.rviz')],
        #     output='screen',
        #     condition=IfCondition(LaunchConfiguration('launch_rviz'))
        # )
    ])