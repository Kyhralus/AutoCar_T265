# 在launch文件中添加完整的TF配置
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    pkg_share = get_package_share_directory('nav2_t265_pyrealsense')
    
    # T265驱动（已发布 odom → base_link 变换）
    t265_driver = Node(
        package='nav2_t265_pyrealsense',
        executable='t265_driver',
        name='t265_driver',
        output='screen'
    )
    
    # # 地图服务器
    # map_server = Node(
    #     package='nav2_map_server',
    #     executable='map_server',
    #     name='map_server',
    #     output='screen',
    #     parameters=[
    #         {'yaml_filename': os.path.join(pkg_share, 'maps', 'map.yaml')},
    #         {'topic_name': 'map'},
    #         {'frame_id': 'map'},
    #         {'use_sim_time': False}
    #     ]
    # )
    
    # # 生命周期管理器
    # lifecycle_manager = Node(
    #     package='nav2_lifecycle_manager',
    #     executable='lifecycle_manager',
    #     name='lifecycle_manager',
    #     output='screen',
    #     parameters=[
    #         {'autostart': True},
    #         {'node_names': ['map_server']}
    #     ]
    # )
    
    # 添加 map → odom 的静态变换（初始定位）
    static_tf_map_to_odom = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='static_tf_map_to_odom',
        arguments=['0', '0', '0', '0', '0', '0', 'map', 'odom'],
        output='screen'
    )
    
    # # Nav2启动
    # nav2_launch = IncludeLaunchDescription(
    #     PythonLaunchDescriptionSource(
    #         os.path.join(get_package_share_directory('nav2_bringup'), 'launch', 'bringup_launch.py')
    #     ),
    #     launch_arguments={
    #         'map': os.path.join(pkg_share, 'maps', 'map.yaml'),
    #         'params_file': os.path.join(pkg_share, 'config', 'nav2_params.yaml'),
    #         'use_sim_time': 'false'
    #     }.items()
    # )
    
    # # 导航客户端
    # nav2_client = Node(
    #     package='nav2_t265_pyrealsense',
    #     executable='nav2_client',
    #     name='nav2_client',
    #     output='screen'
    # )
    
    return LaunchDescription([
        t265_driver,
        # map_server,
        # lifecycle_manager,
        static_tf_map_to_odom,
        # nav2_launch,
        # nav2_client
    ])