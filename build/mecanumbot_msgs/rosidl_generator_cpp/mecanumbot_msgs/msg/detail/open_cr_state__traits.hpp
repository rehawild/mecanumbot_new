// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mecanumbot_msgs:msg/OpenCRState.idl
// generated code does not contain a copyright notice

#ifndef MECANUMBOT_MSGS__MSG__DETAIL__OPEN_CR_STATE__TRAITS_HPP_
#define MECANUMBOT_MSGS__MSG__DETAIL__OPEN_CR_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mecanumbot_msgs/msg/detail/open_cr_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace mecanumbot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const OpenCRState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: cmd_vel_bl
  {
    out << "cmd_vel_bl: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_vel_bl, out);
    out << ", ";
  }

  // member: cmd_vel_br
  {
    out << "cmd_vel_br: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_vel_br, out);
    out << ", ";
  }

  // member: cmd_vel_fl
  {
    out << "cmd_vel_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_vel_fl, out);
    out << ", ";
  }

  // member: cmd_vel_fr
  {
    out << "cmd_vel_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_vel_fr, out);
    out << ", ";
  }

  // member: vel_bl
  {
    out << "vel_bl: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_bl, out);
    out << ", ";
  }

  // member: vel_br
  {
    out << "vel_br: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_br, out);
    out << ", ";
  }

  // member: vel_fl
  {
    out << "vel_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_fl, out);
    out << ", ";
  }

  // member: vel_fr
  {
    out << "vel_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_fr, out);
    out << ", ";
  }

  // member: pos_bl
  {
    out << "pos_bl: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_bl, out);
    out << ", ";
  }

  // member: pos_br
  {
    out << "pos_br: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_br, out);
    out << ", ";
  }

  // member: pos_fl
  {
    out << "pos_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_fl, out);
    out << ", ";
  }

  // member: pos_fr
  {
    out << "pos_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_fr, out);
    out << ", ";
  }

  // member: curr_bl
  {
    out << "curr_bl: ";
    rosidl_generator_traits::value_to_yaml(msg.curr_bl, out);
    out << ", ";
  }

  // member: curr_br
  {
    out << "curr_br: ";
    rosidl_generator_traits::value_to_yaml(msg.curr_br, out);
    out << ", ";
  }

  // member: curr_fl
  {
    out << "curr_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.curr_fl, out);
    out << ", ";
  }

  // member: curr_fr
  {
    out << "curr_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.curr_fr, out);
    out << ", ";
  }

  // member: acc_bl
  {
    out << "acc_bl: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_bl, out);
    out << ", ";
  }

  // member: acc_br
  {
    out << "acc_br: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_br, out);
    out << ", ";
  }

  // member: acc_fl
  {
    out << "acc_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_fl, out);
    out << ", ";
  }

  // member: acc_fr
  {
    out << "acc_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_fr, out);
    out << ", ";
  }

  // member: pos_n
  {
    out << "pos_n: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_n, out);
    out << ", ";
  }

  // member: pos_gl
  {
    out << "pos_gl: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_gl, out);
    out << ", ";
  }

  // member: pos_gr
  {
    out << "pos_gr: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_gr, out);
    out << ", ";
  }

  // member: battery_voltage
  {
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << ", ";
  }

  // member: imu_angular_vel_x
  {
    out << "imu_angular_vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_angular_vel_x, out);
    out << ", ";
  }

  // member: imu_angular_vel_y
  {
    out << "imu_angular_vel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_angular_vel_y, out);
    out << ", ";
  }

  // member: imu_angular_vel_z
  {
    out << "imu_angular_vel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_angular_vel_z, out);
    out << ", ";
  }

  // member: imu_linear_acc_x
  {
    out << "imu_linear_acc_x: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_linear_acc_x, out);
    out << ", ";
  }

  // member: imu_linear_acc_y
  {
    out << "imu_linear_acc_y: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_linear_acc_y, out);
    out << ", ";
  }

  // member: imu_linear_acc_z
  {
    out << "imu_linear_acc_z: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_linear_acc_z, out);
    out << ", ";
  }

  // member: imu_magnetic_x
  {
    out << "imu_magnetic_x: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_magnetic_x, out);
    out << ", ";
  }

  // member: imu_magnetic_y
  {
    out << "imu_magnetic_y: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_magnetic_y, out);
    out << ", ";
  }

  // member: imu_magnetic_z
  {
    out << "imu_magnetic_z: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_magnetic_z, out);
    out << ", ";
  }

  // member: imu_orientation_w
  {
    out << "imu_orientation_w: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_orientation_w, out);
    out << ", ";
  }

  // member: imu_orientation_x
  {
    out << "imu_orientation_x: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_orientation_x, out);
    out << ", ";
  }

  // member: imu_orientation_y
  {
    out << "imu_orientation_y: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_orientation_y, out);
    out << ", ";
  }

  // member: imu_orientation_z
  {
    out << "imu_orientation_z: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_orientation_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OpenCRState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: cmd_vel_bl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_vel_bl: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_vel_bl, out);
    out << "\n";
  }

  // member: cmd_vel_br
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_vel_br: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_vel_br, out);
    out << "\n";
  }

  // member: cmd_vel_fl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_vel_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_vel_fl, out);
    out << "\n";
  }

  // member: cmd_vel_fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_vel_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_vel_fr, out);
    out << "\n";
  }

  // member: vel_bl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_bl: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_bl, out);
    out << "\n";
  }

  // member: vel_br
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_br: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_br, out);
    out << "\n";
  }

  // member: vel_fl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_fl, out);
    out << "\n";
  }

  // member: vel_fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_fr, out);
    out << "\n";
  }

  // member: pos_bl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_bl: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_bl, out);
    out << "\n";
  }

  // member: pos_br
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_br: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_br, out);
    out << "\n";
  }

  // member: pos_fl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_fl, out);
    out << "\n";
  }

  // member: pos_fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_fr, out);
    out << "\n";
  }

  // member: curr_bl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curr_bl: ";
    rosidl_generator_traits::value_to_yaml(msg.curr_bl, out);
    out << "\n";
  }

  // member: curr_br
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curr_br: ";
    rosidl_generator_traits::value_to_yaml(msg.curr_br, out);
    out << "\n";
  }

  // member: curr_fl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curr_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.curr_fl, out);
    out << "\n";
  }

  // member: curr_fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curr_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.curr_fr, out);
    out << "\n";
  }

  // member: acc_bl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_bl: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_bl, out);
    out << "\n";
  }

  // member: acc_br
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_br: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_br, out);
    out << "\n";
  }

  // member: acc_fl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_fl, out);
    out << "\n";
  }

  // member: acc_fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_fr, out);
    out << "\n";
  }

  // member: pos_n
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_n: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_n, out);
    out << "\n";
  }

  // member: pos_gl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_gl: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_gl, out);
    out << "\n";
  }

  // member: pos_gr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_gr: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_gr, out);
    out << "\n";
  }

  // member: battery_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << "\n";
  }

  // member: imu_angular_vel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_angular_vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_angular_vel_x, out);
    out << "\n";
  }

  // member: imu_angular_vel_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_angular_vel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_angular_vel_y, out);
    out << "\n";
  }

  // member: imu_angular_vel_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_angular_vel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_angular_vel_z, out);
    out << "\n";
  }

  // member: imu_linear_acc_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_linear_acc_x: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_linear_acc_x, out);
    out << "\n";
  }

  // member: imu_linear_acc_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_linear_acc_y: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_linear_acc_y, out);
    out << "\n";
  }

  // member: imu_linear_acc_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_linear_acc_z: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_linear_acc_z, out);
    out << "\n";
  }

  // member: imu_magnetic_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_magnetic_x: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_magnetic_x, out);
    out << "\n";
  }

  // member: imu_magnetic_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_magnetic_y: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_magnetic_y, out);
    out << "\n";
  }

  // member: imu_magnetic_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_magnetic_z: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_magnetic_z, out);
    out << "\n";
  }

  // member: imu_orientation_w
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_orientation_w: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_orientation_w, out);
    out << "\n";
  }

  // member: imu_orientation_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_orientation_x: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_orientation_x, out);
    out << "\n";
  }

  // member: imu_orientation_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_orientation_y: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_orientation_y, out);
    out << "\n";
  }

  // member: imu_orientation_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_orientation_z: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_orientation_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OpenCRState & msg, bool use_flow_style = false)
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
  const mecanumbot_msgs::msg::OpenCRState & msg,
  std::ostream & out, size_t indentation = 0)
{
  mecanumbot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mecanumbot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mecanumbot_msgs::msg::OpenCRState & msg)
{
  return mecanumbot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mecanumbot_msgs::msg::OpenCRState>()
{
  return "mecanumbot_msgs::msg::OpenCRState";
}

template<>
inline const char * name<mecanumbot_msgs::msg::OpenCRState>()
{
  return "mecanumbot_msgs/msg/OpenCRState";
}

template<>
struct has_fixed_size<mecanumbot_msgs::msg::OpenCRState>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mecanumbot_msgs::msg::OpenCRState>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mecanumbot_msgs::msg::OpenCRState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MECANUMBOT_MSGS__MSG__DETAIL__OPEN_CR_STATE__TRAITS_HPP_
