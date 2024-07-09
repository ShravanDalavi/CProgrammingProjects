#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 100
#define MAX_WORD_LENGTH 50
#define MAX_DEFINITION_LENGTH 200

// Define the structure to store word details
struct DictionaryEntry {
    char word[MAX_WORD_LENGTH];
    char definition[MAX_DEFINITION_LENGTH];
};

// Declare an array to store the dictionary entries
struct DictionaryEntry dictionary[MAX_WORDS];
int wordCount = 0;

// Function to add a new word to the dictionary
void addWord() {
    if (wordCount >= MAX_WORDS) {
        printf("Cannot add more words. The dictionary is full.\n");
        return;
    }
    struct DictionaryEntry newEntry;
    printf("Enter word: ");
    getchar(); // to consume the newline character left by previous input
    fgets(newEntry.word, MAX_WORD_LENGTH, stdin);
    newEntry.word[strcspn(newEntry.word, "\n")] = 0; // Remove newline character
    printf("Enter definition: ");
    fgets(newEntry.definition, MAX_DEFINITION_LENGTH, stdin);
    newEntry.definition[strcspn(newEntry.definition, "\n")] = 0; // Remove newline character
    dictionary[wordCount++] = newEntry;
    printf("Word added successfully!\n");
}

// Function to display all words in the dictionary
void displayWords() {
    if (wordCount == 0) {
        printf("No words to display.\n");
        return;
    }
    printf("Word\t\tDefinition\n");
    printf("---------------------------------------------------\n");
    for (int i = 0; i < wordCount; i++) {
        printf("%s\t\t%s\n", dictionary[i].word, dictionary[i].definition);
    }
}

// Function to search for a word in the dictionary
void searchWord() {
    char searchWord[MAX_WORD_LENGTH];
    printf("Enter word to search: ");
    getchar(); // to consume the newline character left by previous input
    fgets(searchWord, MAX_WORD_LENGTH, stdin);
    searchWord[strcspn(searchWord, "\n")] = 0; // Remove newline character
    for (int i = 0; i < wordCount; i++) {
        if (strcmp(dictionary[i].word, searchWord) == 0) {
            printf("Definition of %s: %s\n", searchWord, dictionary[i].definition);
            return;
        }
    }
    printf("Word not found in the dictionary.\n");
}

// Function to delete a word from the dictionary
void deleteWord() {
    char deleteWord[MAX_WORD_LENGTH];
    printf("Enter word to delete: ");
    getchar(); // to consume the newline character left by previous input
    fgets(deleteWord, MAX_WORD_LENGTH, stdin);
    deleteWord[strcspn(deleteWord, "\n")] = 0; // Remove newline character
    for (int i = 0; i < wordCount; i++) {
        if (strcmp(dictionary[i].word, deleteWord) == 0) {
            for (int j = i; j < wordCount - 1; j++) {
                dictionary[j] = dictionary[j + 1];
            }
            wordCount--;
            printf("Word '%s' deleted successfully.\n", deleteWord);
            return;
        }
    }
    printf("Word not found in the dictionary.\n");
}

int main() {
    int choice;
    while (1) {
        printf("\nDictionary Application\n");
        printf("1. Add Word\n");
        printf("2. Display Words\n");
        printf("3. Search Word\n");
        printf("4. Delete Word\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addWord();
                break;
            case 2:
                displayWords();
                break;
            case 3:
                searchWord();
                break;
            case 4:
                deleteWord();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
