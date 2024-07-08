# Contact Management System
A simple C program to manage contacts. The application allows you to add, view, search, and delete contact records.

## Description
This program is a basic implementation of a contact management system. It supports the following functionalities:

- Add a new contact
- Display all contacts
- Search for a contact by ID
- Delete a contact by ID

## Features
- Add Contact: Allows you to add a new contact to the list.
- Display Contacts: Displays all contacts currently in the list.
- Search Contact: Search for a contact in the list by its ID.
- Delete Contact: Delete a contact from the list by its ID.

## Required Modules
The program uses the standard C library modules:

- `stdio.h` for input/output functions
- `stdlib.h` for memory allocation
- `string.h` for string manipulation

## How to Install Required Modules
No additional modules need to be installed. Ensure you have a C compiler like `gcc` installed on your system.

## How to Run the Script
Follow these steps to compile and run the program:
1. Save the code: Save the provided code to a file named `contact_management.c`.

2. Open a terminal or command prompt: Navigate to the directory where you saved `contact_management.c`.

3. Compile the code: Use a C compiler like `gcc` to compile the program. Run the following command:
```bash 
gcc contact_management.c -o contact_management
```
4. Run the compiled program: After successful compilation, run the program using:
```bash
./contact_management
```
5. Follow the on-screen instructions: The program will display a menu with options to add, display, search, delete contacts, or exit the program. Enter the corresponding number to choose an option.

## Example
```bash
Contact Management System
1. Add Contact
2. Display Contacts
3. Search Contact
4. Delete Contact
5. Exit
Enter your choice: 1
Enter Contact ID: 101
Enter Contact Name: JohnDoe
Enter Contact Phone: 1234567890
Enter Contact Email: john@example.com
Contact added successfully!

Contact Management System
1. Add Contact
2. Display Contacts
3. Search Contact
4. Delete Contact
5. Exit
Enter your choice: 2
ID      Name            Phone           Email
---------------------------------------------
101     JohnDoe         1234567890      john@example.com

```