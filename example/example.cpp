
#include "logger/logger.hpp"
#include "uri.h"

int main()
{
    set_log_level(logger_iface::log_level::debug);
    __LOG(error, "hello logger!"
                     << "this is error log");
    __LOG(warn, "hello logger!"
                    << "this is warn log");
    __LOG(info, "hello logger!"
                    << "this is info log");
    __LOG(debug, "hello logger!"
                     << "this is debug log");
    web::uri u(U("http://testname.com:81/path?baz"));
    web::uri a = u.authority();
    __LOG(error, "\npath is : " << u.path() << "\n scheme() is : " << a.scheme() << "\n host() is : " << a.host() << "\n port is : " << a.port());
    __LOG(error, "to string : " << a.to_string());
}
