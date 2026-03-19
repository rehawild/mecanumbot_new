// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mecanumbot_msgs:msg/AccessMotorCmd.idl
// generated code does not contain a copyright notice

#ifndef MECANUMBOT_MSGS__MSG__DETAIL__ACCESS_MOTOR_CMD__TRAITS_HPP_
#define MECANUMBOT_MSGS__MSG__DETAIL__ACCESS_MOTOR_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mecanumbot_msgs/msg/detail/access_motor_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mecanumbot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AccessMotorCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: n_pos
  {
    out << "n_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.n_pos, out);
    out << ", ";
  }

  // member: gl_pos
  {
    out << "gl_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.gl_pos, out);
    out << ", ";
  }

  // member: gr_pos
  {
    out << "gr_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.gr_pos, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AccessMotorCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: n_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.n_pos, out);
    out << "\n";
  }

  // member: gl_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gl_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.gl_pos, out);
    out << "\n";
  }

  // member: gr_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gr_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.gr_pos, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AccessMotorCmd & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mecanumbot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mecanumbot_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mecanumbot_msgs::msg::AccessMotorCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  mecanumbot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mecanumbot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mecanumbot_msgs::msg::AccessMotorCmd & msg)
{
  return mecanumbot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mecanumbot_msgs::msg::AccessMotorCmd>()
{
  return "mecanumbot_msgs::msg::AccessMotorCmd";
}

template<>
inline const char * name<mecanumbot_msgs::msg::AccessMotorCmd>()
{
  return "mecanumbot_msgs/msg/AccessMotorCmd";
}

template<>
struct has_fixed_size<mecanumbot_msgs::msg::AccessMotorCmd>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mecanumbot_msgs::msg::AccessMotorCmd>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mecanumbot_msgs::msg::AccessMotorCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MECANUMBOT_MSGS__MSG__DETAIL__ACCESS_MOTOR_CMD__TRAITS_HPP_
