#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_TITLE_LENGTH 100
#define MAX_AUTHOR_LENGTH 100
#define MAX_CATEGORY_LENGTH 50

// Define the structure to store a book's details
struct Book {
    int id;
    char title[MAX_TITLE_LENGTH];
    char author[MAX_AUTHOR_LENGTH];
    char category[MAX_CATEGORY_LENGTH];
};

// Declare an array to store the books
struct Book books[MAX_BOOKS];
int bookCount = 0;

// Function to add a new book
void addBook() {
    if (bookCount >= MAX_BOOKS) {
        printf("Cannot add more books. The catalog is full.\n");
        return;
    }
    struct Book newBook;
    printf("Enter Book ID: ");
    scanf("%d", &newBook.id);
    printf("Enter Book Title: ");
    getchar(); // to consume the newline character left by previous input
    fgets(newBook.title, MAX_TITLE_LENGTH, stdin);
    newBook.title[strcspn(newBook.title, "\n")] = 0; // Remove newline character
    printf("Enter Book Author: ");
    fgets(newBook.author, MAX_AUTHOR_LENGTH, stdin);
    newBook.author[strcspn(newBook.author, "\n")] = 0; // Remove newline character
    printf("Enter Book Category: ");
    fgets(newBook.category, MAX_CATEGORY_LENGTH, stdin);
    newBook.category[strcspn(newBook.category, "\n")] = 0; // Remove newline character
    books[bookCount++] = newBook;
    printf("Book added successfully!\n");
}

// Function to display all books
void displayBooks() {
    if (bookCount == 0) {
        printf("No books to display.\n");
        return;
    }
    printf("ID\tTitle\t\tAuthor\t\tCategory\n");
    printf("---------------------------------------------------------\n");
    for (int i = 0; i < bookCount; i++) {
        printf("%d\t%s\t\t%s\t\t%s\n", books[i].id, books[i].title, books[i].author, books[i].category);
    }
}

// Function to search for a book by ID
void searchBook() {
    int id;
    printf("Enter Book ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < bookCount; i++) {
        if (books[i].id == id) {
            printf("Book found:\n");
            printf("ID: %d\n", books[i].id);
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Category: %s\n", books[i].category);
            return;
        }
    }
    printf("Book with ID %d not found.\n", id);
}

// Function to delete a book by ID
void deleteBook() {
    int id;
    printf("Enter Book ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < bookCount; i++) {
        if (books[i].id == id) {
            for (int j = i; j < bookCount - 1; j++) {
                books[j] = books[j + 1];
            }
            bookCount--;
            printf("Book with ID %d deleted successfully.\n", id);
            return;
        }
    }
    printf("Book with ID %d not found.\n", id);
}

int main() {
    int choice;
    while (1) {
        printf("\nLibrary Catalog System\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Delete Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                deleteBook();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
