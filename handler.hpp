#include <string>
#if !defined(HANDLER_H)
#define HANDLER_H
class Handler
{
public:
    virtual Handler *SetNext(Handler *handler) = 0;
    virtual std::string Handle(std::string request) = 0;
};
#endif // HANDLER_H
