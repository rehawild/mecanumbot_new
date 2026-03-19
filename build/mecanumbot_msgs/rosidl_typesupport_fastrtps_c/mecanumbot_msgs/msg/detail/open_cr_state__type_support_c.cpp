// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mecanumbot_msgs:msg/OpenCRState.idl
// generated code does not contain a copyright notice
#include "mecanumbot_msgs/msg/detail/open_cr_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mecanumbot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mecanumbot_msgs/msg/detail/open_cr_state__struct.h"
#include "mecanumbot_msgs/msg/detail/open_cr_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mecanumbot_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mecanumbot_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mecanumbot_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _OpenCRState__ros_msg_type = mecanumbot_msgs__msg__OpenCRState;

static bool _OpenCRState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OpenCRState__ros_msg_type * ros_message = static_cast<const _OpenCRState__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: cmd_vel_bl
  {
    cdr << ros_message->cmd_vel_bl;
  }

  // Field name: cmd_vel_br
  {
    cdr << ros_message->cmd_vel_br;
  }

  // Field name: cmd_vel_fl
  {
    cdr << ros_message->cmd_vel_fl;
  }

  // Field name: cmd_vel_fr
  {
    cdr << ros_message->cmd_vel_fr;
  }

  // Field name: vel_bl
  {
    cdr << ros_message->vel_bl;
  }

  // Field name: vel_br
  {
    cdr << ros_message->vel_br;
  }

  // Field name: vel_fl
  {
    cdr << ros_message->vel_fl;
  }

  // Field name: vel_fr
  {
    cdr << ros_message->vel_fr;
  }

  // Field name: pos_bl
  {
    cdr << ros_message->pos_bl;
  }

  // Field name: pos_br
  {
    cdr << ros_message->pos_br;
  }

  // Field name: pos_fl
  {
    cdr << ros_message->pos_fl;
  }

  // Field name: pos_fr
  {
    cdr << ros_message->pos_fr;
  }

  // Field name: curr_bl
  {
    cdr << ros_message->curr_bl;
  }

  // Field name: curr_br
  {
    cdr << ros_message->curr_br;
  }

  // Field name: curr_fl
  {
    cdr << ros_message->curr_fl;
  }

  // Field name: curr_fr
  {
    cdr << ros_message->curr_fr;
  }

  // Field name: acc_bl
  {
    cdr << ros_message->acc_bl;
  }

  // Field name: acc_br
  {
    cdr << ros_message->acc_br;
  }

  // Field name: acc_fl
  {
    cdr << ros_message->acc_fl;
  }

  // Field name: acc_fr
  {
    cdr << ros_message->acc_fr;
  }

  // Field name: pos_n
  {
    cdr << ros_message->pos_n;
  }

  // Field name: pos_gl
  {
    cdr << ros_message->pos_gl;
  }

  // Field name: pos_gr
  {
    cdr << ros_message->pos_gr;
  }

  // Field name: battery_voltage
  {
    cdr << ros_message->battery_voltage;
  }

  // Field name: imu_angular_vel_x
  {
    cdr << ros_message->imu_angular_vel_x;
  }

  // Field name: imu_angular_vel_y
  {
    cdr << ros_message->imu_angular_vel_y;
  }

  // Field name: imu_angular_vel_z
  {
    cdr << ros_message->imu_angular_vel_z;
  }

  // Field name: imu_linear_acc_x
  {
    cdr << ros_message->imu_linear_acc_x;
  }

  // Field name: imu_linear_acc_y
  {
    cdr << ros_message->imu_linear_acc_y;
  }

  // Field name: imu_linear_acc_z
  {
    cdr << ros_message->imu_linear_acc_z;
  }

  // Field name: imu_magnetic_x
  {
    cdr << ros_message->imu_magnetic_x;
  }

  // Field name: imu_magnetic_y
  {
    cdr << ros_message->imu_magnetic_y;
  }

  // Field name: imu_magnetic_z
  {
    cdr << ros_message->imu_magnetic_z;
  }

  // Field name: imu_orientation_w
  {
    cdr << ros_message->imu_orientation_w;
  }

  // Field name: imu_orientation_x
  {
    cdr << ros_message->imu_orientation_x;
  }

  // Field name: imu_orientation_y
  {
    cdr << ros_message->imu_orientation_y;
  }

  // Field name: imu_orientation_z
  {
    cdr << ros_message->imu_orientation_z;
  }

  return true;
}

