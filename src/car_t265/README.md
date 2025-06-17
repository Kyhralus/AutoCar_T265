colcon build --merge-install

# 启动t265
ros2 launch car_t265 t265_publisher.launch.py

# 启动串口
ros2 launch car_t265 uart_driver.launch.py

# 发布目标点
ros2 launch car_t265 target_publisher.launch.py

# 启动导航
ros2 launch car_t265 navigation.launch.py