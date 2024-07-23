#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_QUESTIONS 100
#define MAX_OPTIONS 4
#define MAX_OPTION_LENGTH 50
#define MAX_QUESTION_LENGTH 100

// Define the structure to store a quiz question
struct Question {
    char questionText[MAX_QUESTION_LENGTH];
    char options[MAX_OPTIONS][MAX_OPTION_LENGTH];
    int correctOption;
};

// Declare an array to store the questions
struct Question questions[MAX_QUESTIONS];
int questionCount = 0;

// Function to add a new question
void addQuestion() {
    if (questionCount >= MAX_QUESTIONS) {
        printf("Cannot add more questions. The list is full.\n");
        return;
    }
    struct Question newQuestion;
    printf("Enter the question text: ");
    getchar(); // to consume the newline character left by previous input
    fgets(newQuestion.questionText, MAX_QUESTION_LENGTH, stdin);
    newQuestion.questionText[strcspn(newQuestion.questionText, "\n")] = 0; // Remove newline character
    for (int i = 0; i < MAX_OPTIONS; i++) {
        printf("Enter option %d: ", i + 1);
        fgets(newQuestion.options[i], MAX_OPTION_LENGTH, stdin);
        newQuestion.options[i][strcspn(newQuestion.options[i], "\n")] = 0; // Remove newline character
    }
    printf("Enter the correct option number (1-4): ");
    scanf("%d", &newQuestion.correctOption);
    newQuestion.correctOption--; // Convert to zero-based index
    questions[questionCount++] = newQuestion;
    printf("Question added successfully!\n");
}

// Function to display all questions
void displayQuestions() {
    if (questionCount == 0) {
        printf("No questions to display.\n");
        return;
    }
    for (int i = 0; i < questionCount; i++) {
        printf("Question %d: %s\n", i + 1, questions[i].questionText);
        for (int j = 0; j < MAX_OPTIONS; j++) {
            printf("  Option %d: %s\n", j + 1, questions[i].options[j]);
        }
        printf("  Correct option: %d\n", questions[i].correctOption + 1);
    }
}

// Function to conduct the quiz
void conductQuiz() {
    if (questionCount == 0) {
        printf("No questions available for the quiz.\n");
        return;
    }
    int score = 0;
    int answer;
    for (int i = 0; i < questionCount; i++) {
        printf("Question %d: %s\n", i + 1, questions[i].questionText);
        for (int j = 0; j < MAX_OPTIONS; j++) {
            printf("  %d: %s\n", j + 1, questions[i].options[j]);
        }
        printf("Enter your answer (1-4): ");
        scanf("%d", &answer);
        if (answer - 1 == questions[i].correctOption) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong. The correct answer is %d: %s\n", questions[i].correctOption + 1, questions[i].options[questions[i].correctOption]);
        }
    }
    printf("You scored %d out of %d.\n", score, questionCount);
}

int main() {
    int choice;
    while (1) {
        printf("\nOnline Quiz Application\n");
        printf("1. Add Question\n");
        printf("2. Display Questions\n");
        printf("3. Conduct Quiz\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addQuestion();
                break;
            case 2:
                displayQuestions();
                break;
            case 3:
                conductQuiz();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
