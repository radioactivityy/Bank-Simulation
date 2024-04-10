# Bank Processes - Simulation

This simulation models the operations of a small bank, providing an insightful perspective into how banking processes might be managed. The focus is on client and account management, highlighting the dynamics of deposits, withdrawals, and interest accrual over time. Our simulation evolves as new clients join and accounts are created, reflecting a real-world scenario of a growing bank.

## Behavior Overview

- **Client and Account Growth**: Initially, the bank starts with a limited number of clients and accounts, but is designed to scale as more clients join and new accounts are opened.

- **Account Ownership**:
  - Each account is owned by a single client and may have an additional partner; both must be bank clients.
  - Each client is identified by a unique name and code.

- **Transactions**:
  - **Deposits** and **withdrawals** can be made to and from accounts. 
  - The **balance** of each account can be checked at any time.
  - Withdrawals are contingent upon having sufficient funds in the account.

- **Interest Rates**:
  - Accounts benefit from an interest rate, which can be either a standard rate or a special rate assigned to individual accounts.
  - Periodically, interest is calculated and added to each account based on the applicable interest rate.

- **Search Functionality**:
  - Both accounts and clients can be searched for using their number or code, facilitating easy access and management.

## Visual Representation

For a visual overview of the simulation and its components, see the diagram below:

![Bank Simulation Diagram](https://github.com/radioactivityy/Bank-Simulation/assets/74931303/14c5fb0c-dcfa-4891-930c-25840ab9bdda)

This simulation aims to provide a comprehensive understanding of basic bank operations, illustrating how accounts are managed, the importance of interest rates, and the flexibility required to accommodate an increasing number of clients.
