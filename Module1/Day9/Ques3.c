//filr handling - data viewer

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100
#define MAX_LENGTH 100

struct LogEntry {
    int entryNo;
    char sensorNo[MAX_LENGTH];
    float temperature;
    int humidity;
    int light;
    char time[MAX_LENGTH];
};

void extractLogEntries(struct LogEntry logEntries[], int *numEntries) {
    FILE *file;
    char line[MAX_LENGTH];
    char *token;

    file = fopen("data.csv", "r");
    if (file == NULL) {
        printf("Failed to open the data file.\n");
        exit(1);
    }

    *numEntries = 0;
    while (fgets(line, sizeof(line), file) != NULL) {
        token = strtok(line, ",");
        logEntries[*numEntries].entryNo = atoi(token);

        token = strtok(NULL, ",");
        strncpy(logEntries[*numEntries].sensorNo, token, sizeof(logEntries[*numEntries].sensorNo));

        token = strtok(NULL, ",");
        logEntries[*numEntries].temperature = atof(token);

        token = strtok(NULL, ",");
        logEntries[*numEntries].humidity = atoi(token);

        token = strtok(NULL, ",");
        logEntries[*numEntries].light = atoi(token);

        token = strtok(NULL, ",");
        strncpy(logEntries[*numEntries].time, token, sizeof(logEntries[*numEntries].time));

        (*numEntries)++;
    }

    fclose(file);
}

void displayLogEntries(const struct LogEntry logEntries[], int numEntries) {
    int i;

    for (i = 0; i < numEntries; i++) {
        printf("EntryNo: %d\n", logEntries[i].entryNo);
        printf("SensorNo: %s\n", logEntries[i].sensorNo);
        printf("Temperature: %.1f\n", logEntries[i].temperature);
        printf("Humidity: %d\n", logEntries[i].humidity);
        printf("Light: %d\n", logEntries[i].light);
        printf("Time: %s\n", logEntries[i].time);
        printf("------------------------------------\n");
    }
}

int main() {
    struct LogEntry logEntries[MAX_ENTRIES];
    int numEntries;

    extractLogEntries(logEntries, &numEntries);

    printf("Log Entries:\n");
    displayLogEntries(logEntries, numEntries);

    return 0;
}
