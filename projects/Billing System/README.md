# Simple Billing System

## Description

This project implements a basic billing system in C that allows users to manage items, their prices, quantities, and generate bills/invoices. The system provides a text-based menu interface for user interaction, enabling users to add items to the inventory, display the inventory, and generate bills based on the items purchased.

## Features

- **Add an Item:** Allows the user to add a new item by entering the item ID, name, price, and quantity.
- **Display Items:** Displays all the items currently stored in the inventory, showing the item ID, name, price, and available quantity.
- **Generate Bill:** Allows the user to generate a bill by entering item IDs and quantities. It calculates the total bill amount and updates the inventory accordingly.
- **Exit:** Exits the program.

## Required Modules

- Standard I/O library (`stdio.h`)
- Standard library (`stdlib.h`)
- String library (`string.h`)

These libraries are typically included by default with most C compilers.

## How to Install Required Modules

No additional modules need to be installed. Ensure you have a C compiler (such as `gcc`) installed on your system.

## How to Run the Script

1. **Clone the Repository:**

```sh
   git clone https://github.com/yourusername/billing-system.git
   cd billing-system
```

2. Compile the Program:
Use the `gcc` compiler to compile the program:
```bash 
gcc -o billing_system billing_system.c
```
3. Run the Script:
Execute the compiled program:
```bash 
./billing_system
```
4. Follow the On-Screen Instructions:

The program will display a menu with the available operations. Enter the corresponding number to perform an operation.
```bash 
Billing System
1. Add Item
2. Display Items
3. Generate Bill
4. Exit
Enter your choice: 
```

## Example
```bash 
Billing System
1. Add Item
2. Display Items
3. Generate Bill
4. Exit
Enter your choice: 1
Enter item ID: 1
Enter item name: Apple
Enter item price: 1.5
Enter item quantity: 10
Item added successfully!

Billing System
1. Add Item
2. Display Items
3. Generate Bill
4. Exit
Enter your choice: 2
ID      Name            Price   Quantity
-------------------------------------------------
1       Apple           1.50    10

Billing System
1. Add Item
2. Display Items
3. Generate Bill
4. Exit
Enter your choice: 3
Enter item IDs and quantities (enter -1 to end):
Enter item ID: 1
Enter quantity: 2
Item: Apple, Price: 1.50, Quantity: 2, Total: 3.00
Total bill amount: 3.00
```