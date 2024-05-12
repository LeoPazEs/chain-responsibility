#include "logouthandler.hpp"
#include <string>
#include <iostream>

std::string LogoutHandler::Handle(std::string request)
{
    if (request == "logout")
    {
        return "Logging out " + user->getUsername() + ".\n";
    }
    else
    {
        return AbstractHandler::Handle(request);
    }
}