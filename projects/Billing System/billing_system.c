#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ITEMS 100
#define MAX_ITEM_NAME_LENGTH 100

// Define the structure to store item details
struct Item {
    int id;
    char name[MAX_ITEM_NAME_LENGTH];
    float price;
    int quantity;
};

// Declare an array to store the items
struct Item items[MAX_ITEMS];
int itemCount = 0;

// Function to add a new item
void addItem() {
    if (itemCount >= MAX_ITEMS) {
        printf("Cannot add more items. The inventory is full.\n");
        return;
    }
    struct Item newItem;
    printf("Enter item ID: ");
    scanf("%d", &newItem.id);
    printf("Enter item name: ");
    getchar(); // to consume the newline character left by previous input
    fgets(newItem.name, MAX_ITEM_NAME_LENGTH, stdin);
    newItem.name[strcspn(newItem.name, "\n")] = 0; // Remove newline character
    printf("Enter item price: ");
    scanf("%f", &newItem.price);
    printf("Enter item quantity: ");
    scanf("%d", &newItem.quantity);
    items[itemCount++] = newItem;
    printf("Item added successfully!\n");
}

// Function to display all items
void displayItems() {
    if (itemCount == 0) {
        printf("No items to display.\n");
        return;
    }
    printf("ID\tName\t\tPrice\tQuantity\n");
    printf("-------------------------------------------------\n");
    for (int i = 0; i < itemCount; i++) {
        printf("%d\t%s\t\t%.2f\t%d\n", items[i].id, items[i].name, items[i].price, items[i].quantity);
    }
}

// Function to generate bill
void generateBill() {
    int id, quantity;
    float total = 0.0;
    printf("Enter item IDs and quantities (enter -1 to end):\n");
    while (1) {
        printf("Enter item ID: ");
        scanf("%d", &id);
        if (id == -1) break;
        printf("Enter quantity: ");
        scanf("%d", &quantity);
        int found = 0;
        for (int i = 0; i < itemCount; i++) {
            if (items[i].id == id) {
                if (items[i].quantity < quantity) {
                    printf("Not enough stock for item %s. Available quantity: %d\n", items[i].name, items[i].quantity);
                } else {
                    printf("Item: %s, Price: %.2f, Quantity: %d, Total: %.2f\n", items[i].name, items[i].price, quantity, items[i].price * quantity);
                    total += items[i].price * quantity;
                    items[i].quantity -= quantity;
                    found = 1;
                }
                break;
            }
        }
        if (!found) {
            printf("Item with ID %d not found.\n", id);
        }
    }
    printf("Total bill amount: %.2f\n", total);
}

int main() {
    int choice;
    while (1) {
        printf("\nBilling System\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Generate Bill\n");
        printf("4. Exit\n");
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
                generateBill();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
