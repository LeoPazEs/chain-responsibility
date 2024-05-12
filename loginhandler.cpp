#include "loginhandler.hpp"
#include "userhandler.hpp"
#include <iostream>

std::string LoginHandler::Handle(std::string request)
{
    std::string username = user->getUsername();
    std::string password = user->getPassword();

    if (username == "admin" && password == "admin")
    {
        return "Logging in " + user->getUsername() + ".\n";
    }
    else
    {
        return AbstractHandler::Handle("logout");
    }
}