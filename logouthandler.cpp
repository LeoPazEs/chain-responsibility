#include "logouthandler.hpp"
#include <iostream>

void LogoutHandler::handle()
{
    std::cout << "Logging out" << user->getUsername() << std::endl;
    exit(0);
}