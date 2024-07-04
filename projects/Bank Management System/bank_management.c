#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure for bank account
struct BankAccount {
    int account_no;
    char name[50];
    float balance;
};
// Function prototypes
void createAccount(struct BankAccount* accounts, int* count);
void deposit(struct BankAccount* accounts, int count);
void withdraw(struct BankAccount* accounts, int count);
void displayAccounts(struct BankAccount* accounts, int count);

int main() {
    struct BankAccount accounts[100];
    int count = 0;
    int choice;

    while (1) {
        printf("\nBank Management System\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Display Accounts\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount(accounts, &count);
                break;
            case 2:
                deposit(accounts, count);
                break;
            case 3:
                withdraw(accounts, count);
                break;
            case 4:
                displayAccounts(accounts, count);
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

void createAccount(struct BankAccount* accounts, int* count) {
    printf("Enter Account Number: ");
    scanf("%d", &accounts[*count].account_no);
    getchar(); // Consume the newline character left by scanf

    printf("Enter Account Holder Name: ");
    fgets(accounts[*count].name, sizeof(accounts[*count].name), stdin);
    accounts[*count].name[strcspn(accounts[*count].name, "\n")] = 0; // Remove newline character

    printf("Enter Initial Deposit Amount: ");
    scanf("%f", &accounts[*count].balance);

    (*count)++;
    printf("Account created successfully!\n");
}

void deposit(struct BankAccount* accounts, int count) {
    int account_no;
    float amount;
    printf("Enter Account Number: ");
    scanf("%d", &account_no);

    for (int i = 0; i < count; i++) {
        if (accounts[i].account_no == account_no) {
            printf("Enter Amount to Deposit: ");
            scanf("%f", &amount);
            accounts[i].balance += amount;
            printf("Amount deposited successfully! New Balance: %.2f\n", accounts[i].balance);
            return;
        }
    }

    printf("Account with Account Number %d not found.\n", account_no);
}

void withdraw(struct BankAccount* accounts, int count) {
    int account_no;
    float amount;
    printf("Enter Account Number: ");
    scanf("%d", &account_no);

    for (int i = 0; i < count; i++) {
        if (accounts[i].account_no == account_no) {
            printf("Enter Amount to Withdraw: ");
            scanf("%f", &amount);
            if (amount > accounts[i].balance) {
                printf("Insufficient balance!\n");
            } else {
                accounts[i].balance -= amount;
                printf("Amount withdrawn successfully! New Balance: %.2f\n", accounts[i].balance);
            }
            return;
        }
    }

    printf("Account with Account Number %d not found.\n", account_no);
}

void displayAccounts(struct BankAccount* accounts, int count) {
    if (count == 0) {
        printf("No accounts found.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        printf("\nAccount Number: %d\n", accounts[i].account_no);
        printf("Account Holder Name: %s\n", accounts[i].name);
        printf("Balance: %.2f\n", accounts[i].balance);
    }
}
