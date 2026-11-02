// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from omniglove_interfaces:msg/PostFingerJoints.idl
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
#include "omniglove_interfaces/msg/detail/post_finger_joints__struct.h"
#include "omniglove_interfaces/msg/detail/post_finger_joints__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool omniglove_interfaces__msg__post_finger_joints__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("omniglove_interfaces.msg._post_finger_joints.PostFingerJoints", full_classname_dest, 61) == 0);
  }
  omniglove_interfaces__msg__PostFingerJoints * ros_message = _ros_message;
  {  // mcp_abduction
    PyObject * field = PyObject_GetAttrString(_pymsg, "mcp_abduction");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mcp_abduction = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mcp_flexion
    PyObject * field = PyObject_GetAttrString(_pymsg, "mcp_flexion");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mcp_flexion = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pip_flexion
    PyObject * field = PyObject_GetAttrString(_pymsg, "pip_flexion");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pip_flexion = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dip_flexion
    PyObject * field = PyObject_GetAttrString(_pymsg, "dip_flexion");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dip_flexion = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * omniglove_interfaces__msg__post_finger_joints__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PostFingerJoints */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("omniglove_interfaces.msg._post_finger_joints");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PostFingerJoints");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  omniglove_interfaces__msg__PostFingerJoints * ros_message = (omniglove_interfaces__msg__PostFingerJoints *)raw_ros_message;
  {  // mcp_abduction
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mcp_abduction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mcp_abduction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mcp_flexion
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mcp_flexion);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mcp_flexion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pip_flexion
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pip_flexion);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pip_flexion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dip_flexion
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dip_flexion);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dip_flexion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
