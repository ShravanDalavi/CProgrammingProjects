#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to hold candidate information
typedef struct {
    char name[50];
    int votes;
} Candidate;

Candidate candidates[5];  // Array to store candidates
int numCandidates = 0;    // Number of candidates

// Function to initialize candidates
void initializeCandidates() {
    printf("Enter the number of candidates: ");
    scanf("%d", &numCandidates);
    getchar();  // Consume newline character

    for (int i = 0; i < numCandidates; i++) {
        printf("Enter name for candidate %d: ", i + 1);
        fgets(candidates[i].name, 50, stdin);
        candidates[i].name[strcspn(candidates[i].name, "\n")] = 0;  // Remove newline
        candidates[i].votes = 0;
    }
}

// Function to display candidates
void displayCandidates() {
    printf("Candidates:\n");
    for (int i = 0; i < numCandidates; i++) {
        printf("%d. %s\n", i + 1, candidates[i].name);
    }
}

// Function to cast a vote
void castVote() {
    int vote;
    displayCandidates();
    printf("Enter candidate number to vote for: ");
    scanf("%d", &vote);

    if (vote > 0 && vote <= numCandidates) {
        candidates[vote - 1].votes++;
        printf("Vote casted successfully!\n");
    } else {
        printf("Invalid candidate number!\n");
    }
}

// Function to display the results
void displayResults() {
    printf("Results:\n");
    for (int i = 0; i < numCandidates; i++) {
        printf("%s: %d votes\n", candidates[i].name, candidates[i].votes);
    }
}

// Main function
int main() {
    int choice;
    initializeCandidates();

    while (1) {
        printf("\nVoting System Menu:\n");
        printf("1. Cast Vote\n");
        printf("2. Display Results\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                castVote();
                break;
            case 2:
                displayResults();
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
