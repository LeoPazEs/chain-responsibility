#include "user.hpp"
#include "userhandler.hpp"
#if !defined(LOGIN_HANDLER_H)
#define LOGIN_HANDLER_H
class LoginHandler : public UserHandler
{
public:
    using UserHandler::UserHandler;
    void handle();

private:
    User *user;
};
#endif // LOGIN_HANDLER_H
