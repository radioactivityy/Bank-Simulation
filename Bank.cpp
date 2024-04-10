#include "Bank.h"
#include <iostream>
using namespace std;
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

bool Bank::canDeleteAccount(const Client* client) const {
    double totalBalance = 0;
    for (auto* account : accounts) {
        if (account->getOwner() == client) {
            totalBalance += account->getBalance();
        }
    }
    return totalBalance == 0;
}

// Delete account by client
void Bank::deleteAccount(const Client* client) {
    auto it = std::remove_if(accounts.begin(), accounts.end(),
        [&client](Account* account) { return account->getOwner() == client && account->getBalance() == 0; });

    if (it != accounts.end()) {
        accounts.erase(it, accounts.end());
    }
    else {
        std::cout << "Cannot delete account. Account balance is non-zero." << std::endl;
    }
}