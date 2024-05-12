#include "user.hpp"
#include <string>
#ifndef USER_HANDLER_H
#define USER_HANDLER_H
class UserHandler
{
public:
    UserHandler(User *user);
    void setUser(User *user);
    UserHandler handler(std::string request);
    void handle();

private:
    User *user;
};
#endif // USER_HANDLER_H