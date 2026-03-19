// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mecanumbot_msgs:msg/AccessMotorCmd.idl
// generated code does not contain a copyright notice

#ifndef MECANUMBOT_MSGS__MSG__DETAIL__ACCESS_MOTOR_CMD__STRUCT_HPP_
#define MECANUMBOT_MSGS__MSG__DETAIL__ACCESS_MOTOR_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mecanumbot_msgs__msg__AccessMotorCmd __attribute__((deprecated))
#else
# define DEPRECATED__mecanumbot_msgs__msg__AccessMotorCmd __declspec(deprecated)
#endif

namespace mecanumbot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AccessMotorCmd_
{
  using Type = AccessMotorCmd_<ContainerAllocator>;

  explicit AccessMotorCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->n_pos = 0.0f;
      this->gl_pos = 0.0f;
      this->gr_pos = 0.0f;
    }
  }

  explicit AccessMotorCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->n_pos = 0.0f;
      this->gl_pos = 0.0f;
      this->gr_pos = 0.0f;
    }
  }

  // field types and members
  using _n_pos_type =
    float;
  _n_pos_type n_pos;
  using _gl_pos_type =
    float;
  _gl_pos_type gl_pos;
  using _gr_pos_type =
    float;
  _gr_pos_type gr_pos;

  // setters for named parameter idiom
  Type & set__n_pos(
    const float & _arg)
  {
    this->n_pos = _arg;
    return *this;
  }
  Type & set__gl_pos(
    const float & _arg)
  {
    this->gl_pos = _arg;
    return *this;
  }
  Type & set__gr_pos(
    const float & _arg)
  {
    this->gr_pos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mecanumbot_msgs::msg::AccessMotorCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const mecanumbot_msgs::msg::AccessMotorCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mecanumbot_msgs::msg::AccessMotorCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mecanumbot_msgs::msg::AccessMotorCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mecanumbot_msgs::msg::AccessMotorCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mecanumbot_msgs::msg::AccessMotorCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mecanumbot_msgs::msg::AccessMotorCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mecanumbot_msgs::msg::AccessMotorCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mecanumbot_msgs::msg::AccessMotorCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mecanumbot_msgs::msg::AccessMotorCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mecanumbot_msgs__msg__AccessMotorCmd
    std::shared_ptr<mecanumbot_msgs::msg::AccessMotorCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mecanumbot_msgs__msg__AccessMotorCmd
    std::shared_ptr<mecanumbot_msgs::msg::AccessMotorCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AccessMotorCmd_ & other) const
  {
    if (this->n_pos != other.n_pos) {
      return false;
    }
    if (this->gl_pos != other.gl_pos) {
      return false;
    }
    if (this->gr_pos != other.gr_pos) {
      return false;
    }
    return true;
  }
  bool operator!=(const AccessMotorCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AccessMotorCmd_

// alias to use template instance with default allocator
using AccessMotorCmd =
  mecanumbot_msgs::msg::AccessMotorCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mecanumbot_msgs

#endif  // MECANUMBOT_MSGS__MSG__DETAIL__ACCESS_MOTOR_CMD__STRUCT_HPP_
