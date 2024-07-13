#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the maximum number of activities and length of activity names
#define MAX_ACTIVITIES 100
#define MAX_NAME_LEN 50

// Define the structure to store fitness activity details
struct FitnessActivity {
    int id;
    char name[MAX_NAME_LEN];
    float duration; // Duration in hours
    int caloriesBurned;
};

// Declare an array to store the fitness activities
struct FitnessActivity activities[MAX_ACTIVITIES];
int activityCount = 0;

// Function to add a new activity
void addActivity() {
    if (activityCount >= MAX_ACTIVITIES) {
        printf("Cannot add more activities. The list is full.\n");
        return;
    }
    struct FitnessActivity newActivity;
    printf("Enter Activity ID: ");
    scanf("%d", &newActivity.id);
    printf("Enter Activity Name: ");
    scanf("%s", newActivity.name);
    printf("Enter Duration (hours): ");
    scanf("%f", &newActivity.duration);
    printf("Enter Calories Burned: ");
    scanf("%d", &newActivity.caloriesBurned);
    activities[activityCount++] = newActivity;
    printf("Activity added successfully!\n");
}

// Function to display all activities
void displayActivities() {
    if (activityCount == 0) {
        printf("No activities to display.\n");
        return;
    }
    printf("ID\tName\t\tDuration\tCalories Burned\n");
    printf("--------------------------------------------------\n");
    for (int i = 0; i < activityCount; i++) {
        printf("%d\t%s\t\t%.2f\t\t%d\n", activities[i].id, activities[i].name, activities[i].duration, activities[i].caloriesBurned);
    }
}

// Function to search for an activity by ID
void searchActivity() {
    int id;
    printf("Enter Activity ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < activityCount; i++) {
        if (activities[i].id == id) {
            printf("Activity found:\n");
            printf("ID: %d\n", activities[i].id);
            printf("Name: %s\n", activities[i].name);
            printf("Duration: %.2f hours\n", activities[i].duration);
            printf("Calories Burned: %d\n", activities[i].caloriesBurned);
            return;
        }
    }
    printf("Activity with ID %d not found.\n", id);
}

// Function to delete an activity by ID
void deleteActivity() {
    int id;
    printf("Enter Activity ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < activityCount; i++) {
        if (activities[i].id == id) {
            for (int j = i; j < activityCount - 1; j++) {
                activities[j] = activities[j + 1];
            }
            activityCount--;
            printf("Activity with ID %d deleted successfully.\n", id);
            return;
        }
    }
    printf("Activity with ID %d not found.\n", id);
}

int main() {
    int choice;
    while (1) {
        printf("\nFitness Tracker System\n");
        printf("1. Add Activity\n");
        printf("2. Display Activities\n");
        printf("3. Search Activity\n");
        printf("4. Delete Activity\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addActivity();
                break;
            case 2:
                displayActivities();
                break;
            case 3:
                searchActivity();
                break;
            case 4:
                deleteActivity();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
