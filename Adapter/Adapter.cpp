#include "Adapter.h"

std::string Adapter::request() const
{
    std::string to_translate = this->adaptee_->specificRequest();
    return "Adapter: (TRANSLATED) " + to_translate;
}
