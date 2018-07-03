#include <ros/ros.h>

namespace ros {

bool ok() { return true; }
bool isInitialized() { return true; }

ServiceServer::~ServiceServer() { };

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
NodeHandle::NodeHandle(const std::string&, const std::map<std::string, std::string>&) { };
NodeHandle::~NodeHandle() { };

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
