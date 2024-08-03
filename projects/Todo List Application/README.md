# To-Do List Application

## Description

This project implements a basic to-do list application in C that allows users to manage a list of tasks. The application provides a text-based menu interface for user interaction, enabling users to add tasks, display all tasks, mark tasks as complete, and delete tasks.

## Features

- **Add a Task:** Allows the user to add a new task to the to-do list.
- **Display Tasks:** Displays all the tasks currently stored in the to-do list along with their status (complete or incomplete).
- **Mark Task as Complete:** Allows the user to mark a task as complete.
- **Delete Task:** Allows the user to delete a task from the to-do list.
- **Exit:** Exits the program.

## Required Modules

- Standard I/O library (`stdio.h`)
- Standard library (`stdlib.h`)
- String library (`string.h`)

These libraries are typically included by default with most C compilers.

## How to Install Required Modules

No additional modules need to be installed. Ensure you have a C compiler (such as `gcc`) installed on your system.

## How to Run the Script

1. **Clone the Repository:**

```sh
   git clone https://github.com/yourusername/todo-list-application.git
   cd todo-list-application
```
1. Compile the Program:
Use the `gcc` compiler to compile the program:
```bash 
gcc -o todo todo.c
```
2. Run the Program:
Execute the compiled program:
```bash 
./todo
```
4. Follow the On-Screen Instructions:
The program will display a menu with the available operations. Enter the corresponding number to perform an operation.
```bash
Todo List Application
1. Add Task
2. Display Tasks
3. Mark Task as Complete
4. Delete Task
5. Exit
Enter your choice: 
```

## Output
```yaml
Todo List Application
1. Add Task
2. Display Tasks
3. Mark Task as Complete
4. Delete Task
5. Exit
Enter your choice: 1
Enter task name: Buy groceries
Task added successfully!

Todo List Application
1. Add Task
2. Display Tasks
3. Mark Task as Complete
4. Delete Task
5. Exit
Enter your choice: 2
ID	Task		Status
-------------------------------------------------
1	Buy groceries	Incomplete

Todo List Application
1. Add Task
2. Display Tasks
3. Mark Task as Complete
4. Delete Task
5. Exit
Enter your choice: 3
Enter task ID to mark as complete: 1
Task marked as complete.

Todo List Application
1. Add Task
2. Display Tasks
3. Mark Task as Complete
4. Delete Task
5. Exit
Enter your choice: 4
Enter task ID to delete: 1
Task deleted successfully.
```
