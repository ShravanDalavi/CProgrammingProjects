# Student Record Management System
A simple C program to manage student records. The application allows you to add, view, search, and delete student records.

## Description
This program is a basic implementation of a student record management system. It supports the following functionalities:

- Add a new student record
- Display all student records
- Search for a student by ID
- Delete a student by ID

## Required Modules
The program uses the standard C library modules:

- `stdio.h` for input/output functions
- `stdlib.h` for memory allocation
- `string.h` for string manipulation

## How to Install Required Modules
No additional modules need to be installed. Ensure you have a C compiler like gcc installed on your system.

## How to Run the Script
Follow these steps to compile and run the program:

1. Save the code: Save the provided code to a file named `student_management.c`.

2. Open a terminal or command prompt: Navigate to the directory where you saved `student_management.c`.

3. Compile the code: Use a C compiler like `gcc` to compile the program. Run the following command:
```bash 
gcc student_management.c -o student_management
```
4. Run the compiled program: After successful compilation, run the program using:
```bash 
./student_management
```
5. Follow the on-screen instructions: The program will display a menu with options to add, display, search, delete students, or exit the program. Enter the corresponding number to choose an option.

## Output
```yaml
Student Record Management System
1. Add Student
2. Display Students
3. Search Student
4. Delete Student
5. Exit
Enter your choice: 1
Enter Student ID: 123
Enter Student Name: JohnDoe
Enter Student Grade: 85.5
Student added successfully!
```
