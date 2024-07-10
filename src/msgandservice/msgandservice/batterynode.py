#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from my_robot_controller.srv import LedSrv
from functools import partial

 
class BatteryNode(Node):
   def __init__(self):
     super().__init__("battery_status")
     self.battery_at_first="full"
     self.battery_at_last=self.battery_time_clock()
     self.battery_timer=self.create_timer(0.1,self.battery_callback)
   def battery_time_clock(self):
     secs,nsecs= self.get_clock().now().seconds_nanoseconds()
     return secs + nsecs/1000000000

   def battery_callback(self):
      time_now=self.battery_time_clock()
      if self.battery_at_first=="full":
        if time_now - self.battery_at_last>4.0:
           self.battery_at_first="empty"
           self.get_logger().info("BATTERY IS EMPTY ---- CHARGE IT IMMEDIATLY")
           self.battery_at_last=time_now
           self.battery_server(3, 1)
      else:
        if time_now - self.battery_at_last>6.0:
           self.battery_at_first="full"
           self.get_logger().info("NOW THE BATTERY IS FULL --- ")
           self.battery_at_last=time_now
           self.battery_server(3, 0)
   def battery_server(self ,ledstate ,state):
      client=self.create_client(LedSrv,"led_set")
      while not client.wait_for_service(1.0):
         self.get_logger().warn("no response......")
      rqt=LedSrv.Request()
      rqt.ledstate=ledstate
      rqt.state=state
      future=client.call_async(rqt)
      future.add_done_callback(
         partial(self.callback_call_battery,ledstate=ledstate,state=state))
   def callback_call_battery(self, future, ledstate, state):
       try:
        response= future.result()
        self.get_logger().info(str(response.success))
       except Exception as e:
        self.get_logger().error("sevice call failed %r"%(e,))
def main(args=None):
    rclpy.init(args=args)
    node=BatteryNode()
    rclpy.spin(node)
    rclpy.shutdown()
if __name__=="__main__":
    main()