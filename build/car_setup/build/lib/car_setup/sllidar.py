import car_core.sllidar as sd
import rclpy


def main(args=None):
    rclpy.init(args=args)
    sllidar = sd.Sllidar("sllidar")
    sllidar.run()
    rclpy.spin(sllidar)
    sllidar.destroy_node()
    rclpy.shutdown()
    