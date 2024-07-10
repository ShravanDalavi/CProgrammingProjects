#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure for employee
struct Employee {
    int id;
    char name[50];
    char designation[50];
    float basic_salary;
    float hra;
    float da;
    float pf;
    float gross_salary;
    float net_salary;
};

// Function prototypes
void addEmployee(struct Employee* employees, int* count);
void displayEmployees(struct Employee* employees, int count);
void searchEmployee(struct Employee* employees, int count);
void calculateSalary(struct Employee* emp);

int main() {
    struct Employee employees[100];
    int count = 0;
    int choice;

    while (1) {
        printf("\nEmployee Payroll System\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee(employees, &count);
                break;
            case 2:
                displayEmployees(employees, count);
                break;
            case 3:
                searchEmployee(employees, count);
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

void addEmployee(struct Employee* employees, int* count) {
    printf("Enter Employee ID: ");
    scanf("%d", &employees[*count].id);
    getchar(); // Consume the newline character left by scanf

    printf("Enter Employee Name: ");
    fgets(employees[*count].name, sizeof(employees[*count].name), stdin);
    employees[*count].name[strcspn(employees[*count].name, "\n")] = 0; // Remove newline character

    printf("Enter Employee Designation: ");
    fgets(employees[*count].designation, sizeof(employees[*count].designation), stdin);
    employees[*count].designation[strcspn(employees[*count].designation, "\n")] = 0; // Remove newline character

    printf("Enter Basic Salary: ");
    scanf("%f", &employees[*count].basic_salary);

    // Calculate salary components
    calculateSalary(&employees[*count]);

    (*count)++;
    printf("Employee added successfully!\n");
}

void calculateSalary(struct Employee* emp) {
    emp->hra = emp->basic_salary * 0.2; // 20% of basic salary
    emp->da = emp->basic_salary * 0.1; // 10% of basic salary
    emp->pf = emp->basic_salary * 0.05; // 5% of basic salary
    emp->gross_salary = emp->basic_salary + emp->hra + emp->da;
    emp->net_salary = emp->gross_salary - emp->pf;
}

void displayEmployees(struct Employee* employees, int count) {
    if (count == 0) {
        printf("No records found.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        printf("\n------------------- Employee %d -------------------\n", i + 1);
        printf("Employee ID: %d\n", employees[i].id);
        printf("Name: %s\n", employees[i].name);
        printf("Designation: %s\n", employees[i].designation);
        printf("Basic Salary: %.2f\n", employees[i].basic_salary);
        printf("HRA: %.2f\n", employees[i].hra);
        printf("DA: %.2f\n", employees[i].da);
        printf("PF: %.2f\n", employees[i].pf);
        printf("Gross Salary: %.2f\n", employees[i].gross_salary);
        printf("Net Salary: %.2f\n", employees[i].net_salary);
    }
}

void searchEmployee(struct Employee* employees, int count) {
    int id;
    printf("Enter Employee ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            printf("\nEmployee ID: %d\n", employees[i].id);
            printf("Name: %s\n", employees[i].name);
            printf("Designation: %s\n", employees[i].designation);
            printf("Basic Salary: %.2f\n", employees[i].basic_salary);
            printf("HRA: %.2f\n", employees[i].hra);
            printf("DA: %.2f\n", employees[i].da);
            printf("PF: %.2f\n", employees[i].pf);
            printf("Gross Salary: %.2f\n", employees[i].gross_salary);
            printf("Net Salary: %.2f\n", employees[i].net_salary);
            return;
        }
    }

    printf("Employee with ID %d not found.\n", id);
}
