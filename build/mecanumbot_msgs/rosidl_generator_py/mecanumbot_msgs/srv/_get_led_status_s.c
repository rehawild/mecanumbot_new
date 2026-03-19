// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mecanumbot_msgs:srv/GetLedStatus.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "mecanumbot_msgs/srv/detail/get_led_status__struct.h"
#include "mecanumbot_msgs/srv/detail/get_led_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mecanumbot_msgs__srv__get_led_status__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("mecanumbot_msgs.srv._get_led_status.GetLedStatus_Request", full_classname_dest, 56) == 0);
  }
  mecanumbot_msgs__srv__GetLedStatus_Request * ros_message = _ros_message;
  ros_message->structure_needs_at_least_one_member = 0;

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mecanumbot_msgs__srv__get_led_status__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetLedStatus_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mecanumbot_msgs.srv._get_led_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetLedStatus_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  (void)raw_ros_message;

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "mecanumbot_msgs/srv/detail/get_led_status__struct.h"
// already included above
// #include "mecanumbot_msgs/srv/detail/get_led_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mecanumbot_msgs__srv__get_led_status__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("mecanumbot_msgs.srv._get_led_status.GetLedStatus_Response", full_classname_dest, 57) == 0);
  }
  mecanumbot_msgs__srv__GetLedStatus_Response * ros_message = _ros_message;
  {  // fl_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "fl_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fl_mode = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // fl_color
    PyObject * field = PyObject_GetAttrString(_pymsg, "fl_color");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fl_color = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // fr_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "fr_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fr_mode = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // fr_color
    PyObject * field = PyObject_GetAttrString(_pymsg, "fr_color");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fr_color = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // br_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "br_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->br_mode = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // br_color
    PyObject * field = PyObject_GetAttrString(_pymsg, "br_color");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->br_color = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // bl_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "bl_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bl_mode = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // bl_color
    PyObject * field = PyObject_GetAttrString(_pymsg, "bl_color");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bl_color = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mecanumbot_msgs__srv__get_led_status__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetLedStatus_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mecanumbot_msgs.srv._get_led_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetLedStatus_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mecanumbot_msgs__srv__GetLedStatus_Response * ros_message = (mecanumbot_msgs__srv__GetLedStatus_Response *)raw_ros_message;
  {  // fl_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->fl_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fl_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fl_color
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->fl_color);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fl_color", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fr_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->fr_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fr_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fr_color
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->fr_color);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fr_color", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // br_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->br_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "br_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // br_color
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->br_color);
    {
      int rc = PyObject_SetAttrString(_pymessage, "br_color", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bl_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->bl_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bl_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bl_color
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->bl_color);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bl_color", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
