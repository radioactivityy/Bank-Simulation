#include "Account.h"

int Account::nextNumber = 0; 
Account::Account(const Client* owner, double interestRate, const Client* partner)
    : owner(owner), interestRate(interestRate), partner(partner) {
    this->number = ++nextNumber;
    this->balance = 0.0; 
}

void Account::deposit(double amount) {
    this->balance += amount;
}

bool Account::withdraw(double amount) {
    if (amount <= this->balance) {
        this->balance -= amount;
        return true;
    }
    return false;
}

void Account::addInterest() {
    this->balance += this->balance * this->interestRate;
}

double Account::getBalance() const {
    return this->balance;
}

int Account::getNumber() const {
    return this->number;
}

const Client* Account::getOwner() const {
    return this->owner;
}

const Client* Account::getPartner() const {
    return this->partner;
}
