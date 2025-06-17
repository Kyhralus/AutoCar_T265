from setuptools import find_packages, setup
import glob

package_name = 'car_launch'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        # 安装所有 launch 文件
        ('share/' + package_name + '/launch', glob.glob('launch/*.py')),
    ],

    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='root',
    maintainer_email='alineyiee@shu.edu.cn',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        # launch文件入口点
        'console_scripts': [
            't265 = car_launch.t265:generate_launch_description',
            't265_uart = car_launch.t265_uart:generate_launch_description',

            # 自主小车
            'uart_driver = car_launch.uart_driver:generate_launch_description',
            'motor_controller = car_launch.motor_controller:generate_launch_description',

        ],
    },
)
