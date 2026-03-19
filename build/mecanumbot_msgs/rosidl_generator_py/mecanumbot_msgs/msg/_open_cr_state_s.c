// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mecanumbot_msgs:msg/OpenCRState.idl
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
#include "mecanumbot_msgs/msg/detail/open_cr_state__struct.h"
#include "mecanumbot_msgs/msg/detail/open_cr_state__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mecanumbot_msgs__msg__open_cr_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("mecanumbot_msgs.msg._open_cr_state.OpenCRState", full_classname_dest, 46) == 0);
  }
  mecanumbot_msgs__msg__OpenCRState * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // cmd_vel_bl
    PyObject * field = PyObject_GetAttrString(_pymsg, "cmd_vel_bl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cmd_vel_bl = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cmd_vel_br
    PyObject * field = PyObject_GetAttrString(_pymsg, "cmd_vel_br");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cmd_vel_br = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cmd_vel_fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "cmd_vel_fl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cmd_vel_fl = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cmd_vel_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "cmd_vel_fr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cmd_vel_fr = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vel_bl
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_bl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vel_bl = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vel_br
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_br");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vel_br = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vel_fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_fl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vel_fl = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vel_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_fr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vel_fr = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pos_bl
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_bl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pos_bl = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pos_br
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_br");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pos_br = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pos_fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_fl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pos_fl = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pos_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_fr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pos_fr = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // curr_bl
    PyObject * field = PyObject_GetAttrString(_pymsg, "curr_bl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->curr_bl = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // curr_br
    PyObject * field = PyObject_GetAttrString(_pymsg, "curr_br");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->curr_br = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // curr_fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "curr_fl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->curr_fl = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // curr_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "curr_fr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->curr_fr = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // acc_bl
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_bl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acc_bl = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // acc_br
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_br");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acc_br = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // acc_fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_fl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acc_fl = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // acc_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_fr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acc_fr = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pos_n
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_n");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pos_n = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pos_gl
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_gl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pos_gl = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pos_gr
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_gr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pos_gr = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // battery_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu_angular_vel_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_angular_vel_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_angular_vel_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu_angular_vel_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_angular_vel_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_angular_vel_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu_angular_vel_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_angular_vel_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_angular_vel_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu_linear_acc_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_linear_acc_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_linear_acc_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu_linear_acc_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_linear_acc_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_linear_acc_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu_linear_acc_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_linear_acc_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_linear_acc_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu_magnetic_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_magnetic_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_magnetic_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu_magnetic_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_magnetic_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_magnetic_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu_magnetic_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_magnetic_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_magnetic_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu_orientation_w
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_orientation_w");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_orientation_w = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu_orientation_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_orientation_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_orientation_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu_orientation_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_orientation_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_orientation_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu_orientation_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_orientation_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_orientation_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mecanumbot_msgs__msg__open_cr_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OpenCRState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mecanumbot_msgs.msg._open_cr_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OpenCRState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mecanumbot_msgs__msg__OpenCRState * ros_message = (mecanumbot_msgs__msg__OpenCRState *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cmd_vel_bl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cmd_vel_bl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cmd_vel_bl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cmd_vel_br
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cmd_vel_br);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cmd_vel_br", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cmd_vel_fl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cmd_vel_fl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cmd_vel_fl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cmd_vel_fr
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cmd_vel_fr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cmd_vel_fr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_bl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vel_bl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_bl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_br
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vel_br);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_br", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_fl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vel_fl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_fl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_fr
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vel_fr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_fr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_bl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pos_bl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_bl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_br
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pos_br);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_br", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_fl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pos_fl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_fl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_fr
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pos_fr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_fr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // curr_bl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->curr_bl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "curr_bl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // curr_br
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->curr_br);
    {
      int rc = PyObject_SetAttrString(_pymessage, "curr_br", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // curr_fl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->curr_fl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "curr_fl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // curr_fr
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->curr_fr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "curr_fr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_bl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->acc_bl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_bl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_br
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->acc_br);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_br", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_fl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->acc_fl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_fl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_fr
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->acc_fr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_fr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_n
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pos_n);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_n", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_gl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pos_gl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_gl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_gr
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pos_gr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_gr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_angular_vel_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_angular_vel_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_angular_vel_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_angular_vel_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_angular_vel_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_angular_vel_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_angular_vel_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_angular_vel_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_angular_vel_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_linear_acc_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_linear_acc_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_linear_acc_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_linear_acc_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_linear_acc_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_linear_acc_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_linear_acc_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_linear_acc_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_linear_acc_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_magnetic_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_magnetic_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_magnetic_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_magnetic_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_magnetic_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_magnetic_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_magnetic_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_magnetic_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_magnetic_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_orientation_w
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_orientation_w);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_orientation_w", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_orientation_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_orientation_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_orientation_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_orientation_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_orientation_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_orientation_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_orientation_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_orientation_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_orientation_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
