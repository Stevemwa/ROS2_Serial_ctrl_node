import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import serial
import keyboard  # Import the keyboard library

def cmd_vel_callback(msg,ser):
    linear_x = msg.linear.x
    angular_z = msg.angular.z

    if linear_x > 0:
        command = "forward"
    elif linear_x < 0:
        command = "back"
    elif angular_z > 0:
        command = "left"
    elif angular_z < 0:
        command = "right"
    else:
        command = "halt"

    if command:
        ser.write(command.encode())
        node.get_logger().info(f"Command sent: {command}")
    else:
        node.get_logger().warning(f"Unsupported command")

def main(args = None):
    rclpy.init(args = args)

    global node
    node = rclpy.create_node('serial_key_controller')
    ser = serial.Serial('/dev/ttyACM0', baudrate=9600, timeout=1)
    
    cmd_vel_subscription = node.create_subscription(
    Twist,
    'cmd_vel',
    lambda msg, ser=ser: cmd_vel_callback(msg, ser),
    10
        )
    node.get_logger().info("Serial node has started")
    start="halt"
    ser.write(start.encode())
    
    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
    ser = serial.Serial('/dev/ttyACM0', baudrate=9600, timeout=1)
