// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_robot_controller:srv/LedSrv.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_CONTROLLER__SRV__DETAIL__LED_SRV__STRUCT_HPP_
#define MY_ROBOT_CONTROLLER__SRV__DETAIL__LED_SRV__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_robot_controller__srv__LedSrv_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_robot_controller__srv__LedSrv_Request __declspec(deprecated)
#endif

namespace my_robot_controller
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LedSrv_Request_
{
  using Type = LedSrv_Request_<ContainerAllocator>;

  explicit LedSrv_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ledstate = 0ll;
      this->state = 0ll;
    }
  }

  explicit LedSrv_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ledstate = 0ll;
      this->state = 0ll;
    }
  }

  // field types and members
  using _ledstate_type =
    int64_t;
  _ledstate_type ledstate;
  using _state_type =
    int64_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__ledstate(
    const int64_t & _arg)
  {
    this->ledstate = _arg;
    return *this;
  }
  Type & set__state(
    const int64_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_robot_controller::srv::LedSrv_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_robot_controller::srv::LedSrv_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_robot_controller::srv::LedSrv_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_robot_controller::srv::LedSrv_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_robot_controller::srv::LedSrv_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_robot_controller::srv::LedSrv_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_robot_controller::srv::LedSrv_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_robot_controller::srv::LedSrv_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_robot_controller::srv::LedSrv_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_robot_controller::srv::LedSrv_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_robot_controller__srv__LedSrv_Request
    std::shared_ptr<my_robot_controller::srv::LedSrv_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_robot_controller__srv__LedSrv_Request
    std::shared_ptr<my_robot_controller::srv::LedSrv_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedSrv_Request_ & other) const
  {
    if (this->ledstate != other.ledstate) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedSrv_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedSrv_Request_

// alias to use template instance with default allocator
using LedSrv_Request =
  my_robot_controller::srv::LedSrv_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_robot_controller


#ifndef _WIN32
# define DEPRECATED__my_robot_controller__srv__LedSrv_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_robot_controller__srv__LedSrv_Response __declspec(deprecated)
#endif

namespace my_robot_controller
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LedSrv_Response_
{
  using Type = LedSrv_Response_<ContainerAllocator>;

  explicit LedSrv_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit LedSrv_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_robot_controller::srv::LedSrv_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_robot_controller::srv::LedSrv_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_robot_controller::srv::LedSrv_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_robot_controller::srv::LedSrv_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_robot_controller::srv::LedSrv_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_robot_controller::srv::LedSrv_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_robot_controller::srv::LedSrv_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_robot_controller::srv::LedSrv_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_robot_controller::srv::LedSrv_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_robot_controller::srv::LedSrv_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_robot_controller__srv__LedSrv_Response
    std::shared_ptr<my_robot_controller::srv::LedSrv_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_robot_controller__srv__LedSrv_Response
    std::shared_ptr<my_robot_controller::srv::LedSrv_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedSrv_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedSrv_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedSrv_Response_

// alias to use template instance with default allocator
using LedSrv_Response =
  my_robot_controller::srv::LedSrv_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_robot_controller

namespace my_robot_controller
{

namespace srv
{

struct LedSrv
{
  using Request = my_robot_controller::srv::LedSrv_Request;
  using Response = my_robot_controller::srv::LedSrv_Response;
};

}  // namespace srv

}  // namespace my_robot_controller

#endif  // MY_ROBOT_CONTROLLER__SRV__DETAIL__LED_SRV__STRUCT_HPP_
