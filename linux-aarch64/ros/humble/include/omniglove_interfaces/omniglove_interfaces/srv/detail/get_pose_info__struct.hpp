// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from omniglove_interfaces:srv/GetPoseInfo.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__SRV__DETAIL__GET_POSE_INFO__STRUCT_HPP_
#define OMNIGLOVE_INTERFACES__SRV__DETAIL__GET_POSE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__omniglove_interfaces__srv__GetPoseInfo_Request __attribute__((deprecated))
#else
# define DEPRECATED__omniglove_interfaces__srv__GetPoseInfo_Request __declspec(deprecated)
#endif

namespace omniglove_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPoseInfo_Request_
{
  using Type = GetPoseInfo_Request_<ContainerAllocator>;

  explicit GetPoseInfo_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_uid = 0ull;
      this->info_type = 0;
      this->timeout_ms = 0ul;
    }
  }

  explicit GetPoseInfo_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_uid = 0ull;
      this->info_type = 0;
      this->timeout_ms = 0ul;
    }
  }

  // field types and members
  using _device_uid_type =
    uint64_t;
  _device_uid_type device_uid;
  using _info_type_type =
    uint8_t;
  _info_type_type info_type;
  using _timeout_ms_type =
    uint32_t;
  _timeout_ms_type timeout_ms;

  // setters for named parameter idiom
  Type & set__device_uid(
    const uint64_t & _arg)
  {
    this->device_uid = _arg;
    return *this;
  }
  Type & set__info_type(
    const uint8_t & _arg)
  {
    this->info_type = _arg;
    return *this;
  }
  Type & set__timeout_ms(
    const uint32_t & _arg)
  {
    this->timeout_ms = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    omniglove_interfaces::srv::GetPoseInfo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const omniglove_interfaces::srv::GetPoseInfo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<omniglove_interfaces::srv::GetPoseInfo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<omniglove_interfaces::srv::GetPoseInfo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::srv::GetPoseInfo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::srv::GetPoseInfo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::srv::GetPoseInfo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::srv::GetPoseInfo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<omniglove_interfaces::srv::GetPoseInfo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<omniglove_interfaces::srv::GetPoseInfo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__omniglove_interfaces__srv__GetPoseInfo_Request
    std::shared_ptr<omniglove_interfaces::srv::GetPoseInfo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__omniglove_interfaces__srv__GetPoseInfo_Request
    std::shared_ptr<omniglove_interfaces::srv::GetPoseInfo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPoseInfo_Request_ & other) const
  {
    if (this->device_uid != other.device_uid) {
      return false;
    }
    if (this->info_type != other.info_type) {
      return false;
    }
    if (this->timeout_ms != other.timeout_ms) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPoseInfo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPoseInfo_Request_

// alias to use template instance with default allocator
using GetPoseInfo_Request =
  omniglove_interfaces::srv::GetPoseInfo_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace omniglove_interfaces


#ifndef _WIN32
# define DEPRECATED__omniglove_interfaces__srv__GetPoseInfo_Response __attribute__((deprecated))
#else
# define DEPRECATED__omniglove_interfaces__srv__GetPoseInfo_Response __declspec(deprecated)
#endif

namespace omniglove_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPoseInfo_Response_
{
  using Type = GetPoseInfo_Response_<ContainerAllocator>;

  explicit GetPoseInfo_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->control_status = 0ul;
      this->return_code = 0ul;
      this->device_error_code = 0ul;
      this->request_id = 0ull;
      this->connection_generation = 0ull;
      this->protocol_sequence = 0ul;
      this->node_count = 0ul;
      this->hand = 0;
      this->nominal_source_rate_hz = 0ul;
      this->calibration_state = 0ul;
      this->max_distance_mm = 0ul;
      this->capability_flags = 0ul;
      this->message = "";
    }
  }

  explicit GetPoseInfo_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->control_status = 0ul;
      this->return_code = 0ul;
      this->device_error_code = 0ul;
      this->request_id = 0ull;
      this->connection_generation = 0ull;
      this->protocol_sequence = 0ul;
      this->node_count = 0ul;
      this->hand = 0;
      this->nominal_source_rate_hz = 0ul;
      this->calibration_state = 0ul;
      this->max_distance_mm = 0ul;
      this->capability_flags = 0ul;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _control_status_type =
    uint32_t;
  _control_status_type control_status;
  using _return_code_type =
    uint32_t;
  _return_code_type return_code;
  using _device_error_code_type =
    uint32_t;
  _device_error_code_type device_error_code;
  using _request_id_type =
    uint64_t;
  _request_id_type request_id;
  using _connection_generation_type =
    uint64_t;
  _connection_generation_type connection_generation;
  using _protocol_sequence_type =
    uint32_t;
  _protocol_sequence_type protocol_sequence;
  using _node_count_type =
    uint32_t;
  _node_count_type node_count;
  using _hand_type =
    uint8_t;
  _hand_type hand;
  using _nominal_source_rate_hz_type =
    uint32_t;
  _nominal_source_rate_hz_type nominal_source_rate_hz;
  using _calibration_state_type =
    uint32_t;
  _calibration_state_type calibration_state;
  using _max_distance_mm_type =
    uint32_t;
  _max_distance_mm_type max_distance_mm;
  using _capability_flags_type =
    uint32_t;
  _capability_flags_type capability_flags;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__control_status(
    const uint32_t & _arg)
  {
    this->control_status = _arg;
    return *this;
  }
  Type & set__return_code(
    const uint32_t & _arg)
  {
    this->return_code = _arg;
    return *this;
  }
  Type & set__device_error_code(
    const uint32_t & _arg)
  {
    this->device_error_code = _arg;
    return *this;
  }
  Type & set__request_id(
    const uint64_t & _arg)
  {
    this->request_id = _arg;
    return *this;
  }
  Type & set__connection_generation(
    const uint64_t & _arg)
  {
    this->connection_generation = _arg;
    return *this;
  }
  Type & set__protocol_sequence(
    const uint32_t & _arg)
  {
    this->protocol_sequence = _arg;
    return *this;
  }
  Type & set__node_count(
    const uint32_t & _arg)
  {
    this->node_count = _arg;
    return *this;
  }
  Type & set__hand(
    const uint8_t & _arg)
  {
    this->hand = _arg;
    return *this;
  }
  Type & set__nominal_source_rate_hz(
    const uint32_t & _arg)
  {
    this->nominal_source_rate_hz = _arg;
    return *this;
  }
  Type & set__calibration_state(
    const uint32_t & _arg)
  {
    this->calibration_state = _arg;
    return *this;
  }
  Type & set__max_distance_mm(
    const uint32_t & _arg)
  {
    this->max_distance_mm = _arg;
    return *this;
  }
  Type & set__capability_flags(
    const uint32_t & _arg)
  {
    this->capability_flags = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    omniglove_interfaces::srv::GetPoseInfo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const omniglove_interfaces::srv::GetPoseInfo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<omniglove_interfaces::srv::GetPoseInfo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<omniglove_interfaces::srv::GetPoseInfo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::srv::GetPoseInfo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::srv::GetPoseInfo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::srv::GetPoseInfo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::srv::GetPoseInfo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<omniglove_interfaces::srv::GetPoseInfo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<omniglove_interfaces::srv::GetPoseInfo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__omniglove_interfaces__srv__GetPoseInfo_Response
    std::shared_ptr<omniglove_interfaces::srv::GetPoseInfo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__omniglove_interfaces__srv__GetPoseInfo_Response
    std::shared_ptr<omniglove_interfaces::srv::GetPoseInfo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPoseInfo_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->control_status != other.control_status) {
      return false;
    }
    if (this->return_code != other.return_code) {
      return false;
    }
    if (this->device_error_code != other.device_error_code) {
      return false;
    }
    if (this->request_id != other.request_id) {
      return false;
    }
    if (this->connection_generation != other.connection_generation) {
      return false;
    }
    if (this->protocol_sequence != other.protocol_sequence) {
      return false;
    }
    if (this->node_count != other.node_count) {
      return false;
    }
    if (this->hand != other.hand) {
      return false;
    }
    if (this->nominal_source_rate_hz != other.nominal_source_rate_hz) {
      return false;
    }
    if (this->calibration_state != other.calibration_state) {
      return false;
    }
    if (this->max_distance_mm != other.max_distance_mm) {
      return false;
    }
    if (this->capability_flags != other.capability_flags) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPoseInfo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPoseInfo_Response_

// alias to use template instance with default allocator
using GetPoseInfo_Response =
  omniglove_interfaces::srv::GetPoseInfo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace omniglove_interfaces

namespace omniglove_interfaces
{

namespace srv
{

struct GetPoseInfo
{
  using Request = omniglove_interfaces::srv::GetPoseInfo_Request;
  using Response = omniglove_interfaces::srv::GetPoseInfo_Response;
};

}  // namespace srv

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__SRV__DETAIL__GET_POSE_INFO__STRUCT_HPP_
