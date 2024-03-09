// Generated by gencpp from file ros_arduino_msgs/DigitalPinMode.msg
// DO NOT EDIT!


#ifndef ROS_ARDUINO_MSGS_MESSAGE_DIGITALPINMODE_H
#define ROS_ARDUINO_MSGS_MESSAGE_DIGITALPINMODE_H

#include <ros/service_traits.h>


#include <ros_arduino_msgs/DigitalPinModeRequest.h>
#include <ros_arduino_msgs/DigitalPinModeResponse.h>


namespace ros_arduino_msgs
{

struct DigitalPinMode
{

typedef DigitalPinModeRequest Request;
typedef DigitalPinModeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct DigitalPinMode
} // namespace ros_arduino_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ros_arduino_msgs::DigitalPinMode > {
  static const char* value()
  {
    return "b10eff5e5e7e4623e1ee840cec92b372";
  }

  static const char* value(const ::ros_arduino_msgs::DigitalPinMode&) { return value(); }
};

template<>
struct DataType< ::ros_arduino_msgs::DigitalPinMode > {
  static const char* value()
  {
    return "ros_arduino_msgs/DigitalPinMode";
  }

  static const char* value(const ::ros_arduino_msgs::DigitalPinMode&) { return value(); }
};


// service_traits::MD5Sum< ::ros_arduino_msgs::DigitalPinModeRequest> should match
// service_traits::MD5Sum< ::ros_arduino_msgs::DigitalPinMode >
template<>
struct MD5Sum< ::ros_arduino_msgs::DigitalPinModeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ros_arduino_msgs::DigitalPinMode >::value();
  }
  static const char* value(const ::ros_arduino_msgs::DigitalPinModeRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_arduino_msgs::DigitalPinModeRequest> should match
// service_traits::DataType< ::ros_arduino_msgs::DigitalPinMode >
template<>
struct DataType< ::ros_arduino_msgs::DigitalPinModeRequest>
{
  static const char* value()
  {
    return DataType< ::ros_arduino_msgs::DigitalPinMode >::value();
  }
  static const char* value(const ::ros_arduino_msgs::DigitalPinModeRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ros_arduino_msgs::DigitalPinModeResponse> should match
// service_traits::MD5Sum< ::ros_arduino_msgs::DigitalPinMode >
template<>
struct MD5Sum< ::ros_arduino_msgs::DigitalPinModeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ros_arduino_msgs::DigitalPinMode >::value();
  }
  static const char* value(const ::ros_arduino_msgs::DigitalPinModeResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_arduino_msgs::DigitalPinModeResponse> should match
// service_traits::DataType< ::ros_arduino_msgs::DigitalPinMode >
template<>
struct DataType< ::ros_arduino_msgs::DigitalPinModeResponse>
{
  static const char* value()
  {
    return DataType< ::ros_arduino_msgs::DigitalPinMode >::value();
  }
  static const char* value(const ::ros_arduino_msgs::DigitalPinModeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROS_ARDUINO_MSGS_MESSAGE_DIGITALPINMODE_H
