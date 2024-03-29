// Client.h
#ifndef CLIENT_H
#define CLIENT_H

#include <string>

class Client {
private:
    std::string code;
    std::string name;
public:
    Client(const std::string& code, const std::string& name);
    std::string getCode() const;
    std::string getName() const;
};

#endif

