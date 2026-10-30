// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from omniglove_interfaces:srv/GetStreamStatus.idl
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
#include "omniglove_interfaces/srv/detail/get_stream_status__struct.h"
#include "omniglove_interfaces/srv/detail/get_stream_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool omniglove_interfaces__srv__get_stream_status__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("omniglove_interfaces.srv._get_stream_status.GetStreamStatus_Request", full_classname_dest, 67) == 0);
  }
  omniglove_interfaces__srv__GetStreamStatus_Request * ros_message = _ros_message;
  {  // device_uid
    PyObject * field = PyObject_GetAttrString(_pymsg, "device_uid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->device_uid = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // stream_kind
    PyObject * field = PyObject_GetAttrString(_pymsg, "stream_kind");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stream_kind = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * omniglove_interfaces__srv__get_stream_status__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetStreamStatus_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("omniglove_interfaces.srv._get_stream_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetStreamStatus_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  omniglove_interfaces__srv__GetStreamStatus_Request * ros_message = (omniglove_interfaces__srv__GetStreamStatus_Request *)raw_ros_message;
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
  {  // stream_kind
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stream_kind);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stream_kind", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

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
// #include "omniglove_interfaces/srv/detail/get_stream_status__struct.h"
// already included above
// #include "omniglove_interfaces/srv/detail/get_stream_status__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool omniglove_interfaces__srv__get_stream_status__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[69];
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
    assert(strncmp("omniglove_interfaces.srv._get_stream_status.GetStreamStatus_Response", full_classname_dest, 68) == 0);
  }
  omniglove_interfaces__srv__GetStreamStatus_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }
  {  // stream_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "stream_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stream_error = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // state
    PyObject * field = PyObject_GetAttrString(_pymsg, "state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->state = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // stream_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "stream_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stream_mode = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // source_interval_ms
    PyObject * field = PyObject_GetAttrString(_pymsg, "source_interval_ms");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->source_interval_ms = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // source_timeout_ms
    PyObject * field = PyObject_GetAttrString(_pymsg, "source_timeout_ms");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->source_timeout_ms = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // callback_queue_capacity
    PyObject * field = PyObject_GetAttrString(_pymsg, "callback_queue_capacity");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->callback_queue_capacity = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pose_components
    PyObject * field = PyObject_GetAttrString(_pymsg, "pose_components");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pose_components = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // actual_source_rate_millihz
    PyObject * field = PyObject_GetAttrString(_pymsg, "actual_source_rate_millihz");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->actual_source_rate_millihz = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // source_events
    PyObject * field = PyObject_GetAttrString(_pymsg, "source_events");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->source_events = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // source_samples
    PyObject * field = PyObject_GetAttrString(_pymsg, "source_samples");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->source_samples = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // source_no_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "source_no_data");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->source_no_data = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // source_timeouts
    PyObject * field = PyObject_GetAttrString(_pymsg, "source_timeouts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->source_timeouts = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // source_errors
    PyObject * field = PyObject_GetAttrString(_pymsg, "source_errors");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->source_errors = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // callback_delivered
    PyObject * field = PyObject_GetAttrString(_pymsg, "callback_delivered");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->callback_delivered = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // callback_dropped_full
    PyObject * field = PyObject_GetAttrString(_pymsg, "callback_dropped_full");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->callback_dropped_full = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // callback_discontinuities
    PyObject * field = PyObject_GetAttrString(_pymsg, "callback_discontinuities");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->callback_discontinuities = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // callback_queue_high_watermark
    PyObject * field = PyObject_GetAttrString(_pymsg, "callback_queue_high_watermark");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->callback_queue_high_watermark = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // last_source_sequence
    PyObject * field = PyObject_GetAttrString(_pymsg, "last_source_sequence");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->last_source_sequence = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // last_delivered_sequence
    PyObject * field = PyObject_GetAttrString(_pymsg, "last_delivered_sequence");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->last_delivered_sequence = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // last_source_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "last_source_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->last_source_status = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // message
    PyObject * field = PyObject_GetAttrString(_pymsg, "message");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->message, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * omniglove_interfaces__srv__get_stream_status__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetStreamStatus_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("omniglove_interfaces.srv._get_stream_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetStreamStatus_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  omniglove_interfaces__srv__GetStreamStatus_Response * ros_message = (omniglove_interfaces__srv__GetStreamStatus_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stream_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stream_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stream_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stream_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stream_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stream_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // source_interval_ms
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->source_interval_ms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "source_interval_ms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // source_timeout_ms
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->source_timeout_ms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "source_timeout_ms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // callback_queue_capacity
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->callback_queue_capacity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "callback_queue_capacity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pose_components
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pose_components);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pose_components", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // actual_source_rate_millihz
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->actual_source_rate_millihz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "actual_source_rate_millihz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // source_events
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->source_events);
    {
      int rc = PyObject_SetAttrString(_pymessage, "source_events", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // source_samples
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->source_samples);
    {
      int rc = PyObject_SetAttrString(_pymessage, "source_samples", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // source_no_data
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->source_no_data);
    {
      int rc = PyObject_SetAttrString(_pymessage, "source_no_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // source_timeouts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->source_timeouts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "source_timeouts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // source_errors
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->source_errors);
    {
      int rc = PyObject_SetAttrString(_pymessage, "source_errors", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // callback_delivered
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->callback_delivered);
    {
      int rc = PyObject_SetAttrString(_pymessage, "callback_delivered", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // callback_dropped_full
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->callback_dropped_full);
    {
      int rc = PyObject_SetAttrString(_pymessage, "callback_dropped_full", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // callback_discontinuities
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->callback_discontinuities);
    {
      int rc = PyObject_SetAttrString(_pymessage, "callback_discontinuities", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // callback_queue_high_watermark
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->callback_queue_high_watermark);
    {
      int rc = PyObject_SetAttrString(_pymessage, "callback_queue_high_watermark", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // last_source_sequence
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->last_source_sequence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "last_source_sequence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // last_delivered_sequence
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->last_delivered_sequence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "last_delivered_sequence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // last_source_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->last_source_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "last_source_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // message
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->message.data,
      strlen(ros_message->message.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "message", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
