// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_interface:msg/RplidarData.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACE__MSG__DETAIL__RPLIDAR_DATA__BUILDER_HPP_
#define CAR_INTERFACE__MSG__DETAIL__RPLIDAR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "car_interface/msg/detail/rplidar_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace car_interface
{

namespace msg
{

namespace builder
{

class Init_RplidarData_theta
{
public:
  explicit Init_RplidarData_theta(::car_interface::msg::RplidarData & msg)
  : msg_(msg)
  {}
  ::car_interface::msg::RplidarData theta(::car_interface::msg::RplidarData::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_interface::msg::RplidarData msg_;
};

class Init_RplidarData_dist
{
public:
  Init_RplidarData_dist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RplidarData_theta dist(::car_interface::msg::RplidarData::_dist_type arg)
  {
    msg_.dist = std::move(arg);
    return Init_RplidarData_theta(msg_);
  }

private:
  ::car_interface::msg::RplidarData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_interface::msg::RplidarData>()
{
  return car_interface::msg::builder::Init_RplidarData_dist();
}

}  // namespace car_interface

#endif  // CAR_INTERFACE__MSG__DETAIL__RPLIDAR_DATA__BUILDER_HPP_
