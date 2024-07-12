# Basic File Management System

## Description

This project implements a basic file management system in C, performing operations such as creating, reading, writing, renaming, and deleting files. The system provides a text-based menu interface for user interaction.

## Features

- **Create a File:** Allows the user to create a new file and write content to it.
- **Read a File:** Allows the user to read the content of an existing file.
- **Write to a File:** Allows the user to append content to an existing file.
- **Rename a File:** Allows the user to rename an existing file.
- **Delete a File:** Allows the user to delete an existing file.
- **Exit:** Exits the program.

## Required Modules

- Standard I/O library (`stdio.h`)
- Standard library (`stdlib.h`)

These libraries are typically included by default with most C compilers.

## How to Install Required Modules

No additional modules need to be installed. Ensure you have a C compiler (such as `gcc`) installed on your system.

## How to Run the Script

1. **Clone the Repository:**

```sh
   git clone https://github.com/yourusername/basic-file-management-system.git
   cd basic-file-management-system
```
2. **Compile the Program:**
Use the `gcc` compiler to compile the program:
```bash 
gcc -o file_management file_management.c
```
3.  **Run the Program:**
Execute the compiled program:
```bash 
./file_management
```
4.  **Follow the On-Screen Instructions:**
The program will display a menu with the available operations. Enter the corresponding number to perform an operation.
```bash 
File Management System
1. Create File
2. Read File
3. Write to File
4. Rename File
5. Delete File
6. Exit
Enter your choice: 
```
## Example
```bash 
File Management System
1. Create File
2. Read File
3. Write to File
4. Rename File
5. Delete File
6. Exit
Enter your choice: 1
Enter the filename to create: example.txt
Enter content to write in the file: This is a test file.
File created and content written successfully.

File Management System
1. Create File
2. Read File
3. Write to File
4. Rename File
5. Delete File
6. Exit
Enter your choice: 2
Enter the filename to read: example.txt
Content of the file:
This is a test file.

File read successfully.
```