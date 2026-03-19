// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mecanumbot_msgs:msg/OpenCRState.idl
// generated code does not contain a copyright notice

#ifndef MECANUMBOT_MSGS__MSG__DETAIL__OPEN_CR_STATE__BUILDER_HPP_
#define MECANUMBOT_MSGS__MSG__DETAIL__OPEN_CR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mecanumbot_msgs/msg/detail/open_cr_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mecanumbot_msgs
{

namespace msg
{

namespace builder
{

class Init_OpenCRState_imu_orientation_z
{
public:
  explicit Init_OpenCRState_imu_orientation_z(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  ::mecanumbot_msgs::msg::OpenCRState imu_orientation_z(::mecanumbot_msgs::msg::OpenCRState::_imu_orientation_z_type arg)
  {
    msg_.imu_orientation_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_imu_orientation_y
{
public:
  explicit Init_OpenCRState_imu_orientation_y(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_imu_orientation_z imu_orientation_y(::mecanumbot_msgs::msg::OpenCRState::_imu_orientation_y_type arg)
  {
    msg_.imu_orientation_y = std::move(arg);
    return Init_OpenCRState_imu_orientation_z(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_imu_orientation_x
{
public:
  explicit Init_OpenCRState_imu_orientation_x(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_imu_orientation_y imu_orientation_x(::mecanumbot_msgs::msg::OpenCRState::_imu_orientation_x_type arg)
  {
    msg_.imu_orientation_x = std::move(arg);
    return Init_OpenCRState_imu_orientation_y(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_imu_orientation_w
{
public:
  explicit Init_OpenCRState_imu_orientation_w(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_imu_orientation_x imu_orientation_w(::mecanumbot_msgs::msg::OpenCRState::_imu_orientation_w_type arg)
  {
    msg_.imu_orientation_w = std::move(arg);
    return Init_OpenCRState_imu_orientation_x(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_imu_magnetic_z
{
public:
  explicit Init_OpenCRState_imu_magnetic_z(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_imu_orientation_w imu_magnetic_z(::mecanumbot_msgs::msg::OpenCRState::_imu_magnetic_z_type arg)
  {
    msg_.imu_magnetic_z = std::move(arg);
    return Init_OpenCRState_imu_orientation_w(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_imu_magnetic_y
{
public:
  explicit Init_OpenCRState_imu_magnetic_y(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_imu_magnetic_z imu_magnetic_y(::mecanumbot_msgs::msg::OpenCRState::_imu_magnetic_y_type arg)
  {
    msg_.imu_magnetic_y = std::move(arg);
    return Init_OpenCRState_imu_magnetic_z(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_imu_magnetic_x
{
public:
  explicit Init_OpenCRState_imu_magnetic_x(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_imu_magnetic_y imu_magnetic_x(::mecanumbot_msgs::msg::OpenCRState::_imu_magnetic_x_type arg)
  {
    msg_.imu_magnetic_x = std::move(arg);
    return Init_OpenCRState_imu_magnetic_y(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_imu_linear_acc_z
{
public:
  explicit Init_OpenCRState_imu_linear_acc_z(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_imu_magnetic_x imu_linear_acc_z(::mecanumbot_msgs::msg::OpenCRState::_imu_linear_acc_z_type arg)
  {
    msg_.imu_linear_acc_z = std::move(arg);
    return Init_OpenCRState_imu_magnetic_x(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_imu_linear_acc_y
{
public:
  explicit Init_OpenCRState_imu_linear_acc_y(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_imu_linear_acc_z imu_linear_acc_y(::mecanumbot_msgs::msg::OpenCRState::_imu_linear_acc_y_type arg)
  {
    msg_.imu_linear_acc_y = std::move(arg);
    return Init_OpenCRState_imu_linear_acc_z(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_imu_linear_acc_x
{
public:
  explicit Init_OpenCRState_imu_linear_acc_x(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_imu_linear_acc_y imu_linear_acc_x(::mecanumbot_msgs::msg::OpenCRState::_imu_linear_acc_x_type arg)
  {
    msg_.imu_linear_acc_x = std::move(arg);
    return Init_OpenCRState_imu_linear_acc_y(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_imu_angular_vel_z
{
public:
  explicit Init_OpenCRState_imu_angular_vel_z(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_imu_linear_acc_x imu_angular_vel_z(::mecanumbot_msgs::msg::OpenCRState::_imu_angular_vel_z_type arg)
  {
    msg_.imu_angular_vel_z = std::move(arg);
    return Init_OpenCRState_imu_linear_acc_x(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_imu_angular_vel_y
{
public:
  explicit Init_OpenCRState_imu_angular_vel_y(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_imu_angular_vel_z imu_angular_vel_y(::mecanumbot_msgs::msg::OpenCRState::_imu_angular_vel_y_type arg)
  {
    msg_.imu_angular_vel_y = std::move(arg);
    return Init_OpenCRState_imu_angular_vel_z(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_imu_angular_vel_x
{
public:
  explicit Init_OpenCRState_imu_angular_vel_x(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_imu_angular_vel_y imu_angular_vel_x(::mecanumbot_msgs::msg::OpenCRState::_imu_angular_vel_x_type arg)
  {
    msg_.imu_angular_vel_x = std::move(arg);
    return Init_OpenCRState_imu_angular_vel_y(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_battery_voltage
{
public:
  explicit Init_OpenCRState_battery_voltage(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_imu_angular_vel_x battery_voltage(::mecanumbot_msgs::msg::OpenCRState::_battery_voltage_type arg)
  {
    msg_.battery_voltage = std::move(arg);
    return Init_OpenCRState_imu_angular_vel_x(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_pos_gr
{
public:
  explicit Init_OpenCRState_pos_gr(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_battery_voltage pos_gr(::mecanumbot_msgs::msg::OpenCRState::_pos_gr_type arg)
  {
    msg_.pos_gr = std::move(arg);
    return Init_OpenCRState_battery_voltage(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_pos_gl
{
public:
  explicit Init_OpenCRState_pos_gl(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_pos_gr pos_gl(::mecanumbot_msgs::msg::OpenCRState::_pos_gl_type arg)
  {
    msg_.pos_gl = std::move(arg);
    return Init_OpenCRState_pos_gr(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_pos_n
{
public:
  explicit Init_OpenCRState_pos_n(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_pos_gl pos_n(::mecanumbot_msgs::msg::OpenCRState::_pos_n_type arg)
  {
    msg_.pos_n = std::move(arg);
    return Init_OpenCRState_pos_gl(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_acc_fr
{
public:
  explicit Init_OpenCRState_acc_fr(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_pos_n acc_fr(::mecanumbot_msgs::msg::OpenCRState::_acc_fr_type arg)
  {
    msg_.acc_fr = std::move(arg);
    return Init_OpenCRState_pos_n(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_acc_fl
{
public:
  explicit Init_OpenCRState_acc_fl(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_acc_fr acc_fl(::mecanumbot_msgs::msg::OpenCRState::_acc_fl_type arg)
  {
    msg_.acc_fl = std::move(arg);
    return Init_OpenCRState_acc_fr(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_acc_br
{
public:
  explicit Init_OpenCRState_acc_br(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_acc_fl acc_br(::mecanumbot_msgs::msg::OpenCRState::_acc_br_type arg)
  {
    msg_.acc_br = std::move(arg);
    return Init_OpenCRState_acc_fl(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_acc_bl
{
public:
  explicit Init_OpenCRState_acc_bl(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_acc_br acc_bl(::mecanumbot_msgs::msg::OpenCRState::_acc_bl_type arg)
  {
    msg_.acc_bl = std::move(arg);
    return Init_OpenCRState_acc_br(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_curr_fr
{
public:
  explicit Init_OpenCRState_curr_fr(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_acc_bl curr_fr(::mecanumbot_msgs::msg::OpenCRState::_curr_fr_type arg)
  {
    msg_.curr_fr = std::move(arg);
    return Init_OpenCRState_acc_bl(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_curr_fl
{
public:
  explicit Init_OpenCRState_curr_fl(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_curr_fr curr_fl(::mecanumbot_msgs::msg::OpenCRState::_curr_fl_type arg)
  {
    msg_.curr_fl = std::move(arg);
    return Init_OpenCRState_curr_fr(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_curr_br
{
public:
  explicit Init_OpenCRState_curr_br(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_curr_fl curr_br(::mecanumbot_msgs::msg::OpenCRState::_curr_br_type arg)
  {
    msg_.curr_br = std::move(arg);
    return Init_OpenCRState_curr_fl(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_curr_bl
{
public:
  explicit Init_OpenCRState_curr_bl(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_curr_br curr_bl(::mecanumbot_msgs::msg::OpenCRState::_curr_bl_type arg)
  {
    msg_.curr_bl = std::move(arg);
    return Init_OpenCRState_curr_br(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_pos_fr
{
public:
  explicit Init_OpenCRState_pos_fr(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_curr_bl pos_fr(::mecanumbot_msgs::msg::OpenCRState::_pos_fr_type arg)
  {
    msg_.pos_fr = std::move(arg);
    return Init_OpenCRState_curr_bl(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_pos_fl
{
public:
  explicit Init_OpenCRState_pos_fl(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_pos_fr pos_fl(::mecanumbot_msgs::msg::OpenCRState::_pos_fl_type arg)
  {
    msg_.pos_fl = std::move(arg);
    return Init_OpenCRState_pos_fr(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_pos_br
{
public:
  explicit Init_OpenCRState_pos_br(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_pos_fl pos_br(::mecanumbot_msgs::msg::OpenCRState::_pos_br_type arg)
  {
    msg_.pos_br = std::move(arg);
    return Init_OpenCRState_pos_fl(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_pos_bl
{
public:
  explicit Init_OpenCRState_pos_bl(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_pos_br pos_bl(::mecanumbot_msgs::msg::OpenCRState::_pos_bl_type arg)
  {
    msg_.pos_bl = std::move(arg);
    return Init_OpenCRState_pos_br(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_vel_fr
{
public:
  explicit Init_OpenCRState_vel_fr(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_pos_bl vel_fr(::mecanumbot_msgs::msg::OpenCRState::_vel_fr_type arg)
  {
    msg_.vel_fr = std::move(arg);
    return Init_OpenCRState_pos_bl(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_vel_fl
{
public:
  explicit Init_OpenCRState_vel_fl(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_vel_fr vel_fl(::mecanumbot_msgs::msg::OpenCRState::_vel_fl_type arg)
  {
    msg_.vel_fl = std::move(arg);
    return Init_OpenCRState_vel_fr(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_vel_br
{
public:
  explicit Init_OpenCRState_vel_br(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_vel_fl vel_br(::mecanumbot_msgs::msg::OpenCRState::_vel_br_type arg)
  {
    msg_.vel_br = std::move(arg);
    return Init_OpenCRState_vel_fl(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_vel_bl
{
public:
  explicit Init_OpenCRState_vel_bl(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_vel_br vel_bl(::mecanumbot_msgs::msg::OpenCRState::_vel_bl_type arg)
  {
    msg_.vel_bl = std::move(arg);
    return Init_OpenCRState_vel_br(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_cmd_vel_fr
{
public:
  explicit Init_OpenCRState_cmd_vel_fr(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_vel_bl cmd_vel_fr(::mecanumbot_msgs::msg::OpenCRState::_cmd_vel_fr_type arg)
  {
    msg_.cmd_vel_fr = std::move(arg);
    return Init_OpenCRState_vel_bl(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_cmd_vel_fl
{
public:
  explicit Init_OpenCRState_cmd_vel_fl(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_cmd_vel_fr cmd_vel_fl(::mecanumbot_msgs::msg::OpenCRState::_cmd_vel_fl_type arg)
  {
    msg_.cmd_vel_fl = std::move(arg);
    return Init_OpenCRState_cmd_vel_fr(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_cmd_vel_br
{
public:
  explicit Init_OpenCRState_cmd_vel_br(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_cmd_vel_fl cmd_vel_br(::mecanumbot_msgs::msg::OpenCRState::_cmd_vel_br_type arg)
  {
    msg_.cmd_vel_br = std::move(arg);
    return Init_OpenCRState_cmd_vel_fl(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_cmd_vel_bl
{
public:
  explicit Init_OpenCRState_cmd_vel_bl(::mecanumbot_msgs::msg::OpenCRState & msg)
  : msg_(msg)
  {}
  Init_OpenCRState_cmd_vel_br cmd_vel_bl(::mecanumbot_msgs::msg::OpenCRState::_cmd_vel_bl_type arg)
  {
    msg_.cmd_vel_bl = std::move(arg);
    return Init_OpenCRState_cmd_vel_br(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

class Init_OpenCRState_header
{
public:
  Init_OpenCRState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OpenCRState_cmd_vel_bl header(::mecanumbot_msgs::msg::OpenCRState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_OpenCRState_cmd_vel_bl(msg_);
  }

private:
  ::mecanumbot_msgs::msg::OpenCRState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecanumbot_msgs::msg::OpenCRState>()
{
  return mecanumbot_msgs::msg::builder::Init_OpenCRState_header();
}

}  // namespace mecanumbot_msgs

#endif  // MECANUMBOT_MSGS__MSG__DETAIL__OPEN_CR_STATE__BUILDER_HPP_
