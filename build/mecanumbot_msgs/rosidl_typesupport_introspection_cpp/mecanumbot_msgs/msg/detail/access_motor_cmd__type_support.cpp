// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mecanumbot_msgs:msg/AccessMotorCmd.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mecanumbot_msgs/msg/detail/access_motor_cmd__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mecanumbot_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void AccessMotorCmd_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mecanumbot_msgs::msg::AccessMotorCmd(_init);
}

void AccessMotorCmd_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mecanumbot_msgs::msg::AccessMotorCmd *>(message_memory);
  typed_message->~AccessMotorCmd();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AccessMotorCmd_message_member_array[3] = {
  {
    "n_pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mecanumbot_msgs::msg::AccessMotorCmd, n_pos),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gl_pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mecanumbot_msgs::msg::AccessMotorCmd, gl_pos),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gr_pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mecanumbot_msgs::msg::AccessMotorCmd, gr_pos),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AccessMotorCmd_message_members = {
  "mecanumbot_msgs::msg",  // message namespace
  "AccessMotorCmd",  // message name
  3,  // number of fields
  sizeof(mecanumbot_msgs::msg::AccessMotorCmd),
  AccessMotorCmd_message_member_array,  // message members
  AccessMotorCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  AccessMotorCmd_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AccessMotorCmd_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AccessMotorCmd_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mecanumbot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mecanumbot_msgs::msg::AccessMotorCmd>()
{
  return &::mecanumbot_msgs::msg::rosidl_typesupport_introspection_cpp::AccessMotorCmd_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mecanumbot_msgs, msg, AccessMotorCmd)() {
  return &::mecanumbot_msgs::msg::rosidl_typesupport_introspection_cpp::AccessMotorCmd_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
