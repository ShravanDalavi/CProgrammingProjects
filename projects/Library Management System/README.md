# Library Management System

## Description

This project implements a simple Library Management System using the C programming language. The application allows you to add books, list all books, and search for books by title.

## Features

- **Add Book:** Add a new book to the library with an ID, title, and author.
- **List Books:** Display all the books currently in the library.
- **Search Book:** Search for a book by its title.

## Required Modules

- Standard C Library

## How to Run the Script

1. **Clone the Repository:**

```sh
    git clone https://github.com/yourusername/library-management-system.git
    cd library-management-system
```

2. **Compile the Program:**

```sh
    gcc -o library library.c
```

3. **Run the Program:**

```sh
    ./library
```

## Example Output

When you run the application, you will see the following menu:
```bash 
Library Management System

1.Add Book
2.List Books
3.Search Book
4.Exit
Enter your choice: 1
Enter book ID: 1
Enter book title: The Great Gatsby
Enter book author: F. Scott Fitzgerald
Book added successfully.
Library Management System
1. Add Book
2. List Books
3. Search Book
4. Exit
Enter your choice: 2
Book ID: 1
Title: The Great Gatsby
Author: F. Scott Fitzgerald

Library Management System
1. Add Book
2. List Books
3. Search Book
4. Exit
Enter your choice: 3
Enter the title of the book to search: The Great Gatsby
Book found:
Book ID: 1
Title: The Great Gatsby
Author: F. Scott Fitzgerald
Library Management System
1. Add Book
2. List Books
3. Search Book
4. Exit
Enter your choice: 4

```

