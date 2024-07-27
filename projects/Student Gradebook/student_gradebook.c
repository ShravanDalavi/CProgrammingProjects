#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure for student
struct Student {
    int roll_no;
    char name[50];
    float marks[5];
    float average;
    char grade;
};

// Function prototypes
void addStudent(struct Student* students, int* count);
void displayStudents(struct Student* students, int count);
void searchStudent(struct Student* students, int count);
void calculateGrade(struct Student* student);
char determineGrade(float average);

int main() {
    struct Student students[100];
    int count = 0;
    int choice;

    while (1) {
        printf("\nStudent Gradebook System\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                displayStudents(students, count);
                break;
            case 3:
                searchStudent(students, count);
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

void addStudent(struct Student* students, int* count) {
    printf("Enter Roll Number: ");
    scanf("%d", &students[*count].roll_no);
    getchar(); // Consume the newline character left by scanf

    printf("Enter Name: ");
    fgets(students[*count].name, sizeof(students[*count].name), stdin);
    students[*count].name[strcspn(students[*count].name, "\n")] = 0; // Remove newline character

    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &students[*count].marks[i]);
    }

    // Calculate average and grade
    calculateGrade(&students[*count]);

    (*count)++;
    printf("Student added successfully!\n");
}

void calculateGrade(struct Student* student) {
    float total = 0;
    for (int i = 0; i < 5; i++) {
        total += student->marks[i];
    }
    student->average = total / 5;
    student->grade = determineGrade(student->average);
}

char determineGrade(float average) {
    if (average >= 90) return 'A';
    else if (average >= 80) return 'B';
    else if (average >= 70) return 'C';
    else if (average >= 60) return 'D';
    else return 'F';
}

void displayStudents(struct Student* students, int count) {
    if (count == 0) {
        printf("No records found.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        printf("\n------------------- Student %d -------------------\n", i + 1);
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Name: %s\n", students[i].name);
        printf("Marks: ");
        for (int j = 0; j < 5; j++) {
            printf("%.2f ", students[i].marks[j]);
        }
        printf("\nAverage: %.2f\n", students[i].average);
        printf("Grade: %c\n", students[i].grade);
    }
}

void searchStudent(struct Student* students, int count) {
    int roll_no;
    printf("Enter Roll Number to search: ");
    scanf("%d", &roll_no);

    for (int i = 0; i < count; i++) {
        if (students[i].roll_no == roll_no) {
            printf("\nRoll Number: %d\n", students[i].roll_no);
            printf("Name: %s\n", students[i].name);
            printf("Marks: ");
            for (int j = 0; j < 5; j++) {
                printf("%.2f ", students[i].marks[j]);
            }
            printf("\nAverage: %.2f\n", students[i].average);
            printf("Grade: %c\n", students[i].grade);
            return;
        }
    }

    printf("Student with Roll Number %d not found.\n", roll_no);
}
