"""
    这个代码文件是一个ROS 2的launch文件示例
    为了方便学习，了解参数
"""

'''
    修改好了注意在setup.py中添加
'''

from launch import LaunchDescription      # launch文件的描述类
from launch_ros.actions import Node       # 节点启动的描述类
def generate_launch_description():        # 自动生成launch文件的函数
    # 参数导入 / 路径   
    # 获取包的共享目录
    pkg_share = get_package_share_directory('my_package')
    # 加载 YAML 参数文件 ---- 如果core文件中的Node的__init__()函数中有参数
    params_file = os.path.join(pkg_share, 'config', 'params.yaml')
    
    
    return LaunchDescription([            # 返回launch文件的描述信息        
        Node(                             # 配置一个节点的启动            
            package='turtlesim',          # 节点所在的功能包            
            namespace='turtlesim1',       # 节点所在的命名空间            
            executable='turtlesim_node',  # 节点的可执行文件名，对应car_setup文件中serup.py中命名的可执行文件名称           
            name='sim'                    # 对节点重新命名，相同命名空间下name唯一      
        ),        
        Node(                             # 配置一个节点的启动            
            package='turtlesim',          # 节点所在的功能包            
            namespace='turtlesim2',       # 节点所在的命名空间            
            executable='turtlesim_node',  # 节点的可执行文件名            
            name='sim'                    # 对节点重新命名，不同命名空间name可相同       
        ),        
        Node(                             # 配置一个节点的启动            
            package='turtlesim',          # 节点所在的功能包            
            executable='mimic',           # 节点的可执行文件名            
            name='mimic',                 # 对节点重新命名            
            remappings=[                  # 资源重映射列表                
                ('/input/pose', '/turtlesim1/turtle1/pose'),         # 将/input/pose话题名修改为/turtlesim1/turtle1/pose                
                ('/output/cmd_vel', '/turtlesim2/turtle1/cmd_vel'),  # 将/output/cmd_vel话题名修改为/turtlesim2/turtle1/cmd_vel            
            ]        
        ),

        # 加载参数文件启动
        Node(                            # 配置一个节点的启动         
            package='turtlesim',          # 节点所在的功能包         
            executable='turtlesim_node',  # 节点的可执行文件名         
            namespace='turtlesim2',       # 节点所在的命名空间         
            name='sim',                   # 对节点重新命名         
            parameters=[params_file]           # 加载参数文件      
	)   
    ])



     

