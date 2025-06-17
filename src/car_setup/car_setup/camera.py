import car_core.camera as ca

import rclpy


def main(args=None):
    rclpy.init(args=args)
    camera = ca.Camera("camera", 0)
    rclpy.spin(camera)
    camera.destroy_node()
    rclpy.shutdown()