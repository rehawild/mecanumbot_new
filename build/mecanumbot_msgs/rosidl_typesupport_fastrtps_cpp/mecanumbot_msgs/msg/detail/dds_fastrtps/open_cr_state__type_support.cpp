// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mecanumbot_msgs:msg/OpenCRState.idl
// generated code does not contain a copyright notice
#include "mecanumbot_msgs/msg/detail/open_cr_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mecanumbot_msgs/msg/detail/open_cr_state__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace mecanumbot_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mecanumbot_msgs
cdr_serialize(
  const mecanumbot_msgs::msg::OpenCRState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: cmd_vel_bl
  cdr << ros_message.cmd_vel_bl;
  // Member: cmd_vel_br
  cdr << ros_message.cmd_vel_br;
  // Member: cmd_vel_fl
  cdr << ros_message.cmd_vel_fl;
  // Member: cmd_vel_fr
  cdr << ros_message.cmd_vel_fr;
  // Member: vel_bl
  cdr << ros_message.vel_bl;
  // Member: vel_br
  cdr << ros_message.vel_br;
  // Member: vel_fl
  cdr << ros_message.vel_fl;
  // Member: vel_fr
  cdr << ros_message.vel_fr;
  // Member: pos_bl
  cdr << ros_message.pos_bl;
  // Member: pos_br
  cdr << ros_message.pos_br;
  // Member: pos_fl
  cdr << ros_message.pos_fl;
  // Member: pos_fr
  cdr << ros_message.pos_fr;
  // Member: curr_bl
  cdr << ros_message.curr_bl;
  // Member: curr_br
  cdr << ros_message.curr_br;
  // Member: curr_fl
  cdr << ros_message.curr_fl;
  // Member: curr_fr
  cdr << ros_message.curr_fr;
  // Member: acc_bl
  cdr << ros_message.acc_bl;
  // Member: acc_br
  cdr << ros_message.acc_br;
  // Member: acc_fl
  cdr << ros_message.acc_fl;
  // Member: acc_fr
  cdr << ros_message.acc_fr;
  // Member: pos_n
  cdr << ros_message.pos_n;
  // Member: pos_gl
  cdr << ros_message.pos_gl;
  // Member: pos_gr
  cdr << ros_message.pos_gr;
  // Member: battery_voltage
  cdr << ros_message.battery_voltage;
  // Member: imu_angular_vel_x
  cdr << ros_message.imu_angular_vel_x;
  // Member: imu_angular_vel_y
  cdr << ros_message.imu_angular_vel_y;
  // Member: imu_angular_vel_z
  cdr << ros_message.imu_angular_vel_z;
  // Member: imu_linear_acc_x
  cdr << ros_message.imu_linear_acc_x;
  // Member: imu_linear_acc_y
  cdr << ros_message.imu_linear_acc_y;
  // Member: imu_linear_acc_z
  cdr << ros_message.imu_linear_acc_z;
  // Member: imu_magnetic_x
  cdr << ros_message.imu_magnetic_x;
  // Member: imu_magnetic_y
  cdr << ros_message.imu_magnetic_y;
  // Member: imu_magnetic_z
  cdr << ros_message.imu_magnetic_z;
  // Member: imu_orientation_w
  cdr << ros_message.imu_orientation_w;
  // Member: imu_orientation_x
  cdr << ros_message.imu_orientation_x;
  // Member: imu_orientation_y
  cdr << ros_message.imu_orientation_y;
  // Member: imu_orientation_z
  cdr << ros_message.imu_orientation_z;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mecanumbot_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mecanumbot_msgs::msg::OpenCRState & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: cmd_vel_bl
  cdr >> ros_message.cmd_vel_bl;

  // Member: cmd_vel_br
  cdr >> ros_message.cmd_vel_br;

  // Member: cmd_vel_fl
  cdr >> ros_message.cmd_vel_fl;

  // Member: cmd_vel_fr
  cdr >> ros_message.cmd_vel_fr;

  // Member: vel_bl
  cdr >> ros_message.vel_bl;

  // Member: vel_br
  cdr >> ros_message.vel_br;

  // Member: vel_fl
  cdr >> ros_message.vel_fl;

  // Member: vel_fr
  cdr >> ros_message.vel_fr;

  // Member: pos_bl
  cdr >> ros_message.pos_bl;

  // Member: pos_br
  cdr >> ros_message.pos_br;

  // Member: pos_fl
  cdr >> ros_message.pos_fl;

  // Member: pos_fr
  cdr >> ros_message.pos_fr;

  // Member: curr_bl
  cdr >> ros_message.curr_bl;

  // Member: curr_br
  cdr >> ros_message.curr_br;

  // Member: curr_fl
  cdr >> ros_message.curr_fl;

  // Member: curr_fr
  cdr >> ros_message.curr_fr;

  // Member: acc_bl
  cdr >> ros_message.acc_bl;

  // Member: acc_br
  cdr >> ros_message.acc_br;

  // Member: acc_fl
  cdr >> ros_message.acc_fl;

  // Member: acc_fr
  cdr >> ros_message.acc_fr;

  // Member: pos_n
  cdr >> ros_message.pos_n;

  // Member: pos_gl
  cdr >> ros_message.pos_gl;

  // Member: pos_gr
  cdr >> ros_message.pos_gr;

  // Member: battery_voltage
  cdr >> ros_message.battery_voltage;

  // Member: imu_angular_vel_x
  cdr >> ros_message.imu_angular_vel_x;

  // Member: imu_angular_vel_y
  cdr >> ros_message.imu_angular_vel_y;

  // Member: imu_angular_vel_z
  cdr >> ros_message.imu_angular_vel_z;

  // Member: imu_linear_acc_x
  cdr >> ros_message.imu_linear_acc_x;

  // Member: imu_linear_acc_y
  cdr >> ros_message.imu_linear_acc_y;

  // Member: imu_linear_acc_z
  cdr >> ros_message.imu_linear_acc_z;

  // Member: imu_magnetic_x
  cdr >> ros_message.imu_magnetic_x;

  // Member: imu_magnetic_y
  cdr >> ros_message.imu_magnetic_y;

  // Member: imu_magnetic_z
  cdr >> ros_message.imu_magnetic_z;

  // Member: imu_orientation_w
  cdr >> ros_message.imu_orientation_w;

  // Member: imu_orientation_x
  cdr >> ros_message.imu_orientation_x;

  // Member: imu_orientation_y
  cdr >> ros_message.imu_orientation_y;

  // Member: imu_orientation_z
  cdr >> ros_message.imu_orientation_z;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mecanumbot_msgs
get_serialized_size(
  const mecanumbot_msgs::msg::OpenCRState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: cmd_vel_bl
  {
    size_t item_size = sizeof(ros_message.cmd_vel_bl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cmd_vel_br
  {
    size_t item_size = sizeof(ros_message.cmd_vel_br);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cmd_vel_fl
  {
    size_t item_size = sizeof(ros_message.cmd_vel_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cmd_vel_fr
  {
    size_t item_size = sizeof(ros_message.cmd_vel_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vel_bl
  {
    size_t item_size = sizeof(ros_message.vel_bl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vel_br
  {
    size_t item_size = sizeof(ros_message.vel_br);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vel_fl
  {
    size_t item_size = sizeof(ros_message.vel_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vel_fr
  {
    size_t item_size = sizeof(ros_message.vel_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_bl
  {
    size_t item_size = sizeof(ros_message.pos_bl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_br
  {
    size_t item_size = sizeof(ros_message.pos_br);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_fl
  {
    size_t item_size = sizeof(ros_message.pos_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_fr
  {
    size_t item_size = sizeof(ros_message.pos_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: curr_bl
  {
    size_t item_size = sizeof(ros_message.curr_bl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: curr_br
  {
    size_t item_size = sizeof(ros_message.curr_br);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: curr_fl
  {
    size_t item_size = sizeof(ros_message.curr_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: curr_fr
  {
    size_t item_size = sizeof(ros_message.curr_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_bl
  {
    size_t item_size = sizeof(ros_message.acc_bl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_br
  {
    size_t item_size = sizeof(ros_message.acc_br);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_fl
  {
    size_t item_size = sizeof(ros_message.acc_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_fr
  {
    size_t item_size = sizeof(ros_message.acc_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_n
  {
    size_t item_size = sizeof(ros_message.pos_n);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_gl
  {
    size_t item_size = sizeof(ros_message.pos_gl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_gr
  {
    size_t item_size = sizeof(ros_message.pos_gr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_voltage
  {
    size_t item_size = sizeof(ros_message.battery_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_angular_vel_x
  {
    size_t item_size = sizeof(ros_message.imu_angular_vel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_angular_vel_y
  {
    size_t item_size = sizeof(ros_message.imu_angular_vel_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_angular_vel_z
  {
    size_t item_size = sizeof(ros_message.imu_angular_vel_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_linear_acc_x
  {
    size_t item_size = sizeof(ros_message.imu_linear_acc_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_linear_acc_y
  {
    size_t item_size = sizeof(ros_message.imu_linear_acc_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_linear_acc_z
  {
    size_t item_size = sizeof(ros_message.imu_linear_acc_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_magnetic_x
  {
    size_t item_size = sizeof(ros_message.imu_magnetic_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_magnetic_y
  {
    size_t item_size = sizeof(ros_message.imu_magnetic_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_magnetic_z
  {
    size_t item_size = sizeof(ros_message.imu_magnetic_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_orientation_w
  {
    size_t item_size = sizeof(ros_message.imu_orientation_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_orientation_x
  {
    size_t item_size = sizeof(ros_message.imu_orientation_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_orientation_y
  {
    size_t item_size = sizeof(ros_message.imu_orientation_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_orientation_z
  {
    size_t item_size = sizeof(ros_message.imu_orientation_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mecanumbot_msgs
max_serialized_size_OpenCRState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: cmd_vel_bl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: cmd_vel_br
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: cmd_vel_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: cmd_vel_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: vel_bl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: vel_br
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: vel_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: vel_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: pos_bl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: pos_br
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: pos_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: pos_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: curr_bl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: curr_br
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: curr_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: curr_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: acc_bl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: acc_br
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: acc_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: acc_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: pos_n
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: pos_gl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: pos_gr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: battery_voltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: imu_angular_vel_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: imu_angular_vel_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: imu_angular_vel_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: imu_linear_acc_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: imu_linear_acc_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: imu_linear_acc_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: imu_magnetic_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: imu_magnetic_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: imu_magnetic_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: imu_orientation_w
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: imu_orientation_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: imu_orientation_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: imu_orientation_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mecanumbot_msgs::msg::OpenCRState;
    is_plain =
      (
      offsetof(DataType, imu_orientation_z) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _OpenCRState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mecanumbot_msgs::msg::OpenCRState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _OpenCRState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mecanumbot_msgs::msg::OpenCRState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _OpenCRState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mecanumbot_msgs::msg::OpenCRState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _OpenCRState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_OpenCRState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _OpenCRState__callbacks = {
  "mecanumbot_msgs::msg",
  "OpenCRState",
  _OpenCRState__cdr_serialize,
  _OpenCRState__cdr_deserialize,
  _OpenCRState__get_serialized_size,
  _OpenCRState__max_serialized_size
};

static rosidl_message_type_support_t _OpenCRState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_OpenCRState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mecanumbot_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mecanumbot_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<mecanumbot_msgs::msg::OpenCRState>()
{
  return &mecanumbot_msgs::msg::typesupport_fastrtps_cpp::_OpenCRState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mecanumbot_msgs, msg, OpenCRState)() {
  return &mecanumbot_msgs::msg::typesupport_fastrtps_cpp::_OpenCRState__handle;
}

#ifdef __cplusplus
}
#endif
