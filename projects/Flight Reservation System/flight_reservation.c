#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FLIGHTS 10
#define MAX_SEATS 100
#define MAX_PASSENGERS 100

// Define structures to store flight and passenger details
struct Flight {
    int id;
    char destination[50];
    int availableSeats;
    int seats[MAX_SEATS];
};

struct Passenger {
    int id;
    char name[50];
    int flightId;
    int seatNumber;
};

// Declare arrays to store flights and passengers
struct Flight flights[MAX_FLIGHTS];
struct Passenger passengers[MAX_PASSENGERS];
int flightCount = 0;
int passengerCount = 0;

// Function to add a new flight
void addFlight() {
    if (flightCount >= MAX_FLIGHTS) {
        printf("Cannot add more flights. The list is full.\n");
        return;
    }
    struct Flight newFlight;
    printf("Enter Flight ID: ");
    scanf("%d", &newFlight.id);
    printf("Enter Destination: ");
    scanf("%s", newFlight.destination);
    newFlight.availableSeats = MAX_SEATS;
    for (int i = 0; i < MAX_SEATS; i++) {
        newFlight.seats[i] = 0; // Initialize all seats as available
    }
    flights[flightCount++] = newFlight;
    printf("Flight added successfully!\n");
}

// Function to display all flights
void displayFlights() {
    if (flightCount == 0) {
        printf("No flights to display.\n");
        return;
    }
    printf("ID\tDestination\tAvailable Seats\n");
    printf("-----------------------------------------\n");
    for (int i = 0; i < flightCount; i++) {
        printf("%d\t%s\t\t%d\n", flights[i].id, flights[i].destination, flights[i].availableSeats);
    }
}

// Function to reserve a seat
void reserveSeat() {
    if (passengerCount >= MAX_PASSENGERS) {
        printf("Cannot add more passengers. The list is full.\n");
        return;
    }
    int flightId, seatNumber;
    printf("Enter Flight ID: ");
    scanf("%d", &flightId);
    struct Flight *selectedFlight = NULL;
    for (int i = 0; i < flightCount; i++) {
        if (flights[i].id == flightId) {
            selectedFlight = &flights[i];
            break;
        }
    }
    if (selectedFlight == NULL) {
        printf("Flight with ID %d not found.\n", flightId);
        return;
    }
    if (selectedFlight->availableSeats == 0) {
        printf("No available seats on this flight.\n");
        return;
    }
    printf("Enter Seat Number (1-%d): ", MAX_SEATS);
    scanf("%d", &seatNumber);
    if (seatNumber < 1 || seatNumber > MAX_SEATS || selectedFlight->seats[seatNumber - 1] == 1) {
        printf("Invalid seat number or seat already reserved.\n");
        return;
    }
    struct Passenger newPassenger;
    printf("Enter Passenger ID: ");
    scanf("%d", &newPassenger.id);
    printf("Enter Passenger Name: ");
    scanf("%s", newPassenger.name);
    newPassenger.flightId = flightId;
    newPassenger.seatNumber = seatNumber;
    passengers[passengerCount++] = newPassenger;

    selectedFlight->seats[seatNumber - 1] = 1;
    selectedFlight->availableSeats--;
    printf("Seat %d reserved successfully on flight %s.\n", seatNumber, selectedFlight->destination);
}

// Function to display all passengers
void displayPassengers() {
    if (passengerCount == 0) {
        printf("No passengers to display.\n");
        return;
    }
    printf("ID\tName\t\tFlight ID\tSeat Number\n");
    printf("-------------------------------------------------\n");
    for (int i = 0; i < passengerCount; i++) {
        printf("%d\t%s\t\t%d\t\t%d\n", passengers[i].id, passengers[i].name, passengers[i].flightId, passengers[i].seatNumber);
    }
}

// Function to cancel a reservation
void cancelReservation() {
    int passengerId;
    printf("Enter Passenger ID to cancel reservation: ");
    scanf("%d", &passengerId);
    struct Passenger *selectedPassenger = NULL;
    for (int i = 0; i < passengerCount; i++) {
        if (passengers[i].id == passengerId) {
            selectedPassenger = &passengers[i];
            break;
        }
    }
    if (selectedPassenger == NULL) {
        printf("Passenger with ID %d not found.\n", passengerId);
        return;
    }
    struct Flight *selectedFlight = NULL;
    for (int i = 0; i < flightCount; i++) {
        if (flights[i].id == selectedPassenger->flightId) {
            selectedFlight = &flights[i];
            break;
        }
    }
    if (selectedFlight == NULL) {
        printf("Flight with ID %d not found.\n", selectedPassenger->flightId);
        return;
    }
    selectedFlight->seats[selectedPassenger->seatNumber - 1] = 0;
    selectedFlight->availableSeats++;
    for (int i = 0; i < passengerCount; i++) {
        if (passengers[i].id == passengerId) {
            for (int j = i; j < passengerCount - 1; j++) {
                passengers[j] = passengers[j + 1];
            }
            passengerCount--;
            break;
        }
    }
    printf("Reservation for Passenger ID %d canceled successfully.\n", passengerId);
}

int main() {
    int choice;
    while (1) {
        printf("\nFlight Reservation System\n");
        printf("1. Add Flight\n");
        printf("2. Display Flights\n");
        printf("3. Reserve Seat\n");
        printf("4. Display Passengers\n");
        printf("5. Cancel Reservation\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addFlight();
                break;
            case 2:
                displayFlights();
                break;
            case 3:
                reserveSeat();
                break;
            case 4:
                displayPassengers();
                break;
            case 5:
                cancelReservation();
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
