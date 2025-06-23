这是工作空间目录

# 隔离编译 --- 为了使每个包的编译文件处于同一文件夹
cd auto_car
colcon build --merge-install

ros2 launch nav2_t265_pyrealsense nav2_t265_launch.py

# launch 串口
cd auto_car
. install/setup.bash
ros2 launch car_setup uart_sender0




# 使用t265
ros2 run car_setup t265
# 另一个终端
ros2 service call /t265_open_service std_srvs/srv/Empty


colcon build --merge-install
source install/setup.bash
ros2 launch car_launch t265.py




# Git
git add .
git commit -m "描述更改内容"
git push origin main