# Fitness Tracker
A simple C program to manage and track fitness activities. The application allows you to add, view, search, and delete fitness activity records.

## Description
This program is a basic implementation of a fitness tracker system. It supports the following functionalities:

- Add a new fitness activity
- Display all fitness activities
- Search for a specific activity by ID
- Delete a fitness activity

## Features
- Add Activity: Allows you to add a new fitness activity to the list.
- Display Activities: Displays all fitness activities currently in the system.
- Search Activity: Search for a fitness activity by ID.
- Delete Activity: Delete a fitness activity by ID.

## Required Modules
The program uses the standard C library modules:

- `stdio.h` for input/output functions
- `stdlib.h` for memory allocation
- `string.h` for string manipulation

## How to Install Required Modules
No additional modules need to be installed. Ensure you have a C compiler like `gcc` installed on your system.

## How to Run the Script
Follow these steps to compile and run the program:

1. Save the code: Save the provided code to a file named `fitness_tracker.c`.

2. Open a terminal or command prompt: Navigate to the directory where you saved `fitness_tracker.c`.

3. Compile the code: Use a C compiler like `gcc` to compile the program. Run the following command:
```bash 
gcc fitness_tracker.c -o fitness_tracker
```
4. Run the compiled program: After successful compilation, run the program using:
```bash 
./fitness_tracker
```
5. Follow the on-screen instructions: The program will display a menu with options to add activities, display activities, search activities, delete activities, or exit the program. Enter the corresponding number to choose an option.

## Example
```bash 
Fitness Tracker System
1. Add Activity
2. Display Activities
3. Search Activity
4. Delete Activity
5. Exit
Enter your choice: 1
Enter Activity ID: 101
Enter Activity Name: Running
Enter Duration (hours): 1.5
Enter Calories Burned: 300
Activity added successfully!

Fitness Tracker System
1. Add Activity
2. Display Activities
3. Search Activity
4. Delete Activity
5. Exit
Enter your choice: 2
ID      Name            Duration    Calories Burned
--------------------------------------------------
101     Running         1.50        300
```