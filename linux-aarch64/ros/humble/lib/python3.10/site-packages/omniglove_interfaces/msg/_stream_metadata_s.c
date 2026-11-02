// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from omniglove_interfaces:msg/StreamMetadata.idl
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
#include "omniglove_interfaces/msg/detail/stream_metadata__struct.h"
#include "omniglove_interfaces/msg/detail/stream_metadata__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool omniglove_interfaces__msg__stream_metadata__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("omniglove_interfaces.msg._stream_metadata.StreamMetadata", full_classname_dest, 56) == 0);
  }
  omniglove_interfaces__msg__StreamMetadata * ros_message = _ros_message;
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
  {  // hand
    PyObject * field = PyObject_GetAttrString(_pymsg, "hand");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hand = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->flags = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // layout_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "layout_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->layout_version = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // device_sequence
    PyObject * field = PyObject_GetAttrString(_pymsg, "device_sequence");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->device_sequence = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // device_uid
    PyObject * field = PyObject_GetAttrString(_pymsg, "device_uid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->device_uid = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // source_device_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "source_device_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->source_device_id = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // connection_generation
    PyObject * field = PyObject_GetAttrString(_pymsg, "connection_generation");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->connection_generation = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // source_sequence
    PyObject * field = PyObject_GetAttrString(_pymsg, "source_sequence");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->source_sequence = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // sample_monotonic_ns
    PyObject * field = PyObject_GetAttrString(_pymsg, "sample_monotonic_ns");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sample_monotonic_ns = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // gap_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "gap_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gap_count = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * omniglove_interfaces__msg__stream_metadata__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of StreamMetadata */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("omniglove_interfaces.msg._stream_metadata");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "StreamMetadata");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  omniglove_interfaces__msg__StreamMetadata * ros_message = (omniglove_interfaces__msg__StreamMetadata *)raw_ros_message;
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
  {  // hand
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hand);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hand", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // layout_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->layout_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "layout_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // device_sequence
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->device_sequence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "device_sequence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // device_uid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->device_uid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "device_uid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // source_device_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->source_device_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "source_device_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // connection_generation
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->connection_generation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "connection_generation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // source_sequence
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->source_sequence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "source_sequence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sample_monotonic_ns
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->sample_monotonic_ns);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sample_monotonic_ns", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gap_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->gap_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gap_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
