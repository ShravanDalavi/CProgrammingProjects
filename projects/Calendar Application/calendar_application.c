#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EVENTS 100
#define MAX_EVENT_NAME_LENGTH 100

#include <stdio.h>

int main() {
    int year, month, daysInMonth, startingDay, dayOfWeek;

    // Input year and month
    printf("Enter year: ");
    scanf("%d", &year);
    printf("Enter month (1-12): ");
    scanf("%d", &month);

    // Calculate the number of days in the month
    if (month == 2) {
        // Check for leap year
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            daysInMonth = 29;
        else
            daysInMonth = 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        daysInMonth = 30;
    } else {
        daysInMonth = 31;
    }

    // Calculate the starting day of the month
    startingDay = (year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;
    for (int i = 1; i < month; ++i) {
        if (i == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                startingDay += 29;
            else
                startingDay += 28;
        } else if (i == 4 || i == 6 || i == 9 || i == 11) {
            startingDay += 30;
        } else {
            startingDay += 31;
        }
    }
    dayOfWeek = (startingDay + 1) % 7; // Incrementing the starting day by 1

    // Display the calendar
    printf("\n==============================\n");
    printf("       %d-%02d\n", year, month);
    printf("==============================\n");
    printf(" Sun Mon Tue Wed Thu Fri Sat\n");

    // Print spaces for the days before the starting day of the month
    for (int i = 0; i < dayOfWeek; ++i) {
        printf("    ");
    }

    // Print the days of the month
    for (int day = 1; day <= daysInMonth; ++day) {
        printf("%4d", day);
        if ((day + dayOfWeek) % 7 == 0) {
            printf("\n");
        }
    }

    printf("\n");
    return 0;
}

// Define the structure to store event details
struct Event {
    int day;
    int month;
    int year;
    char name[MAX_EVENT_NAME_LENGTH];
};

// Declare an array to store the events
struct Event events[MAX_EVENTS];
int eventCount = 0;

// Function to add a new event
void addEvent() {
    if (eventCount >= MAX_EVENTS) {
        printf("Cannot add more events. The calendar is full.\n");
        return;
    }
    struct Event newEvent;
    printf("Enter event name: ");
    getchar(); // to consume the newline character left by previous input
    fgets(newEvent.name, MAX_EVENT_NAME_LENGTH, stdin);
    newEvent.name[strcspn(newEvent.name, "\n")] = 0; // Remove newline character
    printf("Enter event day: ");
    scanf("%d", &newEvent.day);
    printf("Enter event month: ");
    scanf("%d", &newEvent.month);
    printf("Enter event year: ");
    scanf("%d", &newEvent.year);
    events[eventCount++] = newEvent;
    printf("Event added successfully!\n");
}

// Function to display all events
void displayEvents() {
    if (eventCount == 0) {
        printf("No events to display.\n");
        return;
    }
    printf("Date\t\tEvent\n");
    printf("---------------------------------------------------\n");
    for (int i = 0; i < eventCount; i++) {
        printf("%02d/%02d/%d\t%s\n", events[i].day, events[i].month, events[i].year, events[i].name);
    }
}

// Function to search for an event by date
void searchEvent() {
    int day, month, year;
    printf("Enter event day to search: ");
    scanf("%d", &day);
    printf("Enter event month to search: ");
    scanf("%d", &month);
    printf("Enter event year to search: ");
    scanf("%d", &year);
    for (int i = 0; i < eventCount; i++) {
        if (events[i].day == day && events[i].month == month && events[i].year == year) {
            printf("Event found:\n");
            printf("Date: %02d/%02d/%d\n", day, month, year);
            printf("Event: %s\n", events[i].name);
            return;
        }
    }
    printf("Event not found on %02d/%02d/%d.\n", day, month, year);
}

// Function to delete an event by date
void deleteEvent() {
    int day, month, year;
    printf("Enter event day to delete: ");
    scanf("%d", &day);
    printf("Enter event month to delete: ");
    scanf("%d", &month);
    printf("Enter event year to delete: ");
    scanf("%d", &year);
    for (int i = 0; i < eventCount; i++) {
        if (events[i].day == day && events[i].month == month && events[i].year == year) {
            for (int j = i; j < eventCount - 1; j++) {
                events[j] = events[j + 1];
            }
            eventCount--;
            printf("Event on %02d/%02d/%d deleted successfully.\n", day, month, year);
            return;
        }
    }
    printf("Event not found on %02d/%02d/%d.\n", day, month, year);
}