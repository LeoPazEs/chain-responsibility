#include <string>
#if !defined(USER_HANDLER_H)
#define USER_HANDLER_H
class UserHandler
{
public:
    virtual UserHandler *SetNext(UserHandler *handler) = 0;
    virtual std::string Handle(std::string request) = 0;
};
#endif // USER_HANDLER_H
