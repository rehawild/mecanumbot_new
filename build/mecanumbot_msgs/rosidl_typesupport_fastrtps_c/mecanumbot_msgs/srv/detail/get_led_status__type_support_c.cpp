// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mecanumbot_msgs:srv/GetLedStatus.idl
// generated code does not contain a copyright notice
#include "mecanumbot_msgs/srv/detail/get_led_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mecanumbot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mecanumbot_msgs/srv/detail/get_led_status__struct.h"
#include "mecanumbot_msgs/srv/detail/get_led_status__functions.h"
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


// forward declare type support functions


using _GetLedStatus_Request__ros_msg_type = mecanumbot_msgs__srv__GetLedStatus_Request;

static bool _GetLedStatus_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetLedStatus_Request__ros_msg_type * ros_message = static_cast<const _GetLedStatus_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _GetLedStatus_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetLedStatus_Request__ros_msg_type * ros_message = static_cast<_GetLedStatus_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mecanumbot_msgs
size_t get_serialized_size_mecanumbot_msgs__srv__GetLedStatus_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetLedStatus_Request__ros_msg_type * ros_message = static_cast<const _GetLedStatus_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetLedStatus_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mecanumbot_msgs__srv__GetLedStatus_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mecanumbot_msgs
size_t max_serialized_size_mecanumbot_msgs__srv__GetLedStatus_Request(
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

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mecanumbot_msgs__srv__GetLedStatus_Request;
    is_plain =
      (
      offsetof(DataType, structure_needs_at_least_one_member) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetLedStatus_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mecanumbot_msgs__srv__GetLedStatus_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetLedStatus_Request = {
  "mecanumbot_msgs::srv",
  "GetLedStatus_Request",
  _GetLedStatus_Request__cdr_serialize,
  _GetLedStatus_Request__cdr_deserialize,
  _GetLedStatus_Request__get_serialized_size,
  _GetLedStatus_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetLedStatus_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetLedStatus_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mecanumbot_msgs, srv, GetLedStatus_Request)() {
  return &_GetLedStatus_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "mecanumbot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "mecanumbot_msgs/srv/detail/get_led_status__struct.h"
// already included above
// #include "mecanumbot_msgs/srv/detail/get_led_status__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


// forward declare type support functions


using _GetLedStatus_Response__ros_msg_type = mecanumbot_msgs__srv__GetLedStatus_Response;

static bool _GetLedStatus_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetLedStatus_Response__ros_msg_type * ros_message = static_cast<const _GetLedStatus_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: fl_mode
  {
    cdr << ros_message->fl_mode;
  }

  // Field name: fl_color
  {
    cdr << ros_message->fl_color;
  }

  // Field name: fr_mode
  {
    cdr << ros_message->fr_mode;
  }

  // Field name: fr_color
  {
    cdr << ros_message->fr_color;
  }

  // Field name: br_mode
  {
    cdr << ros_message->br_mode;
  }

  // Field name: br_color
  {
    cdr << ros_message->br_color;
  }

  // Field name: bl_mode
  {
    cdr << ros_message->bl_mode;
  }

  // Field name: bl_color
  {
    cdr << ros_message->bl_color;
  }

  return true;
}

static bool _GetLedStatus_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetLedStatus_Response__ros_msg_type * ros_message = static_cast<_GetLedStatus_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: fl_mode
  {
    cdr >> ros_message->fl_mode;
  }

  // Field name: fl_color
  {
    cdr >> ros_message->fl_color;
  }

  // Field name: fr_mode
  {
    cdr >> ros_message->fr_mode;
  }

  // Field name: fr_color
  {
    cdr >> ros_message->fr_color;
  }

  // Field name: br_mode
  {
    cdr >> ros_message->br_mode;
  }

  // Field name: br_color
  {
    cdr >> ros_message->br_color;
  }

  // Field name: bl_mode
  {
    cdr >> ros_message->bl_mode;
  }

  // Field name: bl_color
  {
    cdr >> ros_message->bl_color;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mecanumbot_msgs
size_t get_serialized_size_mecanumbot_msgs__srv__GetLedStatus_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetLedStatus_Response__ros_msg_type * ros_message = static_cast<const _GetLedStatus_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name fl_mode
  {
    size_t item_size = sizeof(ros_message->fl_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fl_color
  {
    size_t item_size = sizeof(ros_message->fl_color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fr_mode
  {
    size_t item_size = sizeof(ros_message->fr_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fr_color
  {
    size_t item_size = sizeof(ros_message->fr_color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name br_mode
  {
    size_t item_size = sizeof(ros_message->br_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name br_color
  {
    size_t item_size = sizeof(ros_message->br_color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bl_mode
  {
    size_t item_size = sizeof(ros_message->bl_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bl_color
  {
    size_t item_size = sizeof(ros_message->bl_color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetLedStatus_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mecanumbot_msgs__srv__GetLedStatus_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mecanumbot_msgs
size_t max_serialized_size_mecanumbot_msgs__srv__GetLedStatus_Response(
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

  // member: fl_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fl_color
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fr_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fr_color
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: br_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: br_color
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: bl_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: bl_color
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mecanumbot_msgs__srv__GetLedStatus_Response;
    is_plain =
      (
      offsetof(DataType, bl_color) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetLedStatus_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mecanumbot_msgs__srv__GetLedStatus_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetLedStatus_Response = {
  "mecanumbot_msgs::srv",
  "GetLedStatus_Response",
  _GetLedStatus_Response__cdr_serialize,
  _GetLedStatus_Response__cdr_deserialize,
  _GetLedStatus_Response__get_serialized_size,
  _GetLedStatus_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetLedStatus_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetLedStatus_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mecanumbot_msgs, srv, GetLedStatus_Response)() {
  return &_GetLedStatus_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "mecanumbot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mecanumbot_msgs/srv/get_led_status.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetLedStatus__callbacks = {
  "mecanumbot_msgs::srv",
  "GetLedStatus",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mecanumbot_msgs, srv, GetLedStatus_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mecanumbot_msgs, srv, GetLedStatus_Response)(),
};

static rosidl_service_type_support_t GetLedStatus__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetLedStatus__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mecanumbot_msgs, srv, GetLedStatus)() {
  return &GetLedStatus__handle;
}

#if defined(__cplusplus)
}
#endif
