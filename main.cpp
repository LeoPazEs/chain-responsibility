#include "user.hpp"
#include "loginhandler.hpp"
#include "logouthandler.hpp"
#include "registerhandler.hpp"
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

    std::string choice;

    RegisterHandler *registerHandler = new RegisterHandler(&user);
    LoginHandler *loginHandler = new LoginHandler(&user);
    LogoutHandler *logoutHandler = new LogoutHandler(&user);

    registerHandler->SetNext(loginHandler)->SetNext(logoutHandler);
    std::cout << "What do you want to do : register, login, logout ? ";
    std::cin >> choice;
    std::cout << registerHandler->Handle(choice);

    delete loginHandler;
    delete logoutHandler;
    delete registerHandler;

    return 0;
}