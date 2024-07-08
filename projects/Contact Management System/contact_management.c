#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the maximum number of contacts
#define MAX_CONTACTS 100

// Define the structure to store contact details
struct Contact {
    int id;
    char name[50];
    char phone[15];
    char email[50];
};

// Declare an array to store the contacts
struct Contact contacts[MAX_CONTACTS];
int contactCount = 0;

// Function to add a new contact
void addContact() {
    if (contactCount >= MAX_CONTACTS) {
        printf("Cannot add more contacts. The list is full.\n");
        return;
    }
    struct Contact newContact;
    printf("Enter Contact ID: ");
    scanf("%d", &newContact.id);
    printf("Enter Contact Name: ");
    scanf("%s", newContact.name);
    printf("Enter Contact Phone: ");
    scanf("%s", newContact.phone);
    printf("Enter Contact Email: ");
    scanf("%s", newContact.email);
    contacts[contactCount++] = newContact;
    printf("Contact added successfully!\n");
}

// Function to display all contacts
void displayContacts() {
    if (contactCount == 0) {
        printf("No contacts to display.\n");
        return;
    }
    printf("ID\tName\t\tPhone\t\tEmail\n");
    printf("---------------------------------------------\n");
    for (int i = 0; i < contactCount; i++) {
        printf("%d\t%s\t\t%s\t\t%s\n", contacts[i].id, contacts[i].name, contacts[i].phone, contacts[i].email);
    }
}

// Function to search for a contact by ID
void searchContact() {
    int id;
    printf("Enter Contact ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < contactCount; i++) {
        if (contacts[i].id == id) {
            printf("Contact found:\n");
            printf("ID: %d\n", contacts[i].id);
            printf("Name: %s\n", contacts[i].name);
            printf("Phone: %s\n", contacts[i].phone);
            printf("Email: %s\n", contacts[i].email);
            return;
        }
    }
    printf("Contact with ID %d not found.\n", id);
}

// Function to delete a contact by ID
void deleteContact() {
    int id;
    printf("Enter Contact ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < contactCount; i++) {
        if (contacts[i].id == id) {
            for (int j = i; j < contactCount - 1; j++) {
                contacts[j] = contacts[j + 1];
            }
            contactCount--;
            printf("Contact with ID %d deleted successfully.\n", id);
            return;
        }
    }
    printf("Contact with ID %d not found.\n", id);
}

int main() {
    int choice;
    while (1) {
        printf("\nContact Management System\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                displayContacts();
                break;
            case 3:
                searchContact();
                break;
            case 4:
                deleteContact();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
