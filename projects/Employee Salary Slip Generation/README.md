# Employee Salary Slip Generation Program
This program gathers employee details, calculates their salary components (HRA, DA, PF), and prints the salary slip in a formatted manner. It is implemented in C.

## Description
The program defines a structure to store employee details such as ID, name, designation, and salary components. It includes functions to calculate the salary components and print the salary slip.

## Features
- Input employee details
- Calculate salary components (HRA, DA, PF)
- Calculate gross and net salary
- Print the formatted salary slip
## Required Modules
- Standard C library (`<stdio.h>`)
- String library (`<string.h>`)
## How to Install Required Modules
No special installation is required as this program only uses standard C libraries, which are included in any standard C compiler.

## How to Run the Script
1. Save the code to a file, e.g., salary_slip.c.
2. Compile the program using a C compiler
```sh
gcc salary_slip.c -o salary_slip
```
3. Run the compiled program:
```sh
./salary_slip
```

## Output
```yaml
Enter Employee ID: 101
Enter Employee Name: John Doe
Enter Employee Designation: Software Engineer
Enter Basic Salary: 50000

------------------- Salary Slip -------------------
Employee ID: 101
Name: John Doe
Designation: Software Engineer
---------------------------------------------------
Basic Salary: 50000.00
HRA: 10000.00
DA: 5000.00
PF: 2500.00
---------------------------------------------------
Gross Salary: 65000.00
Net Salary: 62500.00
---------------------------------------------------
```

