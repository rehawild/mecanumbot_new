// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mecanumbot_msgs:msg/OpenCRState.idl
// generated code does not contain a copyright notice

#ifndef MECANUMBOT_MSGS__MSG__DETAIL__OPEN_CR_STATE__STRUCT_HPP_
#define MECANUMBOT_MSGS__MSG__DETAIL__OPEN_CR_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mecanumbot_msgs__msg__OpenCRState __attribute__((deprecated))
#else
# define DEPRECATED__mecanumbot_msgs__msg__OpenCRState __declspec(deprecated)
#endif

namespace mecanumbot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OpenCRState_
{
  using Type = OpenCRState_<ContainerAllocator>;

  explicit OpenCRState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd_vel_bl = 0;
      this->cmd_vel_br = 0;
      this->cmd_vel_fl = 0;
      this->cmd_vel_fr = 0;
      this->vel_bl = 0;
      this->vel_br = 0;
      this->vel_fl = 0;
      this->vel_fr = 0;
      this->pos_bl = 0;
      this->pos_br = 0;
      this->pos_fl = 0;
      this->pos_fr = 0;
      this->curr_bl = 0;
      this->curr_br = 0;
      this->curr_fl = 0;
      this->curr_fr = 0;
      this->acc_bl = 0;
      this->acc_br = 0;
      this->acc_fl = 0;
      this->acc_fr = 0;
      this->pos_n = 0;
      this->pos_gl = 0;
      this->pos_gr = 0;
      this->battery_voltage = 0.0f;
      this->imu_angular_vel_x = 0.0f;
      this->imu_angular_vel_y = 0.0f;
      this->imu_angular_vel_z = 0.0f;
      this->imu_linear_acc_x = 0.0f;
      this->imu_linear_acc_y = 0.0f;
      this->imu_linear_acc_z = 0.0f;
      this->imu_magnetic_x = 0.0f;
      this->imu_magnetic_y = 0.0f;
      this->imu_magnetic_z = 0.0f;
      this->imu_orientation_w = 0.0f;
      this->imu_orientation_x = 0.0f;
      this->imu_orientation_y = 0.0f;
      this->imu_orientation_z = 0.0f;
    }
  }

  explicit OpenCRState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd_vel_bl = 0;
      this->cmd_vel_br = 0;
      this->cmd_vel_fl = 0;
      this->cmd_vel_fr = 0;
      this->vel_bl = 0;
      this->vel_br = 0;
      this->vel_fl = 0;
      this->vel_fr = 0;
      this->pos_bl = 0;
      this->pos_br = 0;
      this->pos_fl = 0;
      this->pos_fr = 0;
      this->curr_bl = 0;
      this->curr_br = 0;
      this->curr_fl = 0;
      this->curr_fr = 0;
      this->acc_bl = 0;
      this->acc_br = 0;
      this->acc_fl = 0;
      this->acc_fr = 0;
      this->pos_n = 0;
      this->pos_gl = 0;
      this->pos_gr = 0;
      this->battery_voltage = 0.0f;
      this->imu_angular_vel_x = 0.0f;
      this->imu_angular_vel_y = 0.0f;
      this->imu_angular_vel_z = 0.0f;
      this->imu_linear_acc_x = 0.0f;
      this->imu_linear_acc_y = 0.0f;
      this->imu_linear_acc_z = 0.0f;
      this->imu_magnetic_x = 0.0f;
      this->imu_magnetic_y = 0.0f;
      this->imu_magnetic_z = 0.0f;
      this->imu_orientation_w = 0.0f;
      this->imu_orientation_x = 0.0f;
      this->imu_orientation_y = 0.0f;
      this->imu_orientation_z = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _cmd_vel_bl_type =
    int16_t;
  _cmd_vel_bl_type cmd_vel_bl;
  using _cmd_vel_br_type =
    int16_t;
  _cmd_vel_br_type cmd_vel_br;
  using _cmd_vel_fl_type =
    int16_t;
  _cmd_vel_fl_type cmd_vel_fl;
  using _cmd_vel_fr_type =
    int16_t;
  _cmd_vel_fr_type cmd_vel_fr;
  using _vel_bl_type =
    int16_t;
  _vel_bl_type vel_bl;
  using _vel_br_type =
    int16_t;
  _vel_br_type vel_br;
  using _vel_fl_type =
    int16_t;
  _vel_fl_type vel_fl;
  using _vel_fr_type =
    int16_t;
  _vel_fr_type vel_fr;
  using _pos_bl_type =
    int16_t;
  _pos_bl_type pos_bl;
  using _pos_br_type =
    int16_t;
  _pos_br_type pos_br;
  using _pos_fl_type =
    int16_t;
  _pos_fl_type pos_fl;
  using _pos_fr_type =
    int16_t;
  _pos_fr_type pos_fr;
  using _curr_bl_type =
    int16_t;
  _curr_bl_type curr_bl;
  using _curr_br_type =
    int16_t;
  _curr_br_type curr_br;
  using _curr_fl_type =
    int16_t;
  _curr_fl_type curr_fl;
  using _curr_fr_type =
    int16_t;
  _curr_fr_type curr_fr;
  using _acc_bl_type =
    int16_t;
  _acc_bl_type acc_bl;
  using _acc_br_type =
    int16_t;
  _acc_br_type acc_br;
  using _acc_fl_type =
    int16_t;
  _acc_fl_type acc_fl;
  using _acc_fr_type =
    int16_t;
  _acc_fr_type acc_fr;
  using _pos_n_type =
    int16_t;
  _pos_n_type pos_n;
  using _pos_gl_type =
    int16_t;
  _pos_gl_type pos_gl;
  using _pos_gr_type =
    int16_t;
  _pos_gr_type pos_gr;
  using _battery_voltage_type =
    float;
  _battery_voltage_type battery_voltage;
  using _imu_angular_vel_x_type =
    float;
  _imu_angular_vel_x_type imu_angular_vel_x;
  using _imu_angular_vel_y_type =
    float;
  _imu_angular_vel_y_type imu_angular_vel_y;
  using _imu_angular_vel_z_type =
    float;
  _imu_angular_vel_z_type imu_angular_vel_z;
  using _imu_linear_acc_x_type =
    float;
  _imu_linear_acc_x_type imu_linear_acc_x;
  using _imu_linear_acc_y_type =
    float;
  _imu_linear_acc_y_type imu_linear_acc_y;
  using _imu_linear_acc_z_type =
    float;
  _imu_linear_acc_z_type imu_linear_acc_z;
  using _imu_magnetic_x_type =
    float;
  _imu_magnetic_x_type imu_magnetic_x;
  using _imu_magnetic_y_type =
    float;
  _imu_magnetic_y_type imu_magnetic_y;
  using _imu_magnetic_z_type =
    float;
  _imu_magnetic_z_type imu_magnetic_z;
  using _imu_orientation_w_type =
    float;
  _imu_orientation_w_type imu_orientation_w;
  using _imu_orientation_x_type =
    float;
  _imu_orientation_x_type imu_orientation_x;
  using _imu_orientation_y_type =
    float;
  _imu_orientation_y_type imu_orientation_y;
  using _imu_orientation_z_type =
    float;
  _imu_orientation_z_type imu_orientation_z;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__cmd_vel_bl(
    const int16_t & _arg)
  {
    this->cmd_vel_bl = _arg;
    return *this;
  }
  Type & set__cmd_vel_br(
    const int16_t & _arg)
  {
    this->cmd_vel_br = _arg;
    return *this;
  }
  Type & set__cmd_vel_fl(
    const int16_t & _arg)
  {
    this->cmd_vel_fl = _arg;
    return *this;
  }
  Type & set__cmd_vel_fr(
    const int16_t & _arg)
  {
    this->cmd_vel_fr = _arg;
    return *this;
  }
  Type & set__vel_bl(
    const int16_t & _arg)
  {
    this->vel_bl = _arg;
    return *this;
  }
  Type & set__vel_br(
    const int16_t & _arg)
  {
    this->vel_br = _arg;
    return *this;
  }
  Type & set__vel_fl(
    const int16_t & _arg)
  {
    this->vel_fl = _arg;
    return *this;
  }
  Type & set__vel_fr(
    const int16_t & _arg)
  {
    this->vel_fr = _arg;
    return *this;
  }
  Type & set__pos_bl(
    const int16_t & _arg)
  {
    this->pos_bl = _arg;
    return *this;
  }
  Type & set__pos_br(
    const int16_t & _arg)
  {
    this->pos_br = _arg;
    return *this;
  }
  Type & set__pos_fl(
    const int16_t & _arg)
  {
    this->pos_fl = _arg;
    return *this;
  }
  Type & set__pos_fr(
    const int16_t & _arg)
  {
    this->pos_fr = _arg;
    return *this;
  }
  Type & set__curr_bl(
    const int16_t & _arg)
  {
    this->curr_bl = _arg;
    return *this;
  }
  Type & set__curr_br(
    const int16_t & _arg)
  {
    this->curr_br = _arg;
    return *this;
  }
  Type & set__curr_fl(
    const int16_t & _arg)
  {
    this->curr_fl = _arg;
    return *this;
  }
  Type & set__curr_fr(
    const int16_t & _arg)
  {
    this->curr_fr = _arg;
    return *this;
  }
  Type & set__acc_bl(
    const int16_t & _arg)
  {
    this->acc_bl = _arg;
    return *this;
  }
  Type & set__acc_br(
    const int16_t & _arg)
  {
    this->acc_br = _arg;
    return *this;
  }
  Type & set__acc_fl(
    const int16_t & _arg)
  {
    this->acc_fl = _arg;
    return *this;
  }
  Type & set__acc_fr(
    const int16_t & _arg)
  {
    this->acc_fr = _arg;
    return *this;
  }
  Type & set__pos_n(
    const int16_t & _arg)
  {
    this->pos_n = _arg;
    return *this;
  }
  Type & set__pos_gl(
    const int16_t & _arg)
  {
    this->pos_gl = _arg;
    return *this;
  }
  Type & set__pos_gr(
    const int16_t & _arg)
  {
    this->pos_gr = _arg;
    return *this;
  }
  Type & set__battery_voltage(
    const float & _arg)
  {
    this->battery_voltage = _arg;
    return *this;
  }
  Type & set__imu_angular_vel_x(
    const float & _arg)
  {
    this->imu_angular_vel_x = _arg;
    return *this;
  }
  Type & set__imu_angular_vel_y(
    const float & _arg)
  {
    this->imu_angular_vel_y = _arg;
    return *this;
  }
  Type & set__imu_angular_vel_z(
    const float & _arg)
  {
    this->imu_angular_vel_z = _arg;
    return *this;
  }
  Type & set__imu_linear_acc_x(
    const float & _arg)
  {
    this->imu_linear_acc_x = _arg;
    return *this;
  }
  Type & set__imu_linear_acc_y(
    const float & _arg)
  {
    this->imu_linear_acc_y = _arg;
    return *this;
  }
  Type & set__imu_linear_acc_z(
    const float & _arg)
  {
    this->imu_linear_acc_z = _arg;
    return *this;
  }
  Type & set__imu_magnetic_x(
    const float & _arg)
  {
    this->imu_magnetic_x = _arg;
    return *this;
  }
  Type & set__imu_magnetic_y(
    const float & _arg)
  {
    this->imu_magnetic_y = _arg;
    return *this;
  }
  Type & set__imu_magnetic_z(
    const float & _arg)
  {
    this->imu_magnetic_z = _arg;
    return *this;
  }
  Type & set__imu_orientation_w(
    const float & _arg)
  {
    this->imu_orientation_w = _arg;
    return *this;
  }
  Type & set__imu_orientation_x(
    const float & _arg)
  {
    this->imu_orientation_x = _arg;
    return *this;
  }
  Type & set__imu_orientation_y(
    const float & _arg)
  {
    this->imu_orientation_y = _arg;
    return *this;
  }
  Type & set__imu_orientation_z(
    const float & _arg)
  {
    this->imu_orientation_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mecanumbot_msgs::msg::OpenCRState_<ContainerAllocator> *;
  using ConstRawPtr =
    const mecanumbot_msgs::msg::OpenCRState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mecanumbot_msgs::msg::OpenCRState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mecanumbot_msgs::msg::OpenCRState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mecanumbot_msgs::msg::OpenCRState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mecanumbot_msgs::msg::OpenCRState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mecanumbot_msgs::msg::OpenCRState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mecanumbot_msgs::msg::OpenCRState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mecanumbot_msgs::msg::OpenCRState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mecanumbot_msgs::msg::OpenCRState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mecanumbot_msgs__msg__OpenCRState
    std::shared_ptr<mecanumbot_msgs::msg::OpenCRState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mecanumbot_msgs__msg__OpenCRState
    std::shared_ptr<mecanumbot_msgs::msg::OpenCRState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OpenCRState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->cmd_vel_bl != other.cmd_vel_bl) {
      return false;
    }
    if (this->cmd_vel_br != other.cmd_vel_br) {
      return false;
    }
    if (this->cmd_vel_fl != other.cmd_vel_fl) {
      return false;
    }
    if (this->cmd_vel_fr != other.cmd_vel_fr) {
      return false;
    }
    if (this->vel_bl != other.vel_bl) {
      return false;
    }
    if (this->vel_br != other.vel_br) {
      return false;
    }
    if (this->vel_fl != other.vel_fl) {
      return false;
    }
    if (this->vel_fr != other.vel_fr) {
      return false;
    }
    if (this->pos_bl != other.pos_bl) {
      return false;
    }
    if (this->pos_br != other.pos_br) {
      return false;
    }
    if (this->pos_fl != other.pos_fl) {
      return false;
    }
    if (this->pos_fr != other.pos_fr) {
      return false;
    }
    if (this->curr_bl != other.curr_bl) {
      return false;
    }
    if (this->curr_br != other.curr_br) {
      return false;
    }
    if (this->curr_fl != other.curr_fl) {
      return false;
    }
    if (this->curr_fr != other.curr_fr) {
      return false;
    }
    if (this->acc_bl != other.acc_bl) {
      return false;
    }
    if (this->acc_br != other.acc_br) {
      return false;
    }
    if (this->acc_fl != other.acc_fl) {
      return false;
    }
    if (this->acc_fr != other.acc_fr) {
      return false;
    }
    if (this->pos_n != other.pos_n) {
      return false;
    }
    if (this->pos_gl != other.pos_gl) {
      return false;
    }
    if (this->pos_gr != other.pos_gr) {
      return false;
    }
    if (this->battery_voltage != other.battery_voltage) {
      return false;
    }
    if (this->imu_angular_vel_x != other.imu_angular_vel_x) {
      return false;
    }
    if (this->imu_angular_vel_y != other.imu_angular_vel_y) {
      return false;
    }
    if (this->imu_angular_vel_z != other.imu_angular_vel_z) {
      return false;
    }
    if (this->imu_linear_acc_x != other.imu_linear_acc_x) {
      return false;
    }
    if (this->imu_linear_acc_y != other.imu_linear_acc_y) {
      return false;
    }
    if (this->imu_linear_acc_z != other.imu_linear_acc_z) {
      return false;
    }
    if (this->imu_magnetic_x != other.imu_magnetic_x) {
      return false;
    }
    if (this->imu_magnetic_y != other.imu_magnetic_y) {
      return false;
    }
    if (this->imu_magnetic_z != other.imu_magnetic_z) {
      return false;
    }
    if (this->imu_orientation_w != other.imu_orientation_w) {
      return false;
    }
    if (this->imu_orientation_x != other.imu_orientation_x) {
      return false;
    }
    if (this->imu_orientation_y != other.imu_orientation_y) {
      return false;
    }
    if (this->imu_orientation_z != other.imu_orientation_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const OpenCRState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OpenCRState_

// alias to use template instance with default allocator
using OpenCRState =
  mecanumbot_msgs::msg::OpenCRState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mecanumbot_msgs

#endif  // MECANUMBOT_MSGS__MSG__DETAIL__OPEN_CR_STATE__STRUCT_HPP_
