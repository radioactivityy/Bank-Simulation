// Account.h
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "Client.h"

class Account {
private:
    static int nextNumber;
    int number;
    double balance;
    double interestRate;
    const Client* owner;
    const Client* partner;

public:
    Account(const Client* owner, double interestRate, const Client* partner = nullptr);
    void deposit(double amount);
    bool withdraw(double amount);
    void addInterest();
    double getBalance() const;
    int getNumber() const;
    const Client* getOwner() const;
    const Client* getPartner() const;
};

#endif // ACCOUNT_H
