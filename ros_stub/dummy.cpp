#include <ros/ros.h>
#include <tf2_ros/static_transform_broadcaster.h>
#include <tf2_ros/transform_broadcaster.h>
#include <tf2_ros/transform_listener.h>
#include <urdf/model.h>


namespace ros {

bool ok() { return true; }
void spin() { };
bool isInitialized() { return true; }

ServiceServer::~ServiceServer() { };

  Subscriber NodeHandle::subscribe(SubscribeOptions& ops) {
    return {};
  }

namespace console {
  bool g_initialized = false;

  void initialize() { };

  void print(FilterBase* filter, void* logger_handle, Level level,
	   const char* file, int line, const char* function, const char* fmt, ...)
{

  va_list args;
  va_start(args, fmt);
  vfprintf(stdout, fmt, args);
  va_end(args);
  puts("");

}

void initializeLogLocation(LogLocation* loc, const std::string& name, Level level)
{
 loc->logger_enabled_ = true;
}

void setLogLocationLevel(LogLocation* loc, Level level)
{

}

void checkLogLocationEnabled(LogLocation* loc)
{

}


void print(FilterBase* filter, void* logger_handle, Level level,
	   const std::stringstream& ss, const char* file, int line, const char* function)
{
  std::string str = ss.str();
  std::cout << str << std::endl;
}

}

void start() { }

void shutdown() { }

ServiceServer NodeHandle::advertiseService(AdvertiseServiceOptions& ops) { return {}; };
Publisher NodeHandle::advertise(ros::AdvertiseOptions&) {return {}; };
NodeHandle::NodeHandle(const std::string&, const std::map<std::string, std::string>&) { };
NodeHandle::~NodeHandle() { };
WallTimer::~WallTimer() { };
WallTimer::WallTimer(ros::WallTimer const&) { };
void WallTimer::start() { };
void Timer::start() { };
Timer::~Timer() { };
Timer::Timer(ros::Timer const&) { };
AsyncSpinner::AsyncSpinner(unsigned int) { };
void AsyncSpinner::start() { };

WallTimer ros::NodeHandle::createWallTimer(
ros::WallDuration, boost::function<void (ros::WallTimerEvent const&)> const&, bool, bool) const { return {}; };
Timer ros::NodeHandle::createTimer(ros::Duration, boost::function<void (ros::TimerEvent const&)> const&, bool, bool) const {
 return {}; };

ServiceServer::ServiceServer(ros::ServiceServer const&) { };
Subscriber::Subscriber(ros::Subscriber const&) { };
Publisher::~Publisher() { };
Subscriber::~Subscriber() { };
void Subscriber::shutdown() { };
uint32_t Publisher::getNumSubscribers() const { return 0; }

  bool service::exists(const std::string& service_name, bool print_failure_reason) { return false; }

namespace {
  std::map<std::string, std::string> remappings;

  std::string strip_slash(const std::string& name) {
    if (name[0] == '/') {
      return name.substr(1);
    } else {
      return name;
    }
}

}

void init(int& argc, char** argv, const std::string& name, uint32_t options)
{
  Time::init();
  int full_argc = argc;
  // now, move the remapping argv's to the end, and decrement argc as needed
  for (int i = 0; i < argc; )
  {
    std::string arg = argv[i];
    size_t pos = arg.find(":=");
    if (pos != std::string::npos)
    {
      std::string local_name = arg.substr(0, pos);
      std::string external_name = arg.substr(pos + 2);

      remappings[local_name] = strip_slash(external_name);

      // shuffle everybody down and stuff this guy at the end of argv
      char *tmp = argv[i];
      for (int j = i; j < full_argc - 1; j++)
        argv[j] = argv[j+1];
      argv[argc-1] = tmp;
      argc--;
    }
    else
    {
      i++; // move on, since we didn't shuffle anybody here to replace it
    }
  }
}

std::string NodeHandle::resolveName(const std::string& name, bool remap) const {
  if (remappings.count(name)) {
    return strip_slash(remappings.at(name));
  }
  else {
    return strip_slash(name);
  }
}

namespace names {
const std::map<std::string, std::string>& getUnresolvedRemappings() {
  return remappings;
}
}

void waitForShutdown() { }

}

namespace tf2_ros {
StaticTransformBroadcaster::StaticTransformBroadcaster() { };
void StaticTransformBroadcaster::sendTransform(const std::vector<geometry_msgs::TransformStamped>&) { };
void StaticTransformBroadcaster::sendTransform(const geometry_msgs::TransformStamped&) { };
TransformBroadcaster::TransformBroadcaster() { };
void TransformBroadcaster::sendTransform(const std::vector<geometry_msgs::TransformStamped>&) { };
void TransformBroadcaster::sendTransform(const geometry_msgs::TransformStamped&) { };
TransformListener::TransformListener(tf2::BufferCore& bf, bool) : buffer_(bf) { };
TransformListener::~TransformListener() { };
}
