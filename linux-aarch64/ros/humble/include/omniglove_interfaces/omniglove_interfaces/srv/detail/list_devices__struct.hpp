// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from omniglove_interfaces:srv/ListDevices.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__SRV__DETAIL__LIST_DEVICES__STRUCT_HPP_
#define OMNIGLOVE_INTERFACES__SRV__DETAIL__LIST_DEVICES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__omniglove_interfaces__srv__ListDevices_Request __attribute__((deprecated))
#else
# define DEPRECATED__omniglove_interfaces__srv__ListDevices_Request __declspec(deprecated)
#endif

namespace omniglove_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ListDevices_Request_
{
  using Type = ListDevices_Request_<ContainerAllocator>;

  explicit ListDevices_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ListDevices_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    omniglove_interfaces::srv::ListDevices_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const omniglove_interfaces::srv::ListDevices_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<omniglove_interfaces::srv::ListDevices_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<omniglove_interfaces::srv::ListDevices_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::srv::ListDevices_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::srv::ListDevices_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::srv::ListDevices_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::srv::ListDevices_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<omniglove_interfaces::srv::ListDevices_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<omniglove_interfaces::srv::ListDevices_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__omniglove_interfaces__srv__ListDevices_Request
    std::shared_ptr<omniglove_interfaces::srv::ListDevices_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__omniglove_interfaces__srv__ListDevices_Request
    std::shared_ptr<omniglove_interfaces::srv::ListDevices_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ListDevices_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ListDevices_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ListDevices_Request_

// alias to use template instance with default allocator
using ListDevices_Request =
  omniglove_interfaces::srv::ListDevices_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace omniglove_interfaces


// Include directives for member types
// Member 'devices'
#include "omniglove_interfaces/msg/detail/device_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__omniglove_interfaces__srv__ListDevices_Response __attribute__((deprecated))
#else
# define DEPRECATED__omniglove_interfaces__srv__ListDevices_Response __declspec(deprecated)
#endif

namespace omniglove_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ListDevices_Response_
{
  using Type = ListDevices_Response_<ContainerAllocator>;

  explicit ListDevices_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ListDevices_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _devices_type =
    std::vector<omniglove_interfaces::msg::DeviceInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<omniglove_interfaces::msg::DeviceInfo_<ContainerAllocator>>>;
  _devices_type devices;

  // setters for named parameter idiom
  Type & set__devices(
    const std::vector<omniglove_interfaces::msg::DeviceInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<omniglove_interfaces::msg::DeviceInfo_<ContainerAllocator>>> & _arg)
  {
    this->devices = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    omniglove_interfaces::srv::ListDevices_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const omniglove_interfaces::srv::ListDevices_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<omniglove_interfaces::srv::ListDevices_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<omniglove_interfaces::srv::ListDevices_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::srv::ListDevices_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::srv::ListDevices_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::srv::ListDevices_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::srv::ListDevices_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<omniglove_interfaces::srv::ListDevices_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<omniglove_interfaces::srv::ListDevices_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__omniglove_interfaces__srv__ListDevices_Response
    std::shared_ptr<omniglove_interfaces::srv::ListDevices_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__omniglove_interfaces__srv__ListDevices_Response
    std::shared_ptr<omniglove_interfaces::srv::ListDevices_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ListDevices_Response_ & other) const
  {
    if (this->devices != other.devices) {
      return false;
    }
    return true;
  }
  bool operator!=(const ListDevices_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ListDevices_Response_

// alias to use template instance with default allocator
using ListDevices_Response =
  omniglove_interfaces::srv::ListDevices_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace omniglove_interfaces

namespace omniglove_interfaces
{

namespace srv
{

struct ListDevices
{
  using Request = omniglove_interfaces::srv::ListDevices_Request;
  using Response = omniglove_interfaces::srv::ListDevices_Response;
};

}  // namespace srv

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__SRV__DETAIL__LIST_DEVICES__STRUCT_HPP_
