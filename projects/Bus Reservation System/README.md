# Bus Reservation System
A simple C program to manage bus reservations. The application allows you to add buses, view available buses, reserve seats, and cancel reservations.

## Description
This program is a basic implementation of a bus reservation system. It supports the following functionalities:

- Add a new bus
- Display all buses
- Reserve a seat on a bus
- Cancel a seat reservation

## Features
- Add Bus: Allows you to add a new bus to the list.
- Display Buses: Displays all buses currently in the system along with the available seats.
- Reserve Seat: Reserve a seat on a specified bus.
- Cancel Reservation: Cancel a seat reservation on a specified bus.

## Required Modules
The program uses the standard C library modules:

- `stdio.h` for input/output functions
- `stdlib.h` for memory allocation
- `string.h` for string manipulation

## How to Install Required Modules
No additional modules need to be installed. Ensure you have a C compiler like `gcc` installed on your system.

## How to Run the Script

Follow these steps to compile and run the program:

1. Save the code: Save the provided code to a file named `bus_reservation.c`.

2. Open a terminal or command prompt: Navigate to the directory where you saved `bus_reservation.c`.

3. Compile the code: Use a C compiler like `gcc` to compile the program. Run the following command:
```bash 
gcc bus_reservation.c -o bus_reservation
```
4. Run the compiled program: After successful compilation, run the program using:
```bash 
./bus_reservation
```
5. Follow the on-screen instructions: The program will display a menu with options to add buses, display buses, reserve seats, cancel reservations, or exit the program. Enter the corresponding number to choose an option.

## Example
```bash 
Bus Reservation System
1. Add Bus
2. Display Buses
3. Reserve Seat
4. Cancel Reservation
5. Exit
Enter your choice: 1
Enter Bus ID: 101
Enter Bus Name: Bus101
Bus added successfully!

Bus Reservation System
1. Add Bus
2. Display Buses
3. Reserve Seat
4. Cancel Reservation
5. Exit
Enter your choice: 2
ID      Name            Available Seats
-----------------------------------------
101     Bus101          40

```