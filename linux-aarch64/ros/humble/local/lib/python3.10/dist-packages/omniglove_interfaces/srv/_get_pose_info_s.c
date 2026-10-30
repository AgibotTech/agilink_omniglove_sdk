// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from omniglove_interfaces:srv/GetPoseInfo.idl
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
#include "omniglove_interfaces/srv/detail/get_pose_info__struct.h"
#include "omniglove_interfaces/srv/detail/get_pose_info__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool omniglove_interfaces__srv__get_pose_info__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("omniglove_interfaces.srv._get_pose_info.GetPoseInfo_Request", full_classname_dest, 59) == 0);
  }
  omniglove_interfaces__srv__GetPoseInfo_Request * ros_message = _ros_message;
  {  // device_uid
    PyObject * field = PyObject_GetAttrString(_pymsg, "device_uid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->device_uid = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // info_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "info_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->info_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // timeout_ms
    PyObject * field = PyObject_GetAttrString(_pymsg, "timeout_ms");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timeout_ms = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * omniglove_interfaces__srv__get_pose_info__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetPoseInfo_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("omniglove_interfaces.srv._get_pose_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetPoseInfo_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  omniglove_interfaces__srv__GetPoseInfo_Request * ros_message = (omniglove_interfaces__srv__GetPoseInfo_Request *)raw_ros_message;
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
  {  // info_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->info_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "info_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timeout_ms
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->timeout_ms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timeout_ms", field);
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
// #include "omniglove_interfaces/srv/detail/get_pose_info__struct.h"
// already included above
// #include "omniglove_interfaces/srv/detail/get_pose_info__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool omniglove_interfaces__srv__get_pose_info__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(strncmp("omniglove_interfaces.srv._get_pose_info.GetPoseInfo_Response", full_classname_dest, 60) == 0);
  }
  omniglove_interfaces__srv__GetPoseInfo_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }
  {  // control_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "control_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->control_status = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // return_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "return_code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->return_code = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // device_error_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "device_error_code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->device_error_code = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // request_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "request_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->request_id = PyLong_AsUnsignedLongLong(field);
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
  {  // protocol_sequence
    PyObject * field = PyObject_GetAttrString(_pymsg, "protocol_sequence");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->protocol_sequence = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // node_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "node_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->node_count = PyLong_AsUnsignedLong(field);
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
  {  // nominal_source_rate_hz
    PyObject * field = PyObject_GetAttrString(_pymsg, "nominal_source_rate_hz");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nominal_source_rate_hz = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // calibration_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "calibration_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->calibration_state = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // max_distance_mm
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_distance_mm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->max_distance_mm = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // capability_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "capability_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->capability_flags = PyLong_AsUnsignedLong(field);
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
PyObject * omniglove_interfaces__srv__get_pose_info__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetPoseInfo_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("omniglove_interfaces.srv._get_pose_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetPoseInfo_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  omniglove_interfaces__srv__GetPoseInfo_Response * ros_message = (omniglove_interfaces__srv__GetPoseInfo_Response *)raw_ros_message;
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
  {  // control_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->control_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "control_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // return_code
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->return_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "return_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // device_error_code
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->device_error_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "device_error_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // request_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->request_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "request_id", field);
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
  {  // protocol_sequence
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->protocol_sequence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "protocol_sequence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // node_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->node_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "node_count", field);
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
  {  // nominal_source_rate_hz
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->nominal_source_rate_hz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nominal_source_rate_hz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // calibration_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->calibration_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "calibration_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_distance_mm
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->max_distance_mm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_distance_mm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // capability_flags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->capability_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "capability_flags", field);
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
