# Tourism Management System
A simple C program to manage and track tourist information. The application allows you to add, view, search, and delete tourist records

## Description
This program is a basic implementation of a tourism management system. It supports the following functionalities:

- Add a new tourist
- Display all tourists
- Search for a specific tourist by ID
- Delete a tourist

## Features
- Add Tourist: Allows you to add a new tourist to the list.
- Display Tourists: Displays all tourists currently in the system.
- Search Tourist: Search for a tourist by ID.
- Delete Tourist: Delete a tourist by ID.

## Required Modules
The program uses the standard C library modules:

- `stdio.h` for input/output functions
- `stdlib.h` for memory allocation
- `string.h` for string manipulation

## How to Install Required Modules
No additional modules need to be installed. Ensure you have a C compiler like `gcc` installed on your system.

## How to Run the Script
Follow these steps to compile and run the program:

1. Save the code: Save the provided code to a file named `tourism_management.c`.

2. Open a terminal or command prompt: Navigate to the directory where you saved `tourism_management.c`.

3. Compile the code: Use a C compiler like `gcc` to compile the program. Run the following command:
```bash 
gcc tourism_management.c -o tourism_management
```
4. Run the compiled program: After successful compilation, run the program using:
```bash 
./tourism_management
```
5. Follow the on-screen instructions: The program will display a menu with options to add tourists, display tourists, search tourists, delete tourists, or exit the program. Enter the corresponding number to choose an option.

## Example
```bash 
Tourism Management System
1. Add Tourist
2. Display Tourists
3. Search Tourist
4. Delete Tourist
5. Exit
Enter your choice: 1
Enter Tourist ID: 101
Enter Tourist Name: JohnDoe
Enter Destination: Paris
Enter Number of Days: 7
Tourist added successfully!

Tourism Management System
1. Add Tourist
2. Display Tourists
3. Search Tourist
4. Delete Tourist
5. Exit
Enter your choice: 2
ID      Name            Destination     Days
------------------------------------------------------
101     JohnDoe         Paris           7
```