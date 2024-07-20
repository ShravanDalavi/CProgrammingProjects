#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100
#define TITLE_LENGTH 50
#define AUTHOR_LENGTH 50

typedef struct {
    int id;
    char title[TITLE_LENGTH];
    char author[AUTHOR_LENGTH];
} Book;

Book library[MAX_BOOKS];
int bookCount = 0;

void addBook() {
    if (bookCount >= MAX_BOOKS) {
        printf("Library is full. Cannot add more books.\n");
        return;
    }
    
    printf("Enter book ID: ");
    scanf("%d", &library[bookCount].id);
    getchar(); // To consume the newline character left by scanf
    
    printf("Enter book title: ");
    fgets(library[bookCount].title, TITLE_LENGTH, stdin);
    strtok(library[bookCount].title, "\n"); // Remove newline character from the end
    
    printf("Enter book author: ");
    fgets(library[bookCount].author, AUTHOR_LENGTH, stdin);
    strtok(library[bookCount].author, "\n"); // Remove newline character from the end
    
    bookCount++;
    printf("Book added successfully.\n");
}

void listBooks() {
    if (bookCount == 0) {
        printf("No books in the library.\n");
        return;
    }
    
    for (int i = 0; i < bookCount; i++) {
        printf("Book ID: %d\n", library[i].id);
        printf("Title: %s\n", library[i].title);
        printf("Author: %s\n", library[i].author);
        printf("\n");
    }
}

void searchBook() {
    char title[TITLE_LENGTH];
    
    printf("Enter the title of the book to search: ");
    getchar(); // To consume the newline character left by previous input
    fgets(title, TITLE_LENGTH, stdin);
    strtok(title, "\n"); // Remove newline character from the end
    
    for (int i = 0; i < bookCount; i++) {
        if (strcmp(library[i].title, title) == 0) {
            printf("Book found:\n");
            printf("Book ID: %d\n", library[i].id);
            printf("Title: %s\n", library[i].title);
            printf("Author: %s\n", library[i].author);
            return;
        }
    }
    printf("Book not found.\n");
}

int main() {
    int choice;
    
    while (1) {
        printf("Library Management System\n");
        printf("1. Add Book\n");
        printf("2. List Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                listBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    
    return 0;
}
