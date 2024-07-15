# Flight Reservation System
A simple C program to manage flight bookings, passenger details, and reservations. The application allows you to add flights, reserve seats, display flight and passenger information, and cancel reservations.

## Description
This program is a basic implementation of a flight reservation system. It supports the following functionalities:

- Add a new flight
- Display all flights
- Reserve a seat for a passenger
- Display all passengers
- Cancel a reservation

## Features
- Add Flight: Allows you to add a new flight to the system.
- Display Flights: Displays all flights currently available in the system.
- Reserve Seat: Reserve a seat for a passenger on a specific flight.
- Display Passengers: Displays all passengers who have reservations.
- Cancel Reservation: Cancel a passenger's reservation.

## Required Modules
The program uses the standard C library modules:

- `stdio.h` for input/output functions
- `stdlib.h` for memory allocation
- `string.h` for string manipulation

## How to Install Required Modules
No additional modules need to be installed. Ensure you have a C compiler like `gcc` installed on your system.

## How to Run the Script
Follow these steps to compile and run the program:

1. Save the code: Save the provided code to a file named `flight_reservation.c`.

2. Open a terminal or command prompt: Navigate to the directory where you saved `flight_reservation.c`.

3. Compile the code: Use a C compiler like `gcc` to compile the program. Run the following command:
```bash 
gcc flight_reservation.c -o flight_reservation
```
4. Run the compiled program: After successful compilation, run the program using:
```bash 
./flight_reservation
```
5. Follow the on-screen instructions: The program will display a menu with options to add flights, display flights, reserve seats, display passengers, cancel reservations, or exit the program. Enter the corresponding number to choose an option.

## Example
```bash 
Flight Reservation System
1. Add Flight
2. Display Flights
3. Reserve Seat
4. Display Passengers
5. Cancel Reservation
6. Exit
Enter your choice: 1
Enter Flight ID: 101
Enter Destination: NewYork
Flight added successfully!

Flight Reservation System
1. Add Flight
2. Display Flights
3. Reserve Seat
4. Display Passengers
5. Cancel Reservation
6. Exit
Enter your choice: 2
ID  Destination      Available Seats
-------------------------------------
101 NewYork          100
```