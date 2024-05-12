#include "user.hpp"
#include "userhandler.hpp"
#include "loginhandler.hpp"
#include "logouthandler.hpp"
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
    UserHandler userHandler = UserHandler(&user);

    UserHandler login = userHandler.handler("login");
    login.handle();
    std::cout << "Username: " << user.getUsername() << std::endl;

    return 0;
}