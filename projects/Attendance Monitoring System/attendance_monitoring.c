#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the maximum number of records and length of names
#define MAX_RECORDS 100
#define MAX_NAME_LEN 50

// Define the structure to store attendance records
struct AttendanceRecord {
    int id;
    char name[MAX_NAME_LEN];
    int isPresent;
};

// Declare an array to store the attendance records
struct AttendanceRecord records[MAX_RECORDS];
int recordCount = 0;

// Function to add a new record
void addRecord() {
    if (recordCount >= MAX_RECORDS) {
        printf("Cannot add more records. The list is full.\n");
        return;
    }
    struct AttendanceRecord newRecord;
    printf("Enter ID: ");
    scanf("%d", &newRecord.id);
    printf("Enter Name: ");
    scanf("%s", newRecord.name);
    printf("Enter 1 for Present or 0 for Absent: ");
    scanf("%d", &newRecord.isPresent);
    records[recordCount++] = newRecord;
    printf("Record added successfully!\n");
}

// Function to display all records
void displayRecords() {
    if (recordCount == 0) {
        printf("No records to display.\n");
        return;
    }
    printf("ID\tName\t\tStatus\n");
    printf("----------------------------\n");
    for (int i = 0; i < recordCount; i++) {
        printf("%d\t%s\t\t%s\n", records[i].id, records[i].name, records[i].isPresent ? "Present" : "Absent");
    }
}

// Function to search for a record by ID
void searchRecord() {
    int id;
    printf("Enter ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < recordCount; i++) {
        if (records[i].id == id) {
            printf("Record found:\n");
            printf("ID: %d\n", records[i].id);
            printf("Name: %s\n", records[i].name);
            printf("Status: %s\n", records[i].isPresent ? "Present" : "Absent");
            return;
        }
    }
    printf("Record with ID %d not found.\n", id);
}

// Function to delete a record by ID
void deleteRecord() {
    int id;
    printf("Enter ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < recordCount; i++) {
        if (records[i].id == id) {
            for (int j = i; j < recordCount - 1; j++) {
                records[j] = records[j + 1];
            }
            recordCount--;
            printf("Record with ID %d deleted successfully.\n", id);
            return;
        }
    }
    printf("Record with ID %d not found.\n", id);
}

int main() {
    int choice;
    while (1) {
        printf("\nAttendance Monitoring System\n");
        printf("1. Add Record\n");
        printf("2. Display Records\n");
        printf("3. Search Record\n");
        printf("4. Delete Record\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addRecord();
                break;
            case 2:
                displayRecords();
                break;
            case 3:
                searchRecord();
                break;
            case 4:
                deleteRecord();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
