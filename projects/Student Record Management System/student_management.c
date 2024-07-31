#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the maximum number of students
#define MAX_STUDENTS 100

// Define the structure to store student details
struct Student {
    int id;
    char name[50];
    float grade;
};

// Declare an array to store the students
struct Student students[MAX_STUDENTS];
int studentCount = 0;

// Function to add a new student
void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        printf("Cannot add more students. The list is full.\n");
        return;
    }
    struct Student newStudent;
    printf("Enter Student ID: ");
    scanf("%d", &newStudent.id);
    printf("Enter Student Name: ");
    scanf("%s", newStudent.name);
    printf("Enter Student Grade: ");
    scanf("%f", &newStudent.grade);
    students[studentCount++] = newStudent;
    printf("Student added successfully!\n");
}

// Function to display all students
void displayStudents() {
    if (studentCount == 0) {
        printf("No students to display.\n");
        return;
    }
    printf("ID\tName\t\tGrade\n");
    printf("---------------------------------\n");
    for (int i = 0; i < studentCount; i++) {
        printf("%d\t%s\t\t%.2f\n", students[i].id, students[i].name, students[i].grade);
    }
}

// Function to search for a student by ID
void searchStudent() {
    int id;
    printf("Enter Student ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == id) {
            printf("Student found:\n");
            printf("ID: %d\n", students[i].id);
            printf("Name: %s\n", students[i].name);
            printf("Grade: %.2f\n", students[i].grade);
            return;
        }
    }
    printf("Student with ID %d not found.\n", id);
}

// Function to delete a student by ID
void deleteStudent() {
    int id;
    printf("Enter Student ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == id) {
            for (int j = i; j < studentCount - 1; j++) {
                students[j] = students[j + 1];
            }
            studentCount--;
            printf("Student with ID %d deleted successfully.\n", id);
            return;
        }
    }
    printf("Student with ID %d not found.\n", id);
}

int main() {
    int choice;
    while (1) {
        printf("\nStudent Record Management System\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                deleteStudent();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
