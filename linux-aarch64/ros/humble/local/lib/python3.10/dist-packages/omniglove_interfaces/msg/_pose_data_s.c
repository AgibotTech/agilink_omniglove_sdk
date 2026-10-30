// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from omniglove_interfaces:msg/PoseData.idl
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
#include "omniglove_interfaces/msg/detail/pose_data__struct.h"
#include "omniglove_interfaces/msg/detail/pose_data__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool omniglove_interfaces__msg__pose_node__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * omniglove_interfaces__msg__pose_node__convert_to_py(void * raw_ros_message);
bool omniglove_interfaces__msg__pose_node__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * omniglove_interfaces__msg__pose_node__convert_to_py(void * raw_ros_message);
bool omniglove_interfaces__msg__pose_node__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * omniglove_interfaces__msg__pose_node__convert_to_py(void * raw_ros_message);
bool omniglove_interfaces__msg__pose_node__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * omniglove_interfaces__msg__pose_node__convert_to_py(void * raw_ros_message);
bool omniglove_interfaces__msg__pose_node__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * omniglove_interfaces__msg__pose_node__convert_to_py(void * raw_ros_message);
bool omniglove_interfaces__msg__pose_node__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * omniglove_interfaces__msg__pose_node__convert_to_py(void * raw_ros_message);
bool omniglove_interfaces__msg__pose_imu__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * omniglove_interfaces__msg__pose_imu__convert_to_py(void * raw_ros_message);
bool omniglove_interfaces__msg__tactile_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * omniglove_interfaces__msg__tactile_data__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool omniglove_interfaces__msg__pose_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("omniglove_interfaces.msg._pose_data.PoseData", full_classname_dest, 44) == 0);
  }
  omniglove_interfaces__msg__PoseData * ros_message = _ros_message;
  {  // mapped
    PyObject * field = PyObject_GetAttrString(_pymsg, "mapped");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mapped = (Py_True == field);
    Py_DECREF(field);
  }
  {  // components
    PyObject * field = PyObject_GetAttrString(_pymsg, "components");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->components = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // device_tick_ms
    PyObject * field = PyObject_GetAttrString(_pymsg, "device_tick_ms");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->device_tick_ms = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // thumb
    PyObject * field = PyObject_GetAttrString(_pymsg, "thumb");
    if (!field) {
      return false;
    }
    if (!omniglove_interfaces__msg__pose_node__convert_from_py(field, &ros_message->thumb)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // index
    PyObject * field = PyObject_GetAttrString(_pymsg, "index");
    if (!field) {
      return false;
    }
    if (!omniglove_interfaces__msg__pose_node__convert_from_py(field, &ros_message->index)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // middle
    PyObject * field = PyObject_GetAttrString(_pymsg, "middle");
    if (!field) {
      return false;
    }
    if (!omniglove_interfaces__msg__pose_node__convert_from_py(field, &ros_message->middle)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ring
    PyObject * field = PyObject_GetAttrString(_pymsg, "ring");
    if (!field) {
      return false;
    }
    if (!omniglove_interfaces__msg__pose_node__convert_from_py(field, &ros_message->ring)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pinky
    PyObject * field = PyObject_GetAttrString(_pymsg, "pinky");
    if (!field) {
      return false;
    }
    if (!omniglove_interfaces__msg__pose_node__convert_from_py(field, &ros_message->pinky)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // wrist
    PyObject * field = PyObject_GetAttrString(_pymsg, "wrist");
    if (!field) {
      return false;
    }
    if (!omniglove_interfaces__msg__pose_node__convert_from_py(field, &ros_message->wrist)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // back_of_hand_imu
    PyObject * field = PyObject_GetAttrString(_pymsg, "back_of_hand_imu");
    if (!field) {
      return false;
    }
    if (!omniglove_interfaces__msg__pose_imu__convert_from_py(field, &ros_message->back_of_hand_imu)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // tactile
    PyObject * field = PyObject_GetAttrString(_pymsg, "tactile");
    if (!field) {
      return false;
    }
    if (!omniglove_interfaces__msg__tactile_data__convert_from_py(field, &ros_message->tactile)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // unmapped_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "unmapped_data");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(uint8_t);
      if (!rosidl_runtime_c__uint8__Sequence__init(&(ros_message->unmapped_data), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint8__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      uint8_t * dest = ros_message->unmapped_data.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'unmapped_data'");
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
      if (!rosidl_runtime_c__uint8__Sequence__init(&(ros_message->unmapped_data), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint8__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      uint8_t * dest = ros_message->unmapped_data.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        uint8_t tmp = (uint8_t)PyLong_AsUnsignedLong(item);

        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * omniglove_interfaces__msg__pose_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PoseData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("omniglove_interfaces.msg._pose_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PoseData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  omniglove_interfaces__msg__PoseData * ros_message = (omniglove_interfaces__msg__PoseData *)raw_ros_message;
  {  // mapped
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mapped ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mapped", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // components
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->components);
    {
      int rc = PyObject_SetAttrString(_pymessage, "components", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // device_tick_ms
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->device_tick_ms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "device_tick_ms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // thumb
    PyObject * field = NULL;
    field = omniglove_interfaces__msg__pose_node__convert_to_py(&ros_message->thumb);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "thumb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // index
    PyObject * field = NULL;
    field = omniglove_interfaces__msg__pose_node__convert_to_py(&ros_message->index);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // middle
    PyObject * field = NULL;
    field = omniglove_interfaces__msg__pose_node__convert_to_py(&ros_message->middle);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "middle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ring
    PyObject * field = NULL;
    field = omniglove_interfaces__msg__pose_node__convert_to_py(&ros_message->ring);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ring", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pinky
    PyObject * field = NULL;
    field = omniglove_interfaces__msg__pose_node__convert_to_py(&ros_message->pinky);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pinky", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wrist
    PyObject * field = NULL;
    field = omniglove_interfaces__msg__pose_node__convert_to_py(&ros_message->wrist);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "wrist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // back_of_hand_imu
    PyObject * field = NULL;
    field = omniglove_interfaces__msg__pose_imu__convert_to_py(&ros_message->back_of_hand_imu);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "back_of_hand_imu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tactile
    PyObject * field = NULL;
    field = omniglove_interfaces__msg__tactile_data__convert_to_py(&ros_message->tactile);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "tactile", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // unmapped_data
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "unmapped_data");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(uint8_t)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->unmapped_data.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      uint8_t * src = &(ros_message->unmapped_data.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->unmapped_data.size * sizeof(uint8_t));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
