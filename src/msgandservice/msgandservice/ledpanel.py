#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from my_robot_controller.msg import LedState
from my_robot_controller.srv import LedSrv
 
class LedPanelnode(Node):
   def __init__(self):
     super().__init__("led_panel")
     self.ledstate_=[0, 0, 0]
     self.ledpanel_pub=self.create_publisher(LedState,"led_state",10)
     self.panel_timer=self.create_timer(4,self.ledpanel_publisher)
     self.ledpanel_service=self.create_service(LedSrv,"led_set",self.ledcallback)
     self.get_logger().info("LED PANNEL AS BEEN STARTED --------")

   def ledpanel_publisher(self):
      msg=LedState()
      msg.led_state=self.ledstate_
      self.ledpanel_pub.publish(msg)
   def ledcallback(self,request,response):
      ledstate=request.ledstate
      state =request.state
      if ledstate>len(self.ledstate_) or ledstate<=0:
         response.success=False
         return response
      if state not in [0,1]:
         response.success=False
         return response
      self.ledstate_[ledstate-1]=state
      response.success=True
      self.ledpanel_publisher()
      return response   
      

def main(args=None):
    rclpy.init(args=args)
    node=LedPanelnode()
    rclpy.spin(node)
    rclpy.shutdown()
if __name__=="__main__":
  main()