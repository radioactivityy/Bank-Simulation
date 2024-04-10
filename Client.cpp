#include "Client.h"

int Client::objectCount = 0;

Client::Client(const std::string& code, const std::string& name)
    : code(code), name(name)
{
    Client::objectCount += 1;
}

std::string Client::getCode() const {
    return this->code;
}

std::string Client::getName() const {
    return this->name;
}

Client:: ~Client()
{
    Client::objectCount -= 1;
}

int Client::GetObjectsCount()
{
    return Client::objectCount;
}
