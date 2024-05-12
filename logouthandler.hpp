#include "user.hpp"
#include "userhandler.hpp"
#if !defined(LOGOUT_HANDLER_H)
#define LOGOUT_HANDLER_H
class LogoutHandler : public UserHandler
{
public:
    using UserHandler::UserHandler;
    void handle();

private:
    User *user;
};
#endif // LOGOUT_HANDLER_H