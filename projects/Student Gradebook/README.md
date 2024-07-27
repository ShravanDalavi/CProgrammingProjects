# Student Gradebook System
This is a simple Student Gradebook System implemented in C, which allows you to manage student records. The system can add, display, search, and calculate the average grade for students based on their marks.

## Description
The program defines a structure to store student details, including roll number, name, marks, average, and grade. It provides functionalities to add a new student, display all students, search for a student by roll number, and calculate the average and grade for each student based on their marks.

## Features
- Add a new student record
- Display all student records
- Search for a student record by roll number
- Calculate and assign grades based on average marks
## Required Modules
- Standard C library (`<stdio.h>`)
- Standard library (`<stdlib.h>`)
- String library (`<string.h>`)
## How to Install Required Modules
No special installation is required as this program only uses standard C libraries, which are included in any standard C compiler.

## How to Run the Script
1. Save the code to a file, e.g., `student_gradebook.c`.
2. Compile the program using a C compiler:
```sh
gcc student_gradebook.c -o student_gradebook
```
3. Run the compiled program
```sh 
./student_gradebook
```
## Output
```yaml
Student Gradebook System
1. Add Student
2. Display Students
3. Search Student
4. Exit
Enter your choice: 1
Enter Roll Number: 1
Enter Name: Alice
Enter marks for 5 subjects:
Subject 1: 85
Subject 2: 90
Subject 3: 78
Subject 4: 88
Subject 5: 92
Student added successfully!

Student Gradebook System
1. Add Student
2. Display Students
3. Search Student
4. Exit
Enter your choice: 2

------------------- Student 1 -------------------
Roll Number: 1
Name: Alice
Marks: 85.00 90.00 78.00 88.00 92.00 
Average: 86.60
Grade: B

Student Gradebook System
1. Add Student
2. Display Students
3. Search Student
4. Exit
Enter your choice: 3
Enter Roll Number to search: 1

Roll Number: 1
Name: Alice
Marks: 85.00 90.00 78.00 88.00 92.00 
Average: 86.60
Grade: B

Student Gradebook System
1. Add Student
2. Display Students
3. Search Student
4. Exit
Enter your choice: 4
```
