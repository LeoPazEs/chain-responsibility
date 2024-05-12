#include "user.hpp"
#include "abstractuserhandler.hpp"
#if !defined(LOGOUT_HANDLER_H)
#define LOGOUT_HANDLER_H
class LogoutHandler : public AbstractHandler
{
public:
    using AbstractHandler::AbstractHandler;
    std::string Handle(std::string request);
};
#endif // LOGOUT_HANDLER_H