# Attendance Monitoring System
A simple C program to manage and monitor attendance records. The application allows you to add, view, search, and delete attendance records for students or employees.

## Description
This program is a basic implementation of an attendance monitoring system. It supports the following functionalities:

- Add a new attendance record
- Display all attendance records
- Search for a specific record by ID
- Delete an attendance record

## Features
- Add Record: Allows you to add a new attendance record to the list.
- Display Records: Displays all attendance records currently in the system.
- Search Record: Search for an attendance record by ID.
- Delete Record: Delete an attendance record by ID.

## Required Modules
The program uses the standard C library modules:

- `stdio.h` for input/output functions
- `stdlib.h` for memory allocation
- `string.h` for string manipulation

## How to Install Required Modules
No additional modules need to be installed. Ensure you have a C compiler like `gcc` installed on your system.

## How to Run the Script
Follow these steps to compile and run the program:

1. Save the code: Save the provided code to a file named `attendance_monitoring.c`.

2. Open a terminal or command prompt: Navigate to the directory where you saved `attendance_monitoring.c`.

3. Compile the code: Use a C compiler like gcc to compile the program. Run the following command:
```bash 
gcc attendance_monitoring.c -o attendance_monitoring
```
4. Run the compiled program: After successful compilation, run the program using:
```bash 
./attendance_monitoring
```
5. Follow the on-screen instructions: The program will display a menu with options to add records, display records, search records, delete records, or exit the program. Enter the corresponding number to choose an option.

## Example
```bash
Attendance Monitoring System
1. Add Record
2. Display Records
3. Search Record
4. Delete Record
5. Exit
Enter your choice: 1
Enter ID: 101
Enter Name: John
Enter 1 for Present or 0 for Absent: 1
Record added successfully!

Attendance Monitoring System
1. Add Record
2. Display Records
3. Search Record
4. Delete Record
5. Exit
Enter your choice: 2
ID      Name            Status
-----------------------------
101     John            Present
```