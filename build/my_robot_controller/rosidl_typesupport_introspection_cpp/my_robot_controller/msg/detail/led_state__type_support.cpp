// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from my_robot_controller:msg/LedState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "my_robot_controller/msg/detail/led_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_robot_controller
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LedState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_robot_controller::msg::LedState(_init);
}

void LedState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_robot_controller::msg::LedState *>(message_memory);
  typed_message->~LedState();
}

size_t size_function__LedState__led_state(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LedState__led_state(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__LedState__led_state(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__LedState__led_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__LedState__led_state(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__LedState__led_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__LedState__led_state(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

void resize_function__LedState__led_state(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LedState_message_member_array[1] = {
  {
    "led_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_controller::msg::LedState, led_state),  // bytes offset in struct
    nullptr,  // default value
    size_function__LedState__led_state,  // size() function pointer
    get_const_function__LedState__led_state,  // get_const(index) function pointer
    get_function__LedState__led_state,  // get(index) function pointer
    fetch_function__LedState__led_state,  // fetch(index, &value) function pointer
    assign_function__LedState__led_state,  // assign(index, value) function pointer
    resize_function__LedState__led_state  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LedState_message_members = {
  "my_robot_controller::msg",  // message namespace
  "LedState",  // message name
  1,  // number of fields
  sizeof(my_robot_controller::msg::LedState),
  LedState_message_member_array,  // message members
  LedState_init_function,  // function to initialize message memory (memory has to be allocated)
  LedState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LedState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LedState_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace my_robot_controller


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_robot_controller::msg::LedState>()
{
  return &::my_robot_controller::msg::rosidl_typesupport_introspection_cpp::LedState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_robot_controller, msg, LedState)() {
  return &::my_robot_controller::msg::rosidl_typesupport_introspection_cpp::LedState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
