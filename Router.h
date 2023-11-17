#ifndef ROUTER_H
#define ROUTER_H
#include <ctime> // add this line to include the ctime library
#include <curl/curl.h>
#include "include/crow_all.h"
#include "API.h"
#include "Database.h"

class Router {
    public:
        Router();
        ~Router();
        int enroute(crow::SimpleApp& app);
        std::string handleQuery(std::string query);
    private:
        crow::SimpleApp& app;
        API api;
        Database db;
        std::string currRoute;
        std::string prevRoute;
        crow::mustache::context ctx;
};
#endif