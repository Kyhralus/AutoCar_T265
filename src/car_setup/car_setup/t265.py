"""
    t265 启动节点程序 --- 一般不改动
"""
import car_core.t265 as t
import rclpy

# 简单入口函数，启动节点
def main(args=None):
    rclpy.init(args=args)
    t265 = t.T265("t265")
    print("启动t265节点")
    rclpy.spin(t265)   # 进入事件循环，持续处理订阅、定时器、服务等回调，直到节点被关闭
    t265.destroy_node()
    rclpy.shutdown()


