import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped, Twist
import math

class NavigationController(Node):
    def __init__(self):
        super().__init__('navigation_controller')
        
        # 订阅T265的坐标数据
        self.pose_sub = self.create_subscription(
            PoseStamped,
            '/t265_publisher/pose',
            self.pose_callback,
            10
        )
        
        # 订阅目标位置
        self.target_sub = self.create_subscription(
            PoseStamped,
            '/target_position',
            self.target_callback,
            10
        )
        
        # 发布Twist消息
        self.cmd_pub = self.create_publisher(
            Twist,
            '/cmd_vel',
            10
        )
        
        # 初始化变量
        self.current_pose = None
        self.target_pose = None
        
        # 控制参数
        self.distance_threshold = 0.1  # 距离阈值（米）
        self.angle_threshold = 0.3     # 角度阈值（弧度）
        
        self.get_logger().info('导航控制节点初始化成功！')
    
    def pose_callback(self, msg):
        """处理T265的坐标数据"""
        self.current_pose = msg
        if self.target_pose is not None:
            self.calculate_control()
    
    def target_callback(self, msg):
        """处理目标位置数据"""
        self.target_pose = msg
        self.get_logger().info(f"收到新目标点: x={msg.pose.position.x}, y={msg.pose.position.y}")
    
    def calculate_control(self):
        """简化版：直接给定固定速度，主控已做PID闭环"""
        if self.current_pose is None or self.target_pose is None:
            return
        # 获取当前位置和目标位置
        current_x = self.current_pose.pose.position.x
        current_y = self.current_pose.pose.position.y
        target_x = self.target_pose.pose.position.x
        target_y = self.target_pose.pose.position.y
        # 计算与目标点的距离
        dx = target_x - current_x
        dy = target_y - current_y
        distance = math.sqrt(dx**2 + dy**2)
        # 计算目标角度
        target_angle = math.atan2(dy, dx)
        # 获取当前朝向（四元数转欧拉角）
        q = self.current_pose.pose.orientation
        siny_cosp = 2 * (q.w * q.z + q.x * q.y)
        cosy_cosp = 1 - 2 * (q.y * q.y + q.z * q.z)
        current_angle = math.atan2(siny_cosp, cosy_cosp)
        # 计算角度误差
        angle_error = target_angle - current_angle
        if angle_error > math.pi:
            angle_error -= 2 * math.pi
        elif angle_error < -math.pi:
            angle_error += 2 * math.pi
        # 创建控制消息
        cmd = Twist()
        if distance < self.distance_threshold:
            cmd.linear.x = 0.0
            cmd.angular.z = 0.0
            self.get_logger().info("到达目标位置!")
        else:
            if abs(angle_error) > self.angle_threshold:
                cmd.linear.x = 0.0
                cmd.angular.z = 0.5 if angle_error > 0 else -0.5
            else:
                cmd.linear.x = 0.2
                cmd.angular.z = 0.0
        # 打印最终使用的角度（保留两位小数）
        self.get_logger().info(
            f"控制计算: "
            f"目标角度={math.degrees(target_angle):.2f}°, "
            f"当前朝向={math.degrees(current_angle):.2f}°, "
            f"角度误差={math.degrees(angle_error):.2f}°, "
            f"距离={distance:.2f}m"
        )
        self.cmd_pub.publish(cmd)

def main(args=None):
    rclpy.init(args=args)
    node = NavigationController()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()