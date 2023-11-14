#include "Webserver.h"

Webserver::Webserver()
{
    router.enroute(app);
    std::cout << "Web Server created" << std::endl;
}
Webserver::~Webserver()
{
    std::cout << "Web Server destroyed" << std::endl;
}
void Webserver::run(int port)
{
    std::cout << "Web Server running on port " << port << std::endl;
    try {
        app.port(port).multithreaded().run();
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    
    }
}
void Webserver::stop()
{
    std::cout << "Web Server stopped" << std::endl;
}