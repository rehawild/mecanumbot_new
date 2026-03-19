// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mecanumbot_msgs:msg/AccessMotorCmd.idl
// generated code does not contain a copyright notice

#ifndef MECANUMBOT_MSGS__MSG__DETAIL__ACCESS_MOTOR_CMD__BUILDER_HPP_
#define MECANUMBOT_MSGS__MSG__DETAIL__ACCESS_MOTOR_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mecanumbot_msgs/msg/detail/access_motor_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mecanumbot_msgs
{

namespace msg
{

namespace builder
{

class Init_AccessMotorCmd_gr_pos
{
public:
  explicit Init_AccessMotorCmd_gr_pos(::mecanumbot_msgs::msg::AccessMotorCmd & msg)
  : msg_(msg)
  {}
  ::mecanumbot_msgs::msg::AccessMotorCmd gr_pos(::mecanumbot_msgs::msg::AccessMotorCmd::_gr_pos_type arg)
  {
    msg_.gr_pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecanumbot_msgs::msg::AccessMotorCmd msg_;
};

class Init_AccessMotorCmd_gl_pos
{
public:
  explicit Init_AccessMotorCmd_gl_pos(::mecanumbot_msgs::msg::AccessMotorCmd & msg)
  : msg_(msg)
  {}
  Init_AccessMotorCmd_gr_pos gl_pos(::mecanumbot_msgs::msg::AccessMotorCmd::_gl_pos_type arg)
  {
    msg_.gl_pos = std::move(arg);
    return Init_AccessMotorCmd_gr_pos(msg_);
  }

private:
  ::mecanumbot_msgs::msg::AccessMotorCmd msg_;
};

class Init_AccessMotorCmd_n_pos
{
public:
  Init_AccessMotorCmd_n_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AccessMotorCmd_gl_pos n_pos(::mecanumbot_msgs::msg::AccessMotorCmd::_n_pos_type arg)
  {
    msg_.n_pos = std::move(arg);
    return Init_AccessMotorCmd_gl_pos(msg_);
  }

private:
  ::mecanumbot_msgs::msg::AccessMotorCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecanumbot_msgs::msg::AccessMotorCmd>()
{
  return mecanumbot_msgs::msg::builder::Init_AccessMotorCmd_n_pos();
}

}  // namespace mecanumbot_msgs

#endif  // MECANUMBOT_MSGS__MSG__DETAIL__ACCESS_MOTOR_CMD__BUILDER_HPP_
