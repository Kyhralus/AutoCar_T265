// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_t265_interface:msg/SerialData.idl
// generated code does not contain a copyright notice

#ifndef CAR_T265_INTERFACE__MSG__DETAIL__SERIAL_DATA__BUILDER_HPP_
#define CAR_T265_INTERFACE__MSG__DETAIL__SERIAL_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "car_t265_interface/msg/detail/serial_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace car_t265_interface
{

namespace msg
{

namespace builder
{

class Init_SerialData_data
{
public:
  Init_SerialData_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::car_t265_interface::msg::SerialData data(::car_t265_interface::msg::SerialData::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_t265_interface::msg::SerialData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_t265_interface::msg::SerialData>()
{
  return car_t265_interface::msg::builder::Init_SerialData_data();
}

}  // namespace car_t265_interface

#endif  // CAR_T265_INTERFACE__MSG__DETAIL__SERIAL_DATA__BUILDER_HPP_
