#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the maximum number of items in the inventory
#define MAX_ITEMS 100

// Define the structure to store item details
struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

// Declare an array to store the items
struct Item inventory[MAX_ITEMS];
int itemCount = 0;

// Function to add a new item
void addItem() {
    if (itemCount >= MAX_ITEMS) {
        printf("Cannot add more items. The inventory is full.\n");
        return;
    }
    struct Item newItem;
    printf("Enter Item ID: ");
    scanf("%d", &newItem.id);
    printf("Enter Item Name: ");
    scanf("%s", newItem.name);
    printf("Enter Item Quantity: ");
    scanf("%d", &newItem.quantity);
    printf("Enter Item Price: ");
    scanf("%f", &newItem.price);
    inventory[itemCount++] = newItem;
    printf("Item added successfully!\n");
}

// Function to display all items
void displayItems() {
    if (itemCount == 0) {
        printf("No items to display.\n");
        return;
    }
    printf("ID\tName\t\tQuantity\tPrice\n");
    printf("---------------------------------------------\n");
    for (int i = 0; i < itemCount; i++) {
        printf("%d\t%s\t\t%d\t\t%.2f\n", inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
    }
}

// Function to search for an item by ID
void searchItem() {
    int id;
    printf("Enter Item ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < itemCount; i++) {
        if (inventory[i].id == id) {
            printf("Item found:\n");
            printf("ID: %d\n", inventory[i].id);
            printf("Name: %s\n", inventory[i].name);
            printf("Quantity: %d\n", inventory[i].quantity);
            printf("Price: %.2f\n", inventory[i].price);
            return;
        }
    }
    printf("Item with ID %d not found.\n", id);
}

// Function to delete an item by ID
void deleteItem() {
    int id;
    printf("Enter Item ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < itemCount; i++) {
        if (inventory[i].id == id) {
            for (int j = i; j < itemCount - 1; j++) {
                inventory[j] = inventory[j + 1];
            }
            itemCount--;
            printf("Item with ID %d deleted successfully.\n", id);
            return;
        }
    }
    printf("Item with ID %d not found.\n", id);
}

int main() {
    int choice;
    while (1) {
        printf("\nInventory Management System\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Delete Item\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addItem();
                break;
            case 2:
                displayItems();
                break;
            case 3:
                searchItem();
                break;
            case 4:
                deleteItem();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
