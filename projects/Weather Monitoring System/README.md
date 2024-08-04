# Basic Weather Monitoring System

## Description

This project implements a basic weather monitoring system in C that can store, display, and manage weather data. The system provides a text-based menu interface for user interaction.

## Features

- **Add a Weather Record:** Allows the user to add a new weather record by entering the city name, temperature, humidity, and pressure.
- **Display Weather Records:** Displays all the weather records currently stored in the system.
- **Search for a Weather Record:** Allows the user to search for a weather record by city name and displays the weather details if found.
- **Delete a Weather Record:** Allows the user to delete a weather record from the system by city name.
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
   git clone https://github.com/yourusername/weather-monitoring-system.git
   cd weather-monitoring-system
```
2. Compile the Program:
Use the `gcc` compiler to compile the program:
```bash 
gcc -o weather_monitoring weather_monitoring.c
```
3. Run the Script:
Execute the compiled program:
```bash 
./weather_monitoring
```
4. Follow the On-Screen Instructions:
The program will display a menu with the available operations. Enter the corresponding number to perform an operation.
```bash 
Weather Monitoring System
1. Add Weather Record
2. Display Weather Records
3. Search Weather Record
4. Delete Weather Record
5. Exit
Enter your choice: 
```
## Example
```bash 
Weather Monitoring System
1. Add Weather Record
2. Display Weather Records
3. Search Weather Record
4. Delete Weather Record
5. Exit
Enter your choice: 1
Enter city name: New York
Enter temperature: 25.3
Enter humidity: 60.5
Enter pressure: 1013.2
Weather record added successfully!

Weather Monitoring System
1. Add Weather Record
2. Display Weather Records
3. Search Weather Record
4. Delete Weather Record
5. Exit
Enter your choice: 2
City           Temperature     Humidity        Pressure
--------------------------------------------------------
New York       25.30           60.50           1013.20
```