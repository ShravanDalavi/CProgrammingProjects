# Hospital Management System
This is a simple Hospital Management System implemented in C, which allows you to manage patient records. The system can add, display, search, and delete patient records.

## Description
The program defines a structure to store patient details and provides functionalities to add, display, search, and delete patient records. The program uses an array to store the patient records and a counter to keep track of the number of records.

## Features
- Add a new patient record
- Display all patient records
- Search for a patient record by ID
- Delete a patient record by ID
## Required Modules
- Standard C library (<stdio.h>)
- Standard library (<stdlib.h>)
- String library (<string.h>)

## How to Install Required Modules
No special installation is required as this program only uses standard C libraries, which are included in any standard C compiler.

## How to Run the Script
1. Save the code to a file, e.g., `hospital_management.c`.
2. Compile the program using a C compiler:
```bash 
gcc hospital_management.c -o hospital_management
```
3. Run the compiled program:
```bash 
./hospital_management
```

## Output
```bash 
Hospital Management System
1. Add Patient
2. Display Patients
3. Search Patient
4. Delete Patient
5. Exit
Enter your choice: 1
Enter Patient ID: 1
Enter Patient Name: John Doe
Enter Age: 30
Enter Gender: Male
Enter Diagnosis: Flu
Patient added successfully!

Hospital Management System
1. Add Patient
2. Display Patients
3. Search Patient
4. Delete Patient
5. Exit
Enter your choice: 2

------------------- Patient 1 -------------------
Patient ID: 1
Name: John Doe
Age: 30
Gender: Male
Diagnosis: Flu

Hospital Management System
1. Add Patient
2. Display Patients
3. Search Patient
4. Delete Patient
5. Exit
Enter your choice: 3
Enter Patient ID to search: 1
Patient ID: 1
Name: John Doe
Age: 30
Gender: Male
Diagnosis: Flu

Hospital Management System
1. Add Patient
2. Display Patients
3. Search Patient
4. Delete Patient
5. Exit
Enter your choice: 4
Enter Patient ID to delete: 1
Patient with ID 1 deleted successfully.

Hospital Management System
1. Add Patient
2. Display Patients
3. Search Patient
4. Delete Patient
5. Exit
Enter your choice: 2
No records found.
```