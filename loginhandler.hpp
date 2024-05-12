#include "user.hpp"
#include <string>
#include "abstractuserhandler.hpp"
#if !defined(LOGIN_HANDLER_H)
#define LOGIN_HANDLER_H
class LoginHandler : public AbstractHandler
{
public:
    using AbstractHandler::AbstractHandler;
    std::string Handle(std::string request);
};
#endif // LOGIN_HANDLER_H
