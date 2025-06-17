# from setuptools import setup
# import os
# from glob import glob

# package_name = 'uart_comm_py'

# setup(
#     name=package_name,
#     version='0.0.0',
#     packages=[package_name],
#     data_files=[
#         ('share/ament_index/resource_index/packages',
#             ['resource/' + package_name]),
#         ('share/' + package_name, ['package.xml']),
#         (os.path.join('share', package_name, 'launch'), glob('launch/*.launch.py')),
#         (os.path.join('share', package_name, 'msg'), glob('msg/*.msg')),
#     ],
#     install_requires=['setuptools'],
#     zip_safe=True,
#     maintainer='Your Name',
#     maintainer_email='your@email.com',
#     description='Python UART communication package',
#     license='Apache License 2.0',
#     tests_require=['pytest'],
#     entry_points={
#         'console_scripts': [
#             'uart_node = uart_comm_py.uart_node:main',
#         ],
#     },
# )

from setuptools import setup
import os
from glob import glob

package_name = 'uart_comm_py'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.launch.py')),
        (os.path.join('share', package_name, 'msg'), glob('msg/*.msg')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Your Name',
    maintainer_email='your@email.com',
    description='Python UART communication package',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'uart_node = uart_comm_py.uart_node:main',
        ],
    },
)