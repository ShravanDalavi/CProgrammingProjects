#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the maximum number of buses and seats per bus
#define MAX_BUSES 5
#define MAX_SEATS 40

// Define the structure to store bus details
struct Bus {
    int id;
    char name[50];
    int availableSeats;
    int seats[MAX_SEATS];
};

// Declare an array to store the buses
struct Bus buses[MAX_BUSES];
int busCount = 0;

// Function to add a new bus
void addBus() {
    if (busCount >= MAX_BUSES) {
        printf("Cannot add more buses. The list is full.\n");
        return;
    }
    struct Bus newBus;
    printf("Enter Bus ID: ");
    scanf("%d", &newBus.id);
    printf("Enter Bus Name: ");
    scanf("%s", newBus.name);
    newBus.availableSeats = MAX_SEATS;
    for (int i = 0; i < MAX_SEATS; i++) {
        newBus.seats[i] = 0; // Initialize all seats as available
    }
    buses[busCount++] = newBus;
    printf("Bus added successfully!\n");
}

// Function to display all buses
void displayBuses() {
    if (busCount == 0) {
        printf("No buses to display.\n");
        return;
    }
    printf("ID\tName\t\tAvailable Seats\n");
    printf("---------------------------------\n");
    for (int i = 0; i < busCount; i++) {
        printf("%d\t%s\t\t%d\n", buses[i].id, buses[i].name, buses[i].availableSeats);
    }
}

// Function to reserve a seat
void reserveSeat() {
    int busId, seatNumber;
    printf("Enter Bus ID: ");
    scanf("%d", &busId);
    struct Bus *selectedBus = NULL;
    for (int i = 0; i < busCount; i++) {
        if (buses[i].id == busId) {
            selectedBus = &buses[i];
            break;
        }
    }
    if (selectedBus == NULL) {
        printf("Bus with ID %d not found.\n", busId);
        return;
    }
    if (selectedBus->availableSeats == 0) {
        printf("No available seats on this bus.\n");
        return;
    }
    printf("Enter Seat Number (1-%d): ", MAX_SEATS);
    scanf("%d", &seatNumber);
    if (seatNumber < 1 || seatNumber > MAX_SEATS || selectedBus->seats[seatNumber - 1] == 1) {
        printf("Invalid seat number or seat already reserved.\n");
        return;
    }
    selectedBus->seats[seatNumber - 1] = 1;
    selectedBus->availableSeats--;
    printf("Seat %d reserved successfully on bus %s.\n", seatNumber, selectedBus->name);
}

// Function to cancel a reservation
void cancelReservation() {
    int busId, seatNumber;
    printf("Enter Bus ID: ");
    scanf("%d", &busId);
    struct Bus *selectedBus = NULL;
    for (int i = 0; i < busCount; i++) {
        if (buses[i].id == busId) {
            selectedBus = &buses[i];
            break;
        }
    }
    if (selectedBus == NULL) {
        printf("Bus with ID %d not found.\n", busId);
        return;
    }
    printf("Enter Seat Number (1-%d): ", MAX_SEATS);
    scanf("%d", &seatNumber);
    if (seatNumber < 1 || seatNumber > MAX_SEATS || selectedBus->seats[seatNumber - 1] == 0) {
        printf("Invalid seat number or seat not reserved.\n");
        return;
    }
    selectedBus->seats[seatNumber - 1] = 0;
    selectedBus->availableSeats++;
    printf("Seat %d reservation canceled successfully on bus %s.\n", seatNumber, selectedBus->name);
}

int main() {
    int choice;
    while (1) {
        printf("\nBus Reservation System\n");
        printf("1. Add Bus\n");
        printf("2. Display Buses\n");
        printf("3. Reserve Seat\n");
        printf("4. Cancel Reservation\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addBus();
                break;
            case 2:
                displayBuses();
                break;
            case 3:
                reserveSeat();
                break;
            case 4:
                cancelReservation();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
