# Bank Management System
This Bank Management System allows you to manage bank accounts, including creating new accounts, depositing money, withdrawing money, and displaying account details. It is implemented in C.

## Description
The program defines a structure to store account information such as account number, account holder's name, and balance. It includes functions to create new accounts, deposit money into an account, withdraw money from an account, and display all account details.

## Features
- Create a new bank account
- Deposit money into an account
- Withdraw money from an account
- Display all bank account details
## Required Modules
- Standard C library (`<stdio.h>`)
- Standard library (`<stdlib.h>`)
- String library (`<string.h>`)
## How to Install Required Modules
No special installation is required as this program only uses standard C libraries, which are included in any standard C compiler.

## How to Run the Script
1. Save the code to a file, e.g., bank_management.c.
2. Compile the program using a C compiler
```sh
gcc bank_management.c -o bank_management
```
3. Run the compiled program:
```sh
./bank_management
```
## Output
```mathematica
Bank Management System
1. Create Account
2. Deposit Money
3. Withdraw Money
4. Display Accounts
5. Exit
Enter your choice: 1
Enter Account Number: 12345
Enter Account Holder Name: Alice
Enter Initial Deposit Amount: 1000
Account created successfully!

Bank Management System
1. Create Account
2. Deposit Money
3. Withdraw Money
4. Display Accounts
5. Exit
Enter your choice: 2
Enter Account Number: 12345
Enter Amount to Deposit: 500
Amount deposited successfully! New Balance: 1500.00

Bank Management System
1. Create Account
2. Deposit Money
3. Withdraw Money
4. Display Accounts
5. Exit
Enter your choice: 3
Enter Account Number: 12345
Enter Amount to Withdraw: 200
Amount withdrawn successfully! New Balance: 1300.00

Bank Management System
1. Create Account
2. Deposit Money
3. Withdraw Money
4. Display Accounts
5. Exit
Enter your choice: 4

Account Number: 12345
Account Holder Name: Alice
Balance: 1300.00
```

