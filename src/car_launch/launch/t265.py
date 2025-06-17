from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess

def generate_launch_description():
    t265_node = Node(
        package='car_setup',
        executable='t265',
        name='t265_node',
        output='screen',
    )

    # 启动节点后自动调用open service
    call_open_service = ExecuteProcess(
        cmd=['ros2', 'service', 'call', '/t265_open_service', 'std_srvs/srv/Empty'],
        output='screen'
    )

    return LaunchDescription([
        t265_node,
        call_open_service
    ])