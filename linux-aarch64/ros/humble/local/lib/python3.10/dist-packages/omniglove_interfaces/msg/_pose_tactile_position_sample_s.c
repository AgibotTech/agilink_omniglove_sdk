// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from omniglove_interfaces:msg/PoseTactilePositionSample.idl
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
#include "omniglove_interfaces/msg/detail/pose_tactile_position_sample__struct.h"
#include "omniglove_interfaces/msg/detail/pose_tactile_position_sample__functions.h"

bool omniglove_interfaces__msg__stream_metadata__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * omniglove_interfaces__msg__stream_metadata__convert_to_py(void * raw_ros_message);
bool omniglove_interfaces__msg__pose_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * omniglove_interfaces__msg__pose_data__convert_to_py(void * raw_ros_message);
bool omniglove_interfaces__msg__tactile_position_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * omniglove_interfaces__msg__tactile_position_data__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool omniglove_interfaces__msg__pose_tactile_position_sample__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[81];
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
    assert(strncmp("omniglove_interfaces.msg._pose_tactile_position_sample.PoseTactilePositionSample", full_classname_dest, 80) == 0);
  }
  omniglove_interfaces__msg__PoseTactilePositionSample * ros_message = _ros_message;
  {  // metadata
    PyObject * field = PyObject_GetAttrString(_pymsg, "metadata");
    if (!field) {
      return false;
    }
    if (!omniglove_interfaces__msg__stream_metadata__convert_from_py(field, &ros_message->metadata)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // data
    PyObject * field = PyObject_GetAttrString(_pymsg, "data");
    if (!field) {
      return false;
    }
    if (!omniglove_interfaces__msg__pose_data__convert_from_py(field, &ros_message->data)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // tac_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "tac_pos");
    if (!field) {
      return false;
    }
    if (!omniglove_interfaces__msg__tactile_position_data__convert_from_py(field, &ros_message->tac_pos)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * omniglove_interfaces__msg__pose_tactile_position_sample__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PoseTactilePositionSample */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("omniglove_interfaces.msg._pose_tactile_position_sample");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PoseTactilePositionSample");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  omniglove_interfaces__msg__PoseTactilePositionSample * ros_message = (omniglove_interfaces__msg__PoseTactilePositionSample *)raw_ros_message;
  {  // metadata
    PyObject * field = NULL;
    field = omniglove_interfaces__msg__stream_metadata__convert_to_py(&ros_message->metadata);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "metadata", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data
    PyObject * field = NULL;
    field = omniglove_interfaces__msg__pose_data__convert_to_py(&ros_message->data);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tac_pos
    PyObject * field = NULL;
    field = omniglove_interfaces__msg__tactile_position_data__convert_to_py(&ros_message->tac_pos);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "tac_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
