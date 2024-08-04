#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WEATHER_RECORDS 100
#define MAX_CITY_NAME_LENGTH 50

// Define the structure to store weather data
struct Weather {
    char city[MAX_CITY_NAME_LENGTH];
    float temperature;
    float humidity;
    float pressure;
};

// Declare an array to store the weather records
struct Weather weatherRecords[MAX_WEATHER_RECORDS];
int recordCount = 0;

// Function to add a new weather record
void addWeatherRecord() {
    if (recordCount >= MAX_WEATHER_RECORDS) {
        printf("Cannot add more records. The list is full.\n");
        return;
    }
    struct Weather newRecord;
    printf("Enter city name: ");
    scanf("%s", newRecord.city);
    printf("Enter temperature: ");
    scanf("%f", &newRecord.temperature);
    printf("Enter humidity: ");
    scanf("%f", &newRecord.humidity);
    printf("Enter pressure: ");
    scanf("%f", &newRecord.pressure);
    weatherRecords[recordCount++] = newRecord;
    printf("Weather record added successfully!\n");
}

// Function to display all weather records
void displayWeatherRecords() {
    if (recordCount == 0) {
        printf("No records to display.\n");
        return;
    }
    printf("City\t\tTemperature\tHumidity\tPressure\n");
    printf("---------------------------------------------------------------\n");
    for (int i = 0; i < recordCount; i++) {
        printf("%s\t\t%.2f\t\t%.2f\t\t%.2f\n", weatherRecords[i].city, weatherRecords[i].temperature, weatherRecords[i].humidity, weatherRecords[i].pressure);
    }
}

// Function to search for a weather record by city name
void searchWeatherRecord() {
    char city[MAX_CITY_NAME_LENGTH];
    printf("Enter city name to search: ");
    scanf("%s", city);
    for (int i = 0; i < recordCount; i++) {
        if (strcmp(weatherRecords[i].city, city) == 0) {
            printf("Weather record found:\n");
            printf("City: %s\n", weatherRecords[i].city);
            printf("Temperature: %.2f\n", weatherRecords[i].temperature);
            printf("Humidity: %.2f\n", weatherRecords[i].humidity);
            printf("Pressure: %.2f\n", weatherRecords[i].pressure);
            return;
        }
    }
    printf("Weather record for city %s not found.\n", city);
}

// Function to delete a weather record by city name
void deleteWeatherRecord() {
    char city[MAX_CITY_NAME_LENGTH];
    printf("Enter city name to delete: ");
    scanf("%s", city);
    for (int i = 0; i < recordCount; i++) {
        if (strcmp(weatherRecords[i].city, city) == 0) {
            for (int j = i; j < recordCount - 1; j++) {
                weatherRecords[j] = weatherRecords[j + 1];
            }
            recordCount--;
            printf("Weather record for city %s deleted successfully.\n", city);
            return;
        }
    }
    printf("Weather record for city %s not found.\n", city);
}

int main() {
    int choice;
    while (1) {
        printf("\nWeather Monitoring System\n");
        printf("1. Add Weather Record\n");
        printf("2. Display Weather Records\n");
        printf("3. Search Weather Record\n");
        printf("4. Delete Weather Record\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addWeatherRecord();
                break;
            case 2:
                displayWeatherRecords();
                break;
            case 3:
                searchWeatherRecord();
                break;
            case 4:
                deleteWeatherRecord();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
