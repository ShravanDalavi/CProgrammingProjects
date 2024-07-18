# Library Catalog System

## Description

This project implements a Library Catalog System in C, managing books, including adding, displaying, searching, and deleting books. The system provides a text-based menu interface for user interaction.

## Features

- **Add a Book:** Allows the user to add a new book to the catalog by entering the book's ID, title, author, and category.
- **Display Books:** Displays all the books currently in the catalog.
- **Search for a Book:** Allows the user to search for a book by its ID and displays the book's details if found.
- **Delete a Book:** Allows the user to delete a book from the catalog by its ID.
- **Exit:** Exits the program.

## Required Modules

- Standard I/O library (`stdio.h`)
- Standard library (`stdlib.h`)
- String library (`string.h`)

These libraries are typically included by default with most C compilers.

## How to Install Required Modules

No additional modules need to be installed. Ensure you have a C compiler (such as `gcc`) installed on your system.

## How to Run the Script

1. Clone the Repository:

```sh
   git clone https://github.com/yourusername/library-catalog-system.git
   cd library-catalog-system
```

2. Compile the Program:
Use the `gcc` compiler to compile the program:
```bash 
gcc -o library_catalog library_catalog.c
```
3. Run the Script:
```bash 
./library_catalog
```
4. Follow the On-Screen Instructions:
The program will display a menu with the available operations. Enter the corresponding number to perform an operation.
```bash 
Library Catalog System
1. Add Book
2. Display Books
3. Search Book
4. Delete Book
5. Exit
Enter your choice: 
```
## Example 
```bash 
Library Catalog System
1. Add Book
2. Display Books
3. Search Book
4. Delete Book
5. Exit
Enter your choice: 1
Enter Book ID: 101
Enter Book Title: C Programming Language
Enter Book Author: Brian W. Kernighan
Enter Book Category: Programming
Book added successfully!

Library Catalog System
1. Add Book
2. Display Books
3. Search Book
4. Delete Book
5. Exit
Enter your choice: 2
ID      Title                   Author                 Category
---------------------------------------------------------------
101     C Programming Language  Brian W. Kernighan     Programming
```