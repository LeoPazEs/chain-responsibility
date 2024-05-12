#include "userhandler.hpp"
#include "loginhandler.hpp"
#include "logouthandler.hpp"
#include <string>

UserHandler::UserHandler(User *user)
{
    setUser(user);
}

void UserHandler::setUser(User *user)
{
    this->user = user;
}

UserHandler UserHandler::handler(std::string request)
{
    if (request == "login")
    {
        return LoginHandler(user);
    }
    else if (request == "logout")
    {
        return LogoutHandler(user);
    }
    return NULL;
}