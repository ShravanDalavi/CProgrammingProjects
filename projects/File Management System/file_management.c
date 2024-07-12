#include <stdio.h>
#include <stdlib.h>

// Function to create a file and write content to it
void createFile() {
    char filename[100];
    char content[1000];
    printf("Enter the filename to create: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error creating file!\n");
        return;
    }

    printf("Enter content to write in the file: ");
    getchar(); // to consume the newline character left by previous input
    fgets(content, 1000, stdin);
    fprintf(file, "%s", content);
    fclose(file);
    printf("File created and content written successfully.\n");
}

// Function to read content from a file
void readFile() {
    char filename[100];
    char ch;
    printf("Enter the filename to read: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Content of the file:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
    printf("\nFile read successfully.\n");
}

// Function to write content to a file
void writeFile() {
    char filename[100];
    char content[1000];
    printf("Enter the filename to write to: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "a"); // Open in append mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter content to write in the file: ");
    getchar(); // to consume the newline character left by previous input
    fgets(content, 1000, stdin);
    fprintf(file, "%s", content);
    fclose(file);
    printf("Content written to file successfully.\n");
}

// Function to rename a file
void renameFile() {
    char oldName[100], newName[100];
    printf("Enter the current filename: ");
    scanf("%s", oldName);
    printf("Enter the new filename: ");
    scanf("%s", newName);

    if (rename(oldName, newName) == 0) {
        printf("File renamed successfully.\n");
    } else {
        printf("Error renaming file.\n");
    }
}

// Function to delete a file
void deleteFile() {
    char filename[100];
    printf("Enter the filename to delete: ");
    scanf("%s", filename);

    if (remove(filename) == 0) {
        printf("File deleted successfully.\n");
    } else {
        printf("Error deleting file.\n");
    }
}

int main() {
    int choice;
    while (1) {
        printf("\nFile Management System\n");
        printf("1. Create File\n");
        printf("2. Read File\n");
        printf("3. Write to File\n");
        printf("4. Rename File\n");
        printf("5. Delete File\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                createFile();
                break;
            case 2:
                readFile();
                break;
            case 3:
                writeFile();
                break;
            case 4:
                renameFile();
                break;
            case 5:
                deleteFile();
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
