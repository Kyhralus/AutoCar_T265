import pyrealsense2 as rs
import numpy as np
import cv2
import time

def main():
    # 创建管道和配置对象
    pipeline = rs.pipeline()
    config = rs.config()
    
    # 启用所有可用的数据流
    config.enable_stream(rs.stream.pose)  # 位置追踪数据
    config.enable_stream(rs.stream.fisheye, 1)  # 第一个鱼眼摄像头
    config.enable_stream(rs.stream.fisheye, 2)  # 第二个鱼眼摄像头
    
    # 启用IMU数据 --- 新版
    # config.enable_stream(rs.stream.gyro, rs.format.motion_xyz32f, 200)
    # config.enable_stream(rs.stream.accel, rs.format.motion_xyz32f, 63)



    # 启动管道
    profile = pipeline.start(config)
    print(profile)
    
    # 获取IMU传感器
    device = profile.get_device()
    # imu_sensor = device.first_motion_sensor()
    
    # 启用imu数据 --- 旧版
    # imu_sensor = device.first_motion_sensor()
    # imu_sensor.set_option(rs.option.enable_motion_correction, 1)  # 启用运动校正


    # 可选：设置IMU参数
    # imu_sensor.set_option(rs.option.gyroscope_enable_auto_correction, 1)
    # imu_sensor.set_option(rs.option.accelerometer_enable_auto_correction, 1)
    
    try:
        while True:
            # 等待并获取一帧数据
            frames = pipeline.wait_for_frames()
            
            # 1. 获取位置数据
            pose_frame = frames.get_pose_frame()
            if pose_frame:
                pose = pose_frame.get_pose_data()
                
                # 输出位置数据（x, y, z）
                position = pose.translation
                print(f"位置: x={position.x:.4f}, y={position.y:.4f}, z={position.z:.4f}")
                
                # 输出速度数据
                velocity = pose.velocity
                print(f"速度: vx={velocity.x:.4f}, vy={velocity.y:.4f}, vz={velocity.z:.4f}")
                
                # 输出加速度数据
                acceleration = pose.acceleration
                print(f"加速度: ax={acceleration.x:.4f}, ay={acceleration.y:.4f}, az={acceleration.z:.4f}")
                
                # 输出旋转四元数
                rotation = pose.rotation
                print(f"旋转: w={rotation.w:.4f}, x={rotation.x:.4f}, y={rotation.y:.4f}, z={rotation.z:.4f}")
                
                # 输出跟踪质量
                tracker_confidence = pose.tracker_confidence
                print(f"跟踪质量: {tracker_confidence}")
                
                # 输出映射质量
                mapper_confidence = pose.mapper_confidence
                print(f"映射质量: {mapper_confidence}")
            
            # 2. 获取鱼眼图像
            fisheye_frame1 = frames.get_fisheye_frame(1)
            fisheye_frame2 = frames.get_fisheye_frame(2)
            
            if fisheye_frame1 and fisheye_frame2:
                # 转换为numpy数组
                img1 = np.asanyarray(fisheye_frame1.get_data())
                img2 = np.asanyarray(fisheye_frame2.get_data())
                
                # 显示图像
                cv2.imshow('Fisheye 1', img1)
                cv2.imshow('Fisheye 2', img2)
                
                # 保存图像（可选）
                # cv2.imwrite(f'fisheye1_{int(time.time())}.png', img1)
                # cv2.imwrite(f'fisheye2_{int(time.time())}.png', img2)
            
            # 3. 获取IMU数据
            gyro_frame = frames.first_or_default(rs.stream.gyro)
            accel_frame = frames.first_or_default(rs.stream.accel)
            
            if gyro_frame:
                gyro_data = gyro_frame.as_motion_frame().get_motion_data()
                print(f"陀螺仪: x={gyro_data.x:.4f}, y={gyro_data.y:.4f}, z={gyro_data.z:.4f}")
            
            if accel_frame:
                accel_data = accel_frame.as_motion_frame().get_motion_data()
                print(f"加速度计: x={accel_data.x:.4f}, y={accel_data.y:.4f}, z={accel_data.z:.4f}")
            
            # 按ESC退出
            if cv2.waitKey(1) == 27:
                break
                
            print("-" * 50)  # 分隔线
            
    finally:
        # 停止管道并关闭窗口
        pipeline.stop()
        cv2.destroyAllWindows()

if __name__ == "__main__":
    main()
