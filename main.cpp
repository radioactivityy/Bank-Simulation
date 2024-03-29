#include <iostream>
#include "Client.h"
#include "Account.h"
#include "Bank.h"

int main() {
    Bank bank;

    Client* kate = bank.addClient("C001", "Kate Bla");
    Client* dalen = bank.addClient("C002", "Dalen Bla Bla");

    Account* kateAccount = bank.addAccount(kate, 0.03); 
    Account* dalenAccount = bank.addAccount(dalen, 0.02, kate); 

    kateAccount->deposit(1000);
    kateAccount->withdraw(200);
    dalenAccount->deposit(5000);
    bank.addInterestToAllAccounts();

    std::cout << "Kate's account balance: $" << kateAccount->getBalance() << std::endl;
    std::cout << "Dalen's account balance: $" << dalenAccount->getBalance() << std::endl;

    std::cout << "Kate's account number: " << kateAccount->getNumber() << std::endl;
    std::cout << "Dalen' account number: " << dalenAccount->getNumber() << std::endl;

    std::cout << "Kate's account owner: " << kateAccount->getOwner()->getName() << std::endl;
    if (dalenAccount->getPartner()) { 
        std::cout << "Dalen account owner: " << dalenAccount->getOwner()->getName() << std::endl;
        std::cout << "Dalen account partner : " << dalenAccount->getPartner()->getName() << std::endl;
    }

    return 0;
}
