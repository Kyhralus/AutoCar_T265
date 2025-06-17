from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration
from launch.actions import DeclareLaunchArgument

def generate_launch_description():
    # 声明启动参数
    uart_port = LaunchConfiguration('uart_port')
    baudrate = LaunchConfiguration('baudrate')
    
    uart_port_arg = DeclareLaunchArgument(
        'uart_port',
        default_value='/dev/ttyS1',
        description='UART device port'
    )
    
    baudrate_arg = DeclareLaunchArgument(
        'baudrate',
        default_value='115200',
        description='UART baudrate'
    )
    
    # 创建节点
    uart_node = Node(
        package='uart_comm_py',
        executable='uart_node',
        name='uart_node',
        output='screen',
        parameters=[
            {'uart_port': uart_port},
            {'baudrate': baudrate}
        ]
    )
    
    # 创建启动描述
    return LaunchDescription([
        uart_port_arg,
        baudrate_arg,
        uart_node
    ])