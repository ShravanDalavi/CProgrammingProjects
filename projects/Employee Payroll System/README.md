# Employee Payroll System 
This Employee Payroll System allows you to manage employee records, calculate their salaries, and provide functionalities to add, display, and search for employees. It is implemented in C.

## Description
The program defines a structure to store employee details such as ID, name, designation, and salary components. It includes functions to add new employees, display all employee records, search for an employee by ID, and calculate the gross and net salary for each employee based on their basic salary, HRA, DA, and PF.

## Features
- Add a new employee record
- Display all employee records
- Search for an employee record by ID
- Calculate salary components including HRA, DA, PF, gross salary, and net salary
## Required Modules
- Standard C library (`<stdio.h>`)
- Standard library (`<stdlib.h>`)
- String library (`<string.h>`)

## How to Install Required Modules
No special installation is required as this program only uses standard C libraries, which are included in any standard C compiler.

## How to Run the Script
1. Save the code to a file, e.g., employee_payroll.c.
2. Compile the program using a C compiler
```sh
gcc employee_payroll.c -o employee_payroll
```
3. Run the compiled program:
```sh
./employee_payroll
```
## Output
```yaml 
Employee Payroll System
1. Add Employee
2. Display Employees
3. Search Employee
4. Exit
Enter your choice: 1
Enter Employee ID: 101
Enter Employee Name: John Doe
Enter Employee Designation: Manager
Enter Basic Salary: 50000
Employee added successfully!

Employee Payroll System
1. Add Employee
2. Display Employees
3. Search Employee
4. Exit
Enter your choice: 2

------------------- Employee 1 -------------------
Employee ID: 101
Name: John Doe
Designation: Manager
Basic Salary: 50000.00
HRA: 10000.00
DA: 5000.00
PF: 2500.00
Gross Salary: 65000.00
Net Salary: 62500.00

Employee Payroll System
1. Add Employee
2. Display Employees
3. Search Employee
4. Exit
Enter your choice: 3
Enter Employee ID to search: 101

Employee ID: 101
Name: John Doe
Designation: Manager
Basic Salary: 50000.00
HRA: 10000.00
DA: 5000.00
PF: 2500.00
Gross Salary: 65000.00
Net Salary: 62500.00

Employee Payroll System
1. Add Employee
2. Display Employees
3. Search Employee
4. Exit
Enter your choice: 4
```

