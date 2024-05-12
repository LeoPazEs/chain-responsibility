#include "handler.hpp"
#include <string>
#if !defined(ABSTRACH_HANDLER_H)
#define ABSTRACH_HANDLER_H
class AbstractHandler : public Handler
{
private:
    Handler *next_handler_;

public:
    AbstractHandler() : next_handler_(nullptr)
    {
    }
    Handler *SetNext(Handler *handler) override
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
#endif // ABSTRACH_HANDLER_H
