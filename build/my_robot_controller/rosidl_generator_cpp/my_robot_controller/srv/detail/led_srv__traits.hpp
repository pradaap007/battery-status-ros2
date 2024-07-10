// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_robot_controller:srv/LedSrv.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_CONTROLLER__SRV__DETAIL__LED_SRV__TRAITS_HPP_
#define MY_ROBOT_CONTROLLER__SRV__DETAIL__LED_SRV__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_robot_controller/srv/detail/led_srv__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_robot_controller
{

namespace srv
{

inline void to_flow_style_yaml(
  const LedSrv_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: ledstate
  {
    out << "ledstate: ";
    rosidl_generator_traits::value_to_yaml(msg.ledstate, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LedSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ledstate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ledstate: ";
    rosidl_generator_traits::value_to_yaml(msg.ledstate, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LedSrv_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace my_robot_controller

namespace rosidl_generator_traits
{

[[deprecated("use my_robot_controller::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_robot_controller::srv::LedSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_robot_controller::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_robot_controller::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_robot_controller::srv::LedSrv_Request & msg)
{
  return my_robot_controller::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_robot_controller::srv::LedSrv_Request>()
{
  return "my_robot_controller::srv::LedSrv_Request";
}

template<>
inline const char * name<my_robot_controller::srv::LedSrv_Request>()
{
  return "my_robot_controller/srv/LedSrv_Request";
}

template<>
struct has_fixed_size<my_robot_controller::srv::LedSrv_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_robot_controller::srv::LedSrv_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_robot_controller::srv::LedSrv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace my_robot_controller
{

namespace srv
{

inline void to_flow_style_yaml(
  const LedSrv_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LedSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LedSrv_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace my_robot_controller

namespace rosidl_generator_traits
{

[[deprecated("use my_robot_controller::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_robot_controller::srv::LedSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_robot_controller::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_robot_controller::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_robot_controller::srv::LedSrv_Response & msg)
{
  return my_robot_controller::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_robot_controller::srv::LedSrv_Response>()
{
  return "my_robot_controller::srv::LedSrv_Response";
}

template<>
inline const char * name<my_robot_controller::srv::LedSrv_Response>()
{
  return "my_robot_controller/srv/LedSrv_Response";
}

template<>
struct has_fixed_size<my_robot_controller::srv::LedSrv_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_robot_controller::srv::LedSrv_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_robot_controller::srv::LedSrv_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_robot_controller::srv::LedSrv>()
{
  return "my_robot_controller::srv::LedSrv";
}

template<>
inline const char * name<my_robot_controller::srv::LedSrv>()
{
  return "my_robot_controller/srv/LedSrv";
}

template<>
struct has_fixed_size<my_robot_controller::srv::LedSrv>
  : std::integral_constant<
    bool,
    has_fixed_size<my_robot_controller::srv::LedSrv_Request>::value &&
    has_fixed_size<my_robot_controller::srv::LedSrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_robot_controller::srv::LedSrv>
  : std::integral_constant<
    bool,
    has_bounded_size<my_robot_controller::srv::LedSrv_Request>::value &&
    has_bounded_size<my_robot_controller::srv::LedSrv_Response>::value
  >
{
};

template<>
struct is_service<my_robot_controller::srv::LedSrv>
  : std::true_type
{
};

template<>
struct is_service_request<my_robot_controller::srv::LedSrv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_robot_controller::srv::LedSrv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_ROBOT_CONTROLLER__SRV__DETAIL__LED_SRV__TRAITS_HPP_