#include "user.hpp"
#include <string>
#include "abstractuserhandler.hpp"
#if !defined(REGISTER_HANDLER_H)
#define REGISTER_HANDLER_H
class RegisterHandler : public AbstractHandler
{
public:
    using AbstractHandler::AbstractHandler;
    std::string Handle(std::string request);
};
#endif // REGISTER_HANDLER_H