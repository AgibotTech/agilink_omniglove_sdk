// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from omniglove_interfaces:msg/Pose6.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE6__BUILDER_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE6__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "omniglove_interfaces/msg/detail/pose6__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace omniglove_interfaces
{

namespace msg
{

namespace builder
{

class Init_Pose6_quaternion_xyzw
{
public:
  explicit Init_Pose6_quaternion_xyzw(::omniglove_interfaces::msg::Pose6 & msg)
  : msg_(msg)
  {}
  ::omniglove_interfaces::msg::Pose6 quaternion_xyzw(::omniglove_interfaces::msg::Pose6::_quaternion_xyzw_type arg)
  {
    msg_.quaternion_xyzw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omniglove_interfaces::msg::Pose6 msg_;
};

class Init_Pose6_position_m
{
public:
  Init_Pose6_position_m()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pose6_quaternion_xyzw position_m(::omniglove_interfaces::msg::Pose6::_position_m_type arg)
  {
    msg_.position_m = std::move(arg);
    return Init_Pose6_quaternion_xyzw(msg_);
  }

private:
  ::omniglove_interfaces::msg::Pose6 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::omniglove_interfaces::msg::Pose6>()
{
  return omniglove_interfaces::msg::builder::Init_Pose6_position_m();
}

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE6__BUILDER_HPP_
