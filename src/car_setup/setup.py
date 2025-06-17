from setuptools import find_packages, setup

package_name = 'car_setup'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='root',
    maintainer_email='alineyiee@shu.edu.cn',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    
    # 添加节点启动文件: 作用就是把 Python 脚本注册成命令行可执行节点，方便用 ROS 2 命令直接启动
    entry_points={
        'console_scripts': [
            # ===== 摄像头相关 =====
            'camer = car_setup.camera:main',

            # ===== t265 =====
            't265 = car_setup.t265:main',
            't265_uart = car_setup.t265_uart:main',
            
            # ===== uart相关 =====
            'uart_sender0 = car_setup.uart_sender0:main',
            'uart_receiver0 = car_setup.uart_receiver0:main',
            'uart_sender1 = car_setup.uart_sender1:main',
            'uart_receiver1 = car_setup.uart_receiver1:main',
            'uart_sender2 = car_setup.uart_sender2:main',
            'uart_receiver2 = car_setup.uart_receiver2:main',
            'uart_sender3 = car_setup.uart_sender3:main',
            'uart_receiver3 = car_setup.uart_receiver3:main',
            'uart_sender4 = car_setup.uart_sender4:main',
            'uart_receiver4 = car_setup.uart_receiver4:main',
            
            # ===== 自主小车 ===== 
            'uart_driver = car_setup.uart_driver:main',
            'motor_controller = car_setup.motor_controller:main',
        ],
    },
)
