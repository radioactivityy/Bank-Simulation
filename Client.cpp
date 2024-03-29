#include "Client.h"

Client::Client(const std::string& code, const std::string& name)
    : code(code), name(name) {}

std::string Client::getCode() const {
    return this->code;
}

std::string Client::getName() const {
    return this->name;
}
