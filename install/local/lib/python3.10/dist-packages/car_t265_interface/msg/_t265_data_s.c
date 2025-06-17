// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from car_t265_interface:msg/T265Data.idl
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
#include "car_t265_interface/msg/detail/t265_data__struct.h"
#include "car_t265_interface/msg/detail/t265_data__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool car_t265_interface__msg__t265_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("car_t265_interface.msg._t265_data.T265Data", full_classname_dest, 42) == 0);
  }
  car_t265_interface__msg__T265Data * ros_message = _ros_message;
  {  // pos_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "confidence");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->confidence = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // pos_orient_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_orient_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_orient_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_orient_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_orient_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_orient_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_orient_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_orient_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_orient_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_orient_w
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_orient_w");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_orient_w = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vel_linear_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_linear_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel_linear_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vel_linear_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_linear_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel_linear_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vel_linear_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_linear_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel_linear_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vel_angular_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_angular_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel_angular_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vel_angular_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_angular_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel_angular_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vel_angular_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_angular_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel_angular_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_linear_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_linear_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_linear_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_linear_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_linear_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_linear_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_linear_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_linear_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_linear_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_angular_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_angular_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_angular_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_angular_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_angular_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_angular_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_angular_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_angular_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_angular_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * car_t265_interface__msg__t265_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of T265Data */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("car_t265_interface.msg._t265_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "T265Data");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  car_t265_interface__msg__T265Data * ros_message = (car_t265_interface__msg__T265Data *)raw_ros_message;
  {  // pos_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // confidence
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->confidence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "confidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_orient_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_orient_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_orient_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_orient_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_orient_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_orient_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_orient_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_orient_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_orient_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_orient_w
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_orient_w);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_orient_w", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_linear_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel_linear_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_linear_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_linear_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel_linear_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_linear_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_linear_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel_linear_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_linear_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_angular_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel_angular_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_angular_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_angular_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel_angular_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_angular_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_angular_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel_angular_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_angular_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_linear_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_linear_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_linear_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_linear_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_linear_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_linear_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_linear_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_linear_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_linear_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_angular_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_angular_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_angular_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_angular_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_angular_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_angular_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_angular_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_angular_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_angular_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
