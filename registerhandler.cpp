#include "registerhandler.hpp"
#include "userhandler.hpp"
#include <iostream>

std::string RegisterHandler::Handle(std::string request)
{
    std::string username = user->getUsername();
    std::string password = user->getPassword();
    if (request == "register")
    {
        return "Registered user " + user->getUsername() + ".\n";
    }
    else
    {
        return AbstractHandler::Handle(request);
    }
}