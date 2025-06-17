import rclpy
from rclpy.node import Node
from nav2_msgs.action import NavigateToPose
from action_msgs.msg import GoalStatus
from geometry_msgs.msg import PoseStamped
from rclpy.action import ActionClient

class NavClient(Node):
    def __init__(self):
        super().__init__('nav_client')
        
        # 创建导航动作客户端
        self._action_client = ActionClient(self, NavigateToPose, 'navigate_to_pose')
        
        # 目标点列表
        self.goals = [
            self.create_pose_stamped(1.0, 0.0, 0.0),    # 目标1: x=1.0, y=0.0, 朝向0度
            self.create_pose_stamped(1.0, 1.0, 1.57),   # 目标2: x=1.0, y=1.0, 朝向90度
            self.create_pose_stamped(0.0, 1.0, 3.14),   # 目标3: x=0.0, y=1.0, 朝向180度
            self.create_pose_stamped(0.0, 0.0, 4.71)    # 目标4: x=0.0, y=0.0, 朝向270度
        ]
        
        # 当前目标索引
        self.current_goal_idx = 0
        
        # 等待导航服务器
        self.get_logger().info('等待导航服务器...')
        self._action_client.wait_for_server()
        self.get_logger().info('导航服务器已就绪')
        
        # 发送第一个目标
        self.send_goal()
    
    def create_pose_stamped(self, x, y, yaw):
        """创建一个带有目标位置和朝向的 PoseStamped 消息"""
        pose = PoseStamped()
        pose.header.frame_id = 'map'
        pose.header.stamp = self.get_clock().now().to_msg()
        pose.pose.position.x = x
        pose.pose.position.y = y
        pose.pose.position.z = 0.0
        
        # 将欧拉角转换为四元数
        q = self.euler_to_quaternion(0.0, 0.0, yaw)
        pose.pose.orientation.x = q[0]
        pose.pose.orientation.y = q[1]
        pose.pose.orientation.z = q[2]
        pose.pose.orientation.w = q[3]
        
        return pose
    
    def euler_to_quaternion(self, roll, pitch, yaw):
        """将欧拉角转换为四元数"""
        qx = np.sin(roll/2) * np.cos(pitch/2) * np.cos(yaw/2) - np.cos(roll/2) * np.sin(pitch/2) * np.sin(yaw/2)
        qy = np.cos(roll/2) * np.sin(pitch/2) * np.cos(yaw/2) + np.sin(roll/2) * np.cos(pitch/2) * np.sin(yaw/2)
        qz = np.cos(roll/2) * np.cos(pitch/2) * np.sin(yaw/2) - np.sin(roll/2) * np.sin(pitch/2) * np.cos(yaw/2)
        qw = np.cos(roll/2) * np.cos(pitch/2) * np.cos(yaw/2) + np.sin(roll/2) * np.sin(pitch/2) * np.sin(yaw/2)
        
        return [qx, qy, qz, qw]
    
    def send_goal(self):
        """发送导航目标"""
        if self.current_goal_idx >= len(self.goals):
            self.get_logger().info('所有目标已完成!')
            return
        
        goal_msg = NavigateToPose.Goal()
        goal_msg.pose = self.goals[self.current_goal_idx]
        
        self.get_logger().info(f'发送目标 #{self.current_goal_idx+1}: x={goal_msg.pose.pose.position.x}, y={goal_msg.pose.pose.position.y}')
        
        # 发送目标并设置回调
        self._send_goal_future = self._action_client.send_goal_async(
            goal_msg,
            feedback_callback=self.feedback_callback
        )
        
        self._send_goal_future.add_done_callback(self.goal_response_callback)
    
    def goal_response_callback(self, future):
        """处理目标响应"""
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('目标被拒绝')
            return
        
        self.get_logger().info('目标被接受')
        
        # 获取结果
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)
    
    def get_result_callback(self, future):
        """处理目标完成结果"""
        status = future.result().status
        
        if status == GoalStatus.STATUS_SUCCEEDED:
            self.get_logger().info('导航成功!')
        else:
            self.get_logger().info(f'导航失败，状态码: {status}')
        
        # 发送下一个目标
        self.current_goal_idx += 1
        self.send_goal()
    
    def feedback_callback(self, feedback_msg):
        """处理导航反馈"""
        feedback = feedback_msg.feedback
        # 可以在这里处理导航过程中的反馈信息
        self.get_logger().info(f'当前距离目标: {feedback.distance_remaining:.2f} m')

def main(args=None):
    rclpy.init(args=args)
    nav_client = NavClient()
    rclpy.spin(nav_client)
    nav_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()