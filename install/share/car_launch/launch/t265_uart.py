from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration
from launch.actions import DeclareLaunchArgument, LogInfo

def generate_launch_description():
    
    # 创建节点
    t265_uart_node = Node(
        package='car_setup',  
        executable='t265_uart',   
        name='t265_uart_node',
        output='screen',
    )

    
    # 创建启动描述
    return LaunchDescription([
        t265_uart_node,
        # 打印日志确认节点启动
        # LogInfo(
        #     condition=launch.conditions.LaunchConfigurationEquals('config_file', ''),
        #     msg="Starting with default parameter file"
        # )
    ])