#include "loginhandler.hpp"
#include "userhandler.hpp"
#include <iostream>

void LoginHandler::handle()
{
    std::string username = user->getUsername();
    std::string password = user->getPassword();

    if (username == "admin" && password == "admin")
    {
        std::cout << "Logging in" << user->getUsername() << std::endl;
    }
    else
    {
        UserHandler logoutHandler = this->handler("logout");
        logoutHandler.handle();
    }
}