#include "user.hpp"
#include "userhandler.hpp"
#include "loginhandler.hpp"
#include "logouthandler.hpp"
#include "abstractuserhandler.hpp"
#include <iostream>
#include <string>

int main()
{
    std::string username;
    std::string password;

    std::cout << "Enter username: ";
    std::cin >> username;

    std::cout << "Enter password: ";
    std::cin >> password;

    User user = User(username, password);

    LoginHandler *loginHandler = new LoginHandler(&user);
    LogoutHandler *logoutHandler = new LogoutHandler(&user);

    loginHandler->SetNext(logoutHandler);
    std::cout << loginHandler->Handle("login");

    delete loginHandler;
    delete logoutHandler;

    return 0;
}