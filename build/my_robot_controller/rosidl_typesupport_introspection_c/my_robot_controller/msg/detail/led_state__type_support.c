// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_robot_controller:msg/LedState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_robot_controller/msg/detail/led_state__rosidl_typesupport_introspection_c.h"
#include "my_robot_controller/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_robot_controller/msg/detail/led_state__functions.h"
#include "my_robot_controller/msg/detail/led_state__struct.h"


// Include directives for member types
// Member `led_state`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_robot_controller__msg__LedState__rosidl_typesupport_introspection_c__LedState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_robot_controller__msg__LedState__init(message_memory);
}

void my_robot_controller__msg__LedState__rosidl_typesupport_introspection_c__LedState_fini_function(void * message_memory)
{
  my_robot_controller__msg__LedState__fini(message_memory);
}

size_t my_robot_controller__msg__LedState__rosidl_typesupport_introspection_c__size_function__LedState__led_state(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * my_robot_controller__msg__LedState__rosidl_typesupport_introspection_c__get_const_function__LedState__led_state(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_robot_controller__msg__LedState__rosidl_typesupport_introspection_c__get_function__LedState__led_state(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_robot_controller__msg__LedState__rosidl_typesupport_introspection_c__fetch_function__LedState__led_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    my_robot_controller__msg__LedState__rosidl_typesupport_introspection_c__get_const_function__LedState__led_state(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void my_robot_controller__msg__LedState__rosidl_typesupport_introspection_c__assign_function__LedState__led_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    my_robot_controller__msg__LedState__rosidl_typesupport_introspection_c__get_function__LedState__led_state(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool my_robot_controller__msg__LedState__rosidl_typesupport_introspection_c__resize_function__LedState__led_state(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember my_robot_controller__msg__LedState__rosidl_typesupport_introspection_c__LedState_message_member_array[1] = {
  {
    "led_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_controller__msg__LedState, led_state),  // bytes offset in struct
    NULL,  // default value
    my_robot_controller__msg__LedState__rosidl_typesupport_introspection_c__size_function__LedState__led_state,  // size() function pointer
    my_robot_controller__msg__LedState__rosidl_typesupport_introspection_c__get_const_function__LedState__led_state,  // get_const(index) function pointer
    my_robot_controller__msg__LedState__rosidl_typesupport_introspection_c__get_function__LedState__led_state,  // get(index) function pointer
    my_robot_controller__msg__LedState__rosidl_typesupport_introspection_c__fetch_function__LedState__led_state,  // fetch(index, &value) function pointer
    my_robot_controller__msg__LedState__rosidl_typesupport_introspection_c__assign_function__LedState__led_state,  // assign(index, value) function pointer
    my_robot_controller__msg__LedState__rosidl_typesupport_introspection_c__resize_function__LedState__led_state  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_robot_controller__msg__LedState__rosidl_typesupport_introspection_c__LedState_message_members = {
  "my_robot_controller__msg",  // message namespace
  "LedState",  // message name
  1,  // number of fields
  sizeof(my_robot_controller__msg__LedState),
  my_robot_controller__msg__LedState__rosidl_typesupport_introspection_c__LedState_message_member_array,  // message members
  my_robot_controller__msg__LedState__rosidl_typesupport_introspection_c__LedState_init_function,  // function to initialize message memory (memory has to be allocated)
  my_robot_controller__msg__LedState__rosidl_typesupport_introspection_c__LedState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_robot_controller__msg__LedState__rosidl_typesupport_introspection_c__LedState_message_type_support_handle = {
  0,
  &my_robot_controller__msg__LedState__rosidl_typesupport_introspection_c__LedState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_robot_controller
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_controller, msg, LedState)() {
  if (!my_robot_controller__msg__LedState__rosidl_typesupport_introspection_c__LedState_message_type_support_handle.typesupport_identifier) {
    my_robot_controller__msg__LedState__rosidl_typesupport_introspection_c__LedState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_robot_controller__msg__LedState__rosidl_typesupport_introspection_c__LedState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
