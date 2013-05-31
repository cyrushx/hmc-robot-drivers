/* Auto-generated by genmsg_cpp for file /home/robot/rosbots/hmc-robot-drivers/missile_launcher/srv/PanLeft.srv */
#ifndef MISSILE_LAUNCHER_SERVICE_PANLEFT_H
#define MISSILE_LAUNCHER_SERVICE_PANLEFT_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"




namespace missile_launcher
{
template <class ContainerAllocator>
struct PanLeftRequest_ {
  typedef PanLeftRequest_<ContainerAllocator> Type;

  PanLeftRequest_()
  {
  }

  PanLeftRequest_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::missile_launcher::PanLeftRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::missile_launcher::PanLeftRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct PanLeftRequest
typedef  ::missile_launcher::PanLeftRequest_<std::allocator<void> > PanLeftRequest;

typedef boost::shared_ptr< ::missile_launcher::PanLeftRequest> PanLeftRequestPtr;
typedef boost::shared_ptr< ::missile_launcher::PanLeftRequest const> PanLeftRequestConstPtr;


template <class ContainerAllocator>
struct PanLeftResponse_ {
  typedef PanLeftResponse_<ContainerAllocator> Type;

  PanLeftResponse_()
  : success(false)
  {
  }

  PanLeftResponse_(const ContainerAllocator& _alloc)
  : success(false)
  {
  }

  typedef uint8_t _success_type;
  uint8_t success;


  typedef boost::shared_ptr< ::missile_launcher::PanLeftResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::missile_launcher::PanLeftResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct PanLeftResponse
typedef  ::missile_launcher::PanLeftResponse_<std::allocator<void> > PanLeftResponse;

typedef boost::shared_ptr< ::missile_launcher::PanLeftResponse> PanLeftResponsePtr;
typedef boost::shared_ptr< ::missile_launcher::PanLeftResponse const> PanLeftResponseConstPtr;

struct PanLeft
{

typedef PanLeftRequest Request;
typedef PanLeftResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct PanLeft
} // namespace missile_launcher

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::missile_launcher::PanLeftRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::missile_launcher::PanLeftRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::missile_launcher::PanLeftRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::missile_launcher::PanLeftRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::missile_launcher::PanLeftRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "missile_launcher/PanLeftRequest";
  }

  static const char* value(const  ::missile_launcher::PanLeftRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::missile_launcher::PanLeftRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
";
  }

  static const char* value(const  ::missile_launcher::PanLeftRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::missile_launcher::PanLeftRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::missile_launcher::PanLeftResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::missile_launcher::PanLeftResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::missile_launcher::PanLeftResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const  ::missile_launcher::PanLeftResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::missile_launcher::PanLeftResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "missile_launcher/PanLeftResponse";
  }

  static const char* value(const  ::missile_launcher::PanLeftResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::missile_launcher::PanLeftResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool success\n\
\n\
\n\
";
  }

  static const char* value(const  ::missile_launcher::PanLeftResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::missile_launcher::PanLeftResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::missile_launcher::PanLeftRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct PanLeftRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::missile_launcher::PanLeftResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.success);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct PanLeftResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<missile_launcher::PanLeft> {
  static const char* value() 
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const missile_launcher::PanLeft&) { return value(); } 
};

template<>
struct DataType<missile_launcher::PanLeft> {
  static const char* value() 
  {
    return "missile_launcher/PanLeft";
  }

  static const char* value(const missile_launcher::PanLeft&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<missile_launcher::PanLeftRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const missile_launcher::PanLeftRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<missile_launcher::PanLeftRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "missile_launcher/PanLeft";
  }

  static const char* value(const missile_launcher::PanLeftRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<missile_launcher::PanLeftResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const missile_launcher::PanLeftResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<missile_launcher::PanLeftResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "missile_launcher/PanLeft";
  }

  static const char* value(const missile_launcher::PanLeftResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // MISSILE_LAUNCHER_SERVICE_PANLEFT_H
