// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from omniglove_interfaces:msg/PostWrist.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_WRIST__BUILDER_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_WRIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "omniglove_interfaces/msg/detail/post_wrist__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace omniglove_interfaces
{

namespace msg
{

namespace builder
{

class Init_PostWrist_quaternion_xyzw
{
public:
  explicit Init_PostWrist_quaternion_xyzw(::omniglove_interfaces::msg::PostWrist & msg)
  : msg_(msg)
  {}
  ::omniglove_interfaces::msg::PostWrist quaternion_xyzw(::omniglove_interfaces::msg::PostWrist::_quaternion_xyzw_type arg)
  {
    msg_.quaternion_xyzw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostWrist msg_;
};

class Init_PostWrist_landmark
{
public:
  Init_PostWrist_landmark()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PostWrist_quaternion_xyzw landmark(::omniglove_interfaces::msg::PostWrist::_landmark_type arg)
  {
    msg_.landmark = std::move(arg);
    return Init_PostWrist_quaternion_xyzw(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostWrist msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::omniglove_interfaces::msg::PostWrist>()
{
  return omniglove_interfaces::msg::builder::Init_PostWrist_landmark();
}

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_WRIST__BUILDER_HPP_
