# Inventory Management System
A simple C program to manage an inventory. The application allows you to add, view, search, and delete items from the inventory.

## Description
This program is a basic implementation of an inventory management system. It supports the following functionalities:

- Add a new item to the inventory
- Display all items in the inventory
- Search for an item by ID
- Delete an item by ID
## Features
- Add Item: Allows you to add a new item to the inventory.
- Display Items: Displays all items currently in the inventory.
- Search Item: Search for an item in the inventory by its ID.
- Delete Item: Delete an item from the inventory by its ID.

## Required Modules
The program uses the standard C library modules:

- `stdio.h` for input/output functions
- `stdlib.h` for standard library functions
- `string.h` for string manipulation

## How to Install Required Modules
No additional modules need to be installed. Ensure you have a C compiler like `gcc` installed on your system. 

## How to Run the Script
Follow these steps to compile and run the program:

1. Save the code: Save the provided code to a file named `inventory_management.c`.

2. Open a terminal or command prompt: Navigate to the directory where you saved `inventory_management.c`.

3. Compile the code: Use a C compiler like `gcc` to compile the program. Run the following command:
```bash 
gcc inventory_management.c -o inventory_management
```
4. Run the compiled program: After successful compilation, run the program using:
```bash 
./inventory_management
```
5. Follow the on-screen instructions: The program will display a menu with options to add, display, search, delete items, or exit the program. Enter the corresponding number to choose an option.

## Example
```bash
Inventory Management System
1. Add Item
2. Display Items
3. Search Item
4. Delete Item
5. Exit
Enter your choice: 1
Enter Item ID: 101
Enter Item Name: Apple
Enter Item Quantity: 50
Enter Item Price: 0.50
Item added successfully!

Inventory Management System
1. Add Item
2. Display Items
3. Search Item
4. Delete Item
5. Exit
Enter your choice: 2
ID      Name            Quantity        Price
---------------------------------------------
101     Apple           50              0.50
```