static bool _OpenCRState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OpenCRState__ros_msg_type * ros_message = static_cast<_OpenCRState__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: cmd_vel_bl
  {
    cdr >> ros_message->cmd_vel_bl;
  }

  // Field name: cmd_vel_br
  {
    cdr >> ros_message->cmd_vel_br;
  }

  // Field name: cmd_vel_fl
  {
    cdr >> ros_message->cmd_vel_fl;
  }

  // Field name: cmd_vel_fr
  {
    cdr >> ros_message->cmd_vel_fr;
  }

  // Field name: vel_bl
  {
    cdr >> ros_message->vel_bl;
  }

  // Field name: vel_br
  {
    cdr >> ros_message->vel_br;
  }

  // Field name: vel_fl
  {
    cdr >> ros_message->vel_fl;
  }

  // Field name: vel_fr
  {
    cdr >> ros_message->vel_fr;
  }

  // Field name: pos_bl
  {
    cdr >> ros_message->pos_bl;
  }

  // Field name: pos_br
  {
    cdr >> ros_message->pos_br;
  }

  // Field name: pos_fl
  {
    cdr >> ros_message->pos_fl;
  }

  // Field name: pos_fr
  {
    cdr >> ros_message->pos_fr;
  }

  // Field name: curr_bl
  {
    cdr >> ros_message->curr_bl;
  }

  // Field name: curr_br
  {
    cdr >> ros_message->curr_br;
  }

  // Field name: curr_fl
  {
    cdr >> ros_message->curr_fl;
  }

  // Field name: curr_fr
  {
    cdr >> ros_message->curr_fr;
  }

  // Field name: acc_bl
  {
    cdr >> ros_message->acc_bl;
  }

  // Field name: acc_br
  {
    cdr >> ros_message->acc_br;
  }

  // Field name: acc_fl
  {
    cdr >> ros_message->acc_fl;
  }

  // Field name: acc_fr
  {
    cdr >> ros_message->acc_fr;
  }

  // Field name: pos_n
  {
    cdr >> ros_message->pos_n;
  }

  // Field name: pos_gl
  {
    cdr >> ros_message->pos_gl;
  }

  // Field name: pos_gr
  {
    cdr >> ros_message->pos_gr;
  }

  // Field name: battery_voltage
  {
    cdr >> ros_message->battery_voltage;
  }

  // Field name: imu_angular_vel_x
  {
    cdr >> ros_message->imu_angular_vel_x;
  }

  // Field name: imu_angular_vel_y
  {
    cdr >> ros_message->imu_angular_vel_y;
  }

  // Field name: imu_angular_vel_z
  {
    cdr >> ros_message->imu_angular_vel_z;
  }

  // Field name: imu_linear_acc_x
  {
    cdr >> ros_message->imu_linear_acc_x;
  }

  // Field name: imu_linear_acc_y
  {
    cdr >> ros_message->imu_linear_acc_y;
  }

  // Field name: imu_linear_acc_z
  {
    cdr >> ros_message->imu_linear_acc_z;
  }

  // Field name: imu_magnetic_x
  {
    cdr >> ros_message->imu_magnetic_x;
  }

  // Field name: imu_magnetic_y
  {
    cdr >> ros_message->imu_magnetic_y;
  }

  // Field name: imu_magnetic_z
  {
    cdr >> ros_message->imu_magnetic_z;
  }

  // Field name: imu_orientation_w
  {
    cdr >> ros_message->imu_orientation_w;
  }

  // Field name: imu_orientation_x
  {
    cdr >> ros_message->imu_orientation_x;
  }

  // Field name: imu_orientation_y
  {
    cdr >> ros_message->imu_orientation_y;
  }

  // Field name: imu_orientation_z
  {
    cdr >> ros_message->imu_orientation_z;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mecanumbot_msgs
size_t get_serialized_size_mecanumbot_msgs__msg__OpenCRState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OpenCRState__ros_msg_type * ros_message = static_cast<const _OpenCRState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name cmd_vel_bl
  {
    size_t item_size = sizeof(ros_message->cmd_vel_bl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cmd_vel_br
  {
    size_t item_size = sizeof(ros_message->cmd_vel_br);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cmd_vel_fl
  {
    size_t item_size = sizeof(ros_message->cmd_vel_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cmd_vel_fr
  {
    size_t item_size = sizeof(ros_message->cmd_vel_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_bl
  {
    size_t item_size = sizeof(ros_message->vel_bl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_br
  {
    size_t item_size = sizeof(ros_message->vel_br);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_fl
  {
    size_t item_size = sizeof(ros_message->vel_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_fr
  {
    size_t item_size = sizeof(ros_message->vel_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_bl
  {
    size_t item_size = sizeof(ros_message->pos_bl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_br
  {
    size_t item_size = sizeof(ros_message->pos_br);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_fl
  {
    size_t item_size = sizeof(ros_message->pos_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_fr
  {
    size_t item_size = sizeof(ros_message->pos_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name curr_bl
  {
    size_t item_size = sizeof(ros_message->curr_bl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name curr_br
  {
    size_t item_size = sizeof(ros_message->curr_br);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name curr_fl
  {
    size_t item_size = sizeof(ros_message->curr_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name curr_fr
  {
    size_t item_size = sizeof(ros_message->curr_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_bl
  {
    size_t item_size = sizeof(ros_message->acc_bl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_br
  {
    size_t item_size = sizeof(ros_message->acc_br);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_fl
  {
    size_t item_size = sizeof(ros_message->acc_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_fr
  {
    size_t item_size = sizeof(ros_message->acc_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_n
  {
    size_t item_size = sizeof(ros_message->pos_n);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_gl
  {
    size_t item_size = sizeof(ros_message->pos_gl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_gr
  {
    size_t item_size = sizeof(ros_message->pos_gr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_voltage
  {
    size_t item_size = sizeof(ros_message->battery_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_angular_vel_x
  {
    size_t item_size = sizeof(ros_message->imu_angular_vel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_angular_vel_y
  {
    size_t item_size = sizeof(ros_message->imu_angular_vel_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_angular_vel_z
  {
    size_t item_size = sizeof(ros_message->imu_angular_vel_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_linear_acc_x
  {
    size_t item_size = sizeof(ros_message->imu_linear_acc_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_linear_acc_y
  {
    size_t item_size = sizeof(ros_message->imu_linear_acc_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_linear_acc_z
  {
    size_t item_size = sizeof(ros_message->imu_linear_acc_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_magnetic_x
  {
    size_t item_size = sizeof(ros_message->imu_magnetic_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_magnetic_y
  {
    size_t item_size = sizeof(ros_message->imu_magnetic_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_magnetic_z
  {
    size_t item_size = sizeof(ros_message->imu_magnetic_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_orientation_w
  {
    size_t item_size = sizeof(ros_message->imu_orientation_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_orientation_x
  {
    size_t item_size = sizeof(ros_message->imu_orientation_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_orientation_y
  {
    size_t item_size = sizeof(ros_message->imu_orientation_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_orientation_z
  {
    size_t item_size = sizeof(ros_message->imu_orientation_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _OpenCRState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mecanumbot_msgs__msg__OpenCRState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mecanumbot_msgs
size_t max_serialized_size_mecanumbot_msgs__msg__OpenCRState(
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

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: cmd_vel_bl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: cmd_vel_br
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: cmd_vel_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: cmd_vel_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: vel_bl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: vel_br
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: vel_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: vel_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: pos_bl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: pos_br
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: pos_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: pos_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: curr_bl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: curr_br
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: curr_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: curr_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: acc_bl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: acc_br
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: acc_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: acc_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: pos_n
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: pos_gl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: pos_gr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: battery_voltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: imu_angular_vel_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: imu_angular_vel_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: imu_angular_vel_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: imu_linear_acc_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: imu_linear_acc_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: imu_linear_acc_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: imu_magnetic_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: imu_magnetic_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: imu_magnetic_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: imu_orientation_w
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: imu_orientation_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: imu_orientation_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: imu_orientation_z
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
    using DataType = mecanumbot_msgs__msg__OpenCRState;
    is_plain =
      (
      offsetof(DataType, imu_orientation_z) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _OpenCRState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mecanumbot_msgs__msg__OpenCRState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_OpenCRState = {
  "mecanumbot_msgs::msg",
  "OpenCRState",
  _OpenCRState__cdr_serialize,
  _OpenCRState__cdr_deserialize,
  _OpenCRState__get_serialized_size,
  _OpenCRState__max_serialized_size
};

static rosidl_message_type_support_t _OpenCRState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OpenCRState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mecanumbot_msgs, msg, OpenCRState)() {
  return &_OpenCRState__type_support;
}

#if defined(__cplusplus)
}
#endif
