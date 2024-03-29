#include "Bank.h"

Bank::~Bank() {
    for (auto* client : clients) delete client;
    for (auto* account : accounts) delete account;
}

Client* Bank::addClient(const std::string& code, const std::string& name) {
    Client* client = new Client(code, name);
    this->clients.push_back(client);
    return client;
}

Account* Bank::addAccount(const Client* owner, double interestRate, const Client* partner) {
    Account* account = new Account(owner, interestRate, partner);
    this->accounts.push_back(account);
    return account;
}

void Bank::addInterestToAllAccounts() {
    for (auto* account : accounts) {
        account->addInterest();
    }
}
