#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASKS 100
#define MAX_TASK_NAME_LENGTH 100

// Define the structure to store task details
struct Task {
    char name[MAX_TASK_NAME_LENGTH];
    int isComplete;
};

// Declare an array to store the tasks
struct Task tasks[MAX_TASKS];
int taskCount = 0;

// Function to add a new task
void addTask() {
    if (taskCount >= MAX_TASKS) {
        printf("Cannot add more tasks. The task list is full.\n");
        return;
    }
    struct Task newTask;
    printf("Enter task name: ");
    getchar(); // to consume the newline character left by previous input
    fgets(newTask.name, MAX_TASK_NAME_LENGTH, stdin);
    newTask.name[strcspn(newTask.name, "\n")] = 0; // Remove newline character
    newTask.isComplete = 0;
    tasks[taskCount++] = newTask;
    printf("Task added successfully!\n");
}

// Function to display all tasks
void displayTasks() {
    if (taskCount == 0) {
        printf("No tasks to display.\n");
        return;
    }
    printf("ID\tTask\t\tStatus\n");
    printf("-------------------------------------------------\n");
    for (int i = 0; i < taskCount; i++) {
        printf("%d\t%s\t\t%s\n", i + 1, tasks[i].name, tasks[i].isComplete ? "Complete" : "Incomplete");
    }
}

// Function to mark a task as complete
void completeTask() {
    int taskId;
    printf("Enter task ID to mark as complete: ");
    scanf("%d", &taskId);
    if (taskId < 1 || taskId > taskCount) {
        printf("Invalid task ID.\n");
        return;
    }
    tasks[taskId - 1].isComplete = 1;
    printf("Task marked as complete.\n");
}

// Function to delete a task
void deleteTask() {
    int taskId;
    printf("Enter task ID to delete: ");
    scanf("%d", &taskId);
    if (taskId < 1 || taskId > taskCount) {
        printf("Invalid task ID.\n");
        return;
    }
    for (int i = taskId - 1; i < taskCount - 1; i++) {
        tasks[i] = tasks[i + 1];
    }
    taskCount--;
    printf("Task deleted successfully.\n");
}

int main() {
    int choice;
    while (1) {
        printf("\nTodo List Application\n");
        printf("1. Add Task\n");
        printf("2. Display Tasks\n");
        printf("3. Mark Task as Complete\n");
        printf("4. Delete Task\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                displayTasks();
                break;
            case 3:
                completeTask();
                break;
            case 4:
                deleteTask();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
