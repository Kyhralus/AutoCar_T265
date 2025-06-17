from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    # 包含 T265 启动文件
    t265_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory('realsense2_camera'), 'launch', 'rs_launch.py')
        ),
        launch_arguments={
            'device_type': 't265',
            'enable_pose': 'true',
            'odom_frame_id': 'odom',
            'pose_frame_id': 'base_link',
            'publish_tf': 'true',
            'tf_publish_rate': '20.0',
            'enable_fisheye1': 'false',
            'enable_fisheye2': 'false',
        }.items()
    )
    
    # 启动 Nav2
    nav2_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory('nav2_bringup'), 'launch', 'bringup_launch.py')
        ),
        launch_arguments={
            'params_file': os.path.join(get_package_share_directory('nav2_t265_demo'), 'config', 'nav2_params.yaml'),
            'use_sim_time': 'false'
        }.items()
    )


    # 导航客户端节点
    nav_client = Node(
        package='nav2_t265_demo',
        executable='nav_client',
        name='nav_client',
        output='screen'
    )
    
    return LaunchDescription([
        t265_launch,
        nav2_launch,
        nav_client
    ])