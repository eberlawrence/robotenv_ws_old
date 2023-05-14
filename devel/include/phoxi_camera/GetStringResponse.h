// Generated by gencpp from file phoxi_camera/GetStringResponse.msg
// DO NOT EDIT!


#ifndef PHOXI_CAMERA_MESSAGE_GETSTRINGRESPONSE_H
#define PHOXI_CAMERA_MESSAGE_GETSTRINGRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace phoxi_camera
{
template <class ContainerAllocator>
struct GetStringResponse_
{
  typedef GetStringResponse_<ContainerAllocator> Type;

  GetStringResponse_()
    : value()
    , message()
    , success(false)  {
    }
  GetStringResponse_(const ContainerAllocator& _alloc)
    : value(_alloc)
    , message(_alloc)
    , success(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _value_type;
  _value_type value;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _message_type;
  _message_type message;

   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::phoxi_camera::GetStringResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::phoxi_camera::GetStringResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetStringResponse_

typedef ::phoxi_camera::GetStringResponse_<std::allocator<void> > GetStringResponse;

typedef boost::shared_ptr< ::phoxi_camera::GetStringResponse > GetStringResponsePtr;
typedef boost::shared_ptr< ::phoxi_camera::GetStringResponse const> GetStringResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::phoxi_camera::GetStringResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::phoxi_camera::GetStringResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::phoxi_camera::GetStringResponse_<ContainerAllocator1> & lhs, const ::phoxi_camera::GetStringResponse_<ContainerAllocator2> & rhs)
{
  return lhs.value == rhs.value &&
    lhs.message == rhs.message &&
    lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::phoxi_camera::GetStringResponse_<ContainerAllocator1> & lhs, const ::phoxi_camera::GetStringResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace phoxi_camera

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::phoxi_camera::GetStringResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::phoxi_camera::GetStringResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::phoxi_camera::GetStringResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::phoxi_camera::GetStringResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::phoxi_camera::GetStringResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::phoxi_camera::GetStringResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::phoxi_camera::GetStringResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "433bf658b0146fb6dd240f5d5c05b01c";
  }

  static const char* value(const ::phoxi_camera::GetStringResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x433bf658b0146fb6ULL;
  static const uint64_t static_value2 = 0xdd240f5d5c05b01cULL;
};

template<class ContainerAllocator>
struct DataType< ::phoxi_camera::GetStringResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "phoxi_camera/GetStringResponse";
  }

  static const char* value(const ::phoxi_camera::GetStringResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::phoxi_camera::GetStringResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string value\n"
"string message\n"
"bool success\n"
;
  }

  static const char* value(const ::phoxi_camera::GetStringResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::phoxi_camera::GetStringResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
      stream.next(m.message);
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetStringResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::phoxi_camera::GetStringResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::phoxi_camera::GetStringResponse_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.value);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.message);
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PHOXI_CAMERA_MESSAGE_GETSTRINGRESPONSE_H
