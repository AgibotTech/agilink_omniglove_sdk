// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from omniglove_interfaces:msg/PostSample.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_SAMPLE__STRUCT_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_SAMPLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'metadata'
#include "omniglove_interfaces/msg/detail/stream_metadata__struct.hpp"
// Member 'data'
#include "omniglove_interfaces/msg/detail/post_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__omniglove_interfaces__msg__PostSample __attribute__((deprecated))
#else
# define DEPRECATED__omniglove_interfaces__msg__PostSample __declspec(deprecated)
#endif

namespace omniglove_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PostSample_
{
  using Type = PostSample_<ContainerAllocator>;

  explicit PostSample_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : metadata(_init),
    data(_init)
  {
    (void)_init;
  }

  explicit PostSample_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : metadata(_alloc, _init),
    data(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _metadata_type =
    omniglove_interfaces::msg::StreamMetadata_<ContainerAllocator>;
  _metadata_type metadata;
  using _data_type =
    omniglove_interfaces::msg::PostData_<ContainerAllocator>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__metadata(
    const omniglove_interfaces::msg::StreamMetadata_<ContainerAllocator> & _arg)
  {
    this->metadata = _arg;
    return *this;
  }
  Type & set__data(
    const omniglove_interfaces::msg::PostData_<ContainerAllocator> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    omniglove_interfaces::msg::PostSample_<ContainerAllocator> *;
  using ConstRawPtr =
    const omniglove_interfaces::msg::PostSample_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::PostSample_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::PostSample_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::PostSample_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::PostSample_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::PostSample_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::PostSample_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::PostSample_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::PostSample_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__omniglove_interfaces__msg__PostSample
    std::shared_ptr<omniglove_interfaces::msg::PostSample_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__omniglove_interfaces__msg__PostSample
    std::shared_ptr<omniglove_interfaces::msg::PostSample_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PostSample_ & other) const
  {
    if (this->metadata != other.metadata) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const PostSample_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PostSample_

// alias to use template instance with default allocator
using PostSample =
  omniglove_interfaces::msg::PostSample_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_SAMPLE__STRUCT_HPP_
