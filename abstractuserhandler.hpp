#include "userhandler.hpp"
#include <string>
#if !defined(ABSTRACH_USER_HANDLER_H)
#define ABSTRACH_USER_HANDLER_H
class AbstractHandler : public UserHandler
{
private:
    UserHandler *next_handler_;

public:
    AbstractHandler() : next_handler_(nullptr)
    {
    }
    UserHandler *SetNext(UserHandler *handler) override
    {
        this->next_handler_ = handler;
        return handler;
    }
    std::string Handle(std::string request) override
    {
        if (this->next_handler_)
        {
            return this->next_handler_->Handle(request);
        }

        return {};
    }
};
#endif // ABSTRACH_USER_HANDLER_H
