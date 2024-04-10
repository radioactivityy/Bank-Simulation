#include "Account.h"

int Account::objectCount = 0;

int Account::GetObjectsCount() {
    return Account::objectCount;
}

Account::Account(const Client* owner, double interestRate, const Client* partner)
    : owner(owner), interestRate(interestRate), partner(partner) {
    this->balance = 0.0;
    Account::objectCount += 1;
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

Account::~Account() {
    Account::objectCount -= 1;
}