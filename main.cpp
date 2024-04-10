#include <iostream>
#include "Client.h"
#include "Account.h"
#include "Bank.h"

int main() {
    Bank bank;

    // Adding clients
    Client* kate = bank.addClient("C001", "Kate Bla");
    Client* dalen = bank.addClient("C002", "Dalen Bla Bla");
    Client* selin = bank.addClient("C003", "Selin Bla");

    // Displaying the initial count of Client objects
    std::cout << "Initial Client object count: " << Client::GetObjectsCount() << std::endl;

    // Adding accounts
    Account* kateAccount = bank.addAccount(kate, 0.03);
    Account* dalenAccount = bank.addAccount(dalen, 0.02, kate);

    std::cout << "Initial Account Object Count: " << Account::GetObjectsCount() << std::endl;
    // Performing transactions
    kateAccount->withdraw(1000);
    dalenAccount->withdraw(5100);
    bank.addInterestToAllAccounts();

    // Displaying balances and account details
    std::cout << "Kate's account balance: $" << kateAccount->getBalance() << std::endl;
    std::cout << "Dalen's account balance: $" << dalenAccount->getBalance() << std::endl;

    std::cout << "Kate's account number: " << kateAccount->getNumber() << std::endl;
    std::cout << "Dalen's account number: " << dalenAccount->getNumber() << std::endl;

    std::cout << "Kate's account owner: " << kateAccount->getOwner()->getName() << std::endl;
    if (dalenAccount->getPartner()) {
        std::cout << "Dalen's account owner: " << dalenAccount->getOwner()->getName() << std::endl;
        std::cout << "Dalen's account partner: " << dalenAccount->getPartner()->getName() << std::endl;
    }



    // Displaying the final count of Client objects
    std::cout << "Final Client object count: " << Client::GetObjectsCount() << std::endl;

    return 0;
}
