// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from omniglove_interfaces:msg/TactilePositionData.idl
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
#include "omniglove_interfaces/msg/detail/tactile_position_data__struct.h"
#include "omniglove_interfaces/msg/detail/tactile_position_data__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "omniglove_interfaces/msg/detail/tactile_point_position__functions.h"
// end nested array functions include
bool omniglove_interfaces__msg__tactile_point_position__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * omniglove_interfaces__msg__tactile_point_position__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool omniglove_interfaces__msg__tactile_position_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[68];
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
    assert(strncmp("omniglove_interfaces.msg._tactile_position_data.TactilePositionData", full_classname_dest, 67) == 0);
  }
  omniglove_interfaces__msg__TactilePositionData * ros_message = _ros_message;
  {  // count
    PyObject * field = PyObject_GetAttrString(_pymsg, "count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // coordinate_frame
    PyObject * field = PyObject_GetAttrString(_pymsg, "coordinate_frame");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->coordinate_frame = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // unit
    PyObject * field = PyObject_GetAttrString(_pymsg, "unit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->unit = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // points
    PyObject * field = PyObject_GetAttrString(_pymsg, "points");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'points'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!omniglove_interfaces__msg__TactilePointPosition__Sequence__init(&(ros_message->points), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create omniglove_interfaces__msg__TactilePointPosition__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    omniglove_interfaces__msg__TactilePointPosition * dest = ros_message->points.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!omniglove_interfaces__msg__tactile_point_position__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * omniglove_interfaces__msg__tactile_position_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TactilePositionData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("omniglove_interfaces.msg._tactile_position_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TactilePositionData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  omniglove_interfaces__msg__TactilePositionData * ros_message = (omniglove_interfaces__msg__TactilePositionData *)raw_ros_message;
  {  // count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // coordinate_frame
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->coordinate_frame);
    {
      int rc = PyObject_SetAttrString(_pymessage, "coordinate_frame", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // unit
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->unit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "unit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // points
    PyObject * field = NULL;
    size_t size = ros_message->points.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    omniglove_interfaces__msg__TactilePointPosition * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->points.data[i]);
      PyObject * pyitem = omniglove_interfaces__msg__tactile_point_position__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "points", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
