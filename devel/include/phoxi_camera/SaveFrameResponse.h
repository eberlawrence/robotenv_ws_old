// Generated by gencpp from file phoxi_camera/SaveFrameResponse.msg
// DO NOT EDIT!


#ifndef PHOXI_CAMERA_MESSAGE_SAVEFRAMERESPONSE_H
#define PHOXI_CAMERA_MESSAGE_SAVEFRAMERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace phoxi_camera
{
template <class ContainerAllocator>
struct SaveFrameResponse_
{
  typedef SaveFrameResponse_<ContainerAllocator> Type;

  SaveFrameResponse_()
    : message()
    , success(false)  {
    }
  SaveFrameResponse_(const ContainerAllocator& _alloc)
    : message(_alloc)
    , success(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_type;
  _message_type message;

   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::phoxi_camera::SaveFrameResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::phoxi_camera::SaveFrameResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SaveFrameResponse_

typedef ::phoxi_camera::SaveFrameResponse_<std::allocator<void> > SaveFrameResponse;

typedef boost::shared_ptr< ::phoxi_camera::SaveFrameResponse > SaveFrameResponsePtr;
typedef boost::shared_ptr< ::phoxi_camera::SaveFrameResponse const> SaveFrameResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::phoxi_camera::SaveFrameResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::phoxi_camera::SaveFrameResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::phoxi_camera::SaveFrameResponse_<ContainerAllocator1> & lhs, const ::phoxi_camera::SaveFrameResponse_<ContainerAllocator2> & rhs)
{
  return lhs.message == rhs.message &&
    lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::phoxi_camera::SaveFrameResponse_<ContainerAllocator1> & lhs, const ::phoxi_camera::SaveFrameResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace phoxi_camera

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::phoxi_camera::SaveFrameResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::phoxi_camera::SaveFrameResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::phoxi_camera::SaveFrameResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::phoxi_camera::SaveFrameResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::phoxi_camera::SaveFrameResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::phoxi_camera::SaveFrameResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::phoxi_camera::SaveFrameResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9bf829f07d795d3f9e541a07897da2c4";
  }

  static const char* value(const ::phoxi_camera::SaveFrameResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9bf829f07d795d3fULL;
  static const uint64_t static_value2 = 0x9e541a07897da2c4ULL;
};

template<class ContainerAllocator>
struct DataType< ::phoxi_camera::SaveFrameResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "phoxi_camera/SaveFrameResponse";
  }

  static const char* value(const ::phoxi_camera::SaveFrameResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::phoxi_camera::SaveFrameResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string message\n"
"bool success\n"
"\n"
;
  }

  static const char* value(const ::phoxi_camera::SaveFrameResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::phoxi_camera::SaveFrameResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.message);
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SaveFrameResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::phoxi_camera::SaveFrameResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::phoxi_camera::SaveFrameResponse_<ContainerAllocator>& v)
  {
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.message);
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PHOXI_CAMERA_MESSAGE_SAVEFRAMERESPONSE_H
