#include "logouthandler.hpp"
#include <string>
#include <iostream>

std::string LogoutHandler::Handle(std::string request)
{
    return "Logging out " + user->getUsername() + ".\n";
}