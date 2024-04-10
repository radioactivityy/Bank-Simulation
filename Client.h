// Client.h
#ifndef CLIENT_H
#define CLIENT_H

#include <string>

class Client {
private:
    static int objectCount;
    std::string code;
    std::string name;
public:
    static int GetObjectsCount();
    Client(const std::string& code, const std::string& name);
    std::string getCode() const;
    std::string getName() const;
    ~Client();
};

#endif

