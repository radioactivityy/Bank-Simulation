// Bank.h
#ifndef BANK_H
#define BANK_H

#include <vector>
#include "Client.h"
#include "Account.h"

class Bank {
private:
    std::vector<Client*> clients;
    std::vector<Account*> accounts;

public:
    ~Bank();
    Client* addClient(const std::string& code, const std::string& name);
    Account* addAccount(const Client* owner, double interestRate, const Client* partner = nullptr);
    void addInterestToAllAccounts();
    
};

#endif // BANK_H
