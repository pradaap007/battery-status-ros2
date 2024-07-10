// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_controller:srv/LedSrv.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_CONTROLLER__SRV__DETAIL__LED_SRV__BUILDER_HPP_
#define MY_ROBOT_CONTROLLER__SRV__DETAIL__LED_SRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_controller/srv/detail/led_srv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_controller
{

namespace srv
{

namespace builder
{

class Init_LedSrv_Request_state
{
public:
  explicit Init_LedSrv_Request_state(::my_robot_controller::srv::LedSrv_Request & msg)
  : msg_(msg)
  {}
  ::my_robot_controller::srv::LedSrv_Request state(::my_robot_controller::srv::LedSrv_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_controller::srv::LedSrv_Request msg_;
};

class Init_LedSrv_Request_ledstate
{
public:
  Init_LedSrv_Request_ledstate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedSrv_Request_state ledstate(::my_robot_controller::srv::LedSrv_Request::_ledstate_type arg)
  {
    msg_.ledstate = std::move(arg);
    return Init_LedSrv_Request_state(msg_);
  }

private:
  ::my_robot_controller::srv::LedSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_controller::srv::LedSrv_Request>()
{
  return my_robot_controller::srv::builder::Init_LedSrv_Request_ledstate();
}

}  // namespace my_robot_controller


namespace my_robot_controller
{

namespace srv
{

namespace builder
{

class Init_LedSrv_Response_success
{
public:
  Init_LedSrv_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_robot_controller::srv::LedSrv_Response success(::my_robot_controller::srv::LedSrv_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_controller::srv::LedSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_controller::srv::LedSrv_Response>()
{
  return my_robot_controller::srv::builder::Init_LedSrv_Response_success();
}

}  // namespace my_robot_controller

#endif  // MY_ROBOT_CONTROLLER__SRV__DETAIL__LED_SRV__BUILDER_HPP_
