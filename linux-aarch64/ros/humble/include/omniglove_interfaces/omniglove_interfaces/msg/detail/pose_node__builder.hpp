// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from omniglove_interfaces:msg/PoseNode.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_NODE__BUILDER_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_NODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "omniglove_interfaces/msg/detail/pose_node__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace omniglove_interfaces
{

namespace msg
{

namespace builder
{

class Init_PoseNode_imu
{
public:
  explicit Init_PoseNode_imu(::omniglove_interfaces::msg::PoseNode & msg)
  : msg_(msg)
  {}
  ::omniglove_interfaces::msg::PoseNode imu(::omniglove_interfaces::msg::PoseNode::_imu_type arg)
  {
    msg_.imu = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omniglove_interfaces::msg::PoseNode msg_;
};

class Init_PoseNode_emf
{
public:
  Init_PoseNode_emf()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseNode_imu emf(::omniglove_interfaces::msg::PoseNode::_emf_type arg)
  {
    msg_.emf = std::move(arg);
    return Init_PoseNode_imu(msg_);
  }

private:
  ::omniglove_interfaces::msg::PoseNode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::omniglove_interfaces::msg::PoseNode>()
{
  return omniglove_interfaces::msg::builder::Init_PoseNode_emf();
}

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_NODE__BUILDER_HPP_
