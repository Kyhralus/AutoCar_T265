import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
import math

class TargetPublisher(Node):
    def __init__(self):
        super().__init__('target_publisher')
        
        # 创建目标发布者
        self.publisher_ = self.create_publisher(
            PoseStamped,
            '/target_position',
            10
        )
        
        # 目标列表
        self.targets = [
            (0.5, 0.5),  # 目标1
            (1.0, 1.0),  # 目标2
            (0.0, 1.0),  # 目标3
            (0.0, 0.0)   # 目标4（返回原点）
        ]
        
        self.current_target = 0
        self.target_reached = False
        
        # 订阅导航状态
        self.status_sub = self.create_subscription(
            PoseStamped,
            '/t265_publisher/pose',
            self.status_callback,
            10
        )
        
        # 发布目标的定时器
        self.timer = self.create_timer(1.0, self.publish_target)
        
        self.get_logger().info('目标位置节点初始化成功！')
    
    def status_callback(self, msg):
        """处理导航状态，检测是否到达目标"""
        if self.targets and self.current_target < len(self.targets):
            target_x, target_y = self.targets[self.current_target]
            current_x = msg.pose.position.x
            current_y = msg.pose.position.y
            
            # 计算与目标的距离
            distance = math.sqrt((target_x - current_x)**2 + (target_y - current_y)**2)
            
            if distance < 0.1:  # 如果距离小于0.1米，认为到达目标
                if not self.target_reached:
                    self.get_logger().info(f"到达目标点： {self.current_target + 1}/{len(self.targets)}")
                    self.target_reached = True
                    # 延迟切换到下一个目标
                    self.timer = self.create_timer(3.0, self.next_target)
            else:
                self.target_reached = False
    
    def next_target(self):
        """切换到下一个目标"""
        self.current_target = (self.current_target + 1) % len(self.targets)
        self.get_logger().info(f"切换到目标点： {self.current_target + 1}/{len(self.targets)}")
        self.target_reached = False
        self.timer = self.create_timer(1.0, self.publish_target)
    
    def publish_target(self):
        """发布当前目标"""
        if self.targets and self.current_target < len(self.targets):
            target_x, target_y = self.targets[self.current_target]
            
            msg = PoseStamped()
            msg.header.stamp = self.get_clock().now().to_msg()
            msg.header.frame_id = 'map'  # 假设使用map坐标系
            msg.pose.position.x = target_x
            msg.pose.position.y = target_y
            msg.pose.position.z = 0.0
            
            # 设置朝向（简单地朝向目标点）
            msg.pose.orientation.w = 1.0
            
            self.publisher_.publish(msg)
            self.get_logger().info(f'目标位置发布成功 x:{msg.pose.position.x}, y:{msg.pose.position.y}！')

def main(args=None):
    rclpy.init(args=args)
    node = TargetPublisher()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()