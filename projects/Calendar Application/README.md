# Simple Calendar Application

## Description

This project implements a basic calendar application in C that allows users to schedule events and set reminders. The system provides a text-based menu interface for user interaction, enabling users to add, view, search, and delete events.

## Features

- **Add an Event:** Allows the user to add a new event by entering the event name, day, month, and year.
- **Display Events:** Displays all the events currently stored in the system, showing the date and event name.
- **Search for an Event:** Allows the user to search for an event by date and displays the event details if found.
- **Delete an Event:** Allows the user to delete an event from the system by specifying the event date.
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
   git clone https://github.com/yourusername/calendar-application.git
   cd calendar-application
```
2. Compile the Program:
Use the `gcc` compiler to compile the program:
```bash 
gcc -o calendar_application calendar_application.c
```
3. Run the Script:
Execute the compiled program:
```bash 
./calendar_application
```
4. Follow the On-Screen Instructions:

The program will display a menu with the available operations. Enter the corresponding number to perform an operation.
```bash 
Calendar Application
1. Add Event
2. Display Events
3. Search Event
4. Delete Event
5. Exit
Enter your choice: 
```

## Example 
```bash 
Calendar Application
1. Add Event
2. Display Events
3. Search Event
4. Delete Event
5. Exit
Enter your choice: 1
Enter event name: Meeting
Enter event day: 15
Enter event month: 7
Enter event year: 2024
Event added successfully!

Calendar Application
1. Add Event
2. Display Events
3. Search Event
4. Delete Event
5. Exit
Enter your choice: 2
Date        Event
---------------------------------------------------
15/07/2024  Meeting
```