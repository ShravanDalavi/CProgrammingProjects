#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure for patient
struct Patient {
    int id;
    char name[50];
    int age;
    char gender[10];
    char diagnosis[100];
};

// Function prototypes
void addPatient(struct Patient* patients, int* count);
void displayPatients(struct Patient* patients, int count);
void searchPatient(struct Patient* patients, int count);
void deletePatient(struct Patient* patients, int* count);

int main() {
    struct Patient patients[100];
    int count = 0;
    int choice;

    while (1) {
        printf("\nHospital Management System\n");
        printf("1. Add Patient\n");
        printf("2. Display Patients\n");
        printf("3. Search Patient\n");
        printf("4. Delete Patient\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addPatient(patients, &count);
                break;
            case 2:
                displayPatients(patients, count);
                break;
            case 3:
                searchPatient(patients, count);
                break;
            case 4:
                deletePatient(patients, &count);
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

void addPatient(struct Patient* patients, int* count) {
    printf("Enter Patient ID: ");
    scanf("%d", &patients[*count].id);
    getchar(); // Consume the newline character left by scanf

    printf("Enter Patient Name: ");
    fgets(patients[*count].name, sizeof(patients[*count].name), stdin);
    patients[*count].name[strcspn(patients[*count].name, "\n")] = 0; // Remove newline character

    printf("Enter Age: ");
    scanf("%d", &patients[*count].age);
    getchar(); // Consume the newline character left by scanf

    printf("Enter Gender: ");
    fgets(patients[*count].gender, sizeof(patients[*count].gender), stdin);
    patients[*count].gender[strcspn(patients[*count].gender, "\n")] = 0; // Remove newline character

    printf("Enter Diagnosis: ");
    fgets(patients[*count].diagnosis, sizeof(patients[*count].diagnosis), stdin);
    patients[*count].diagnosis[strcspn(patients[*count].diagnosis, "\n")] = 0; // Remove newline character

    (*count)++;
    printf("Patient added successfully!\n");
}

void displayPatients(struct Patient* patients, int count) {
    if (count == 0) {
        printf("No records found.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        printf("\n------------------- Patient %d -------------------\n", i + 1);
        printf("Patient ID: %d\n", patients[i].id);
        printf("Name: %s\n", patients[i].name);
        printf("Age: %d\n", patients[i].age);
        printf("Gender: %s\n", patients[i].gender);
        printf("Diagnosis: %s\n", patients[i].diagnosis);
    }
}

void searchPatient(struct Patient* patients, int count) {
    int id;
    printf("Enter Patient ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (patients[i].id == id) {
            printf("\nPatient ID: %d\n", patients[i].id);
            printf("Name: %s\n", patients[i].name);
            printf("Age: %d\n", patients[i].age);
            printf("Gender: %s\n", patients[i].gender);
            printf("Diagnosis: %s\n", patients[i].diagnosis);
            return;
        }
    }

    printf("Patient with ID %d not found.\n", id);
}

void deletePatient(struct Patient* patients, int* count) {
    int id;
    printf("Enter Patient ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < *count; i++) {
        if (patients[i].id == id) {
            for (int j = i; j < *count - 1; j++) {
                patients[j] = patients[j + 1];
            }
            (*count)--;
            printf("Patient with ID %d deleted successfully.\n", id);
            return;
        }
    }

    printf("Patient with ID %d not found.\n", id);
}
