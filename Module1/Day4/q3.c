//set6 strings question 3- compute total seconds

#include <stdio.h>
#include <stdlib.h>

int computeTotalSeconds(int hours, int minutes, int seconds) {
    int totalSeconds = (hours * 3600) + (minutes * 60) + seconds;
    return totalSeconds;
}

int main() {
    int hours, minutes, seconds;
    char input[10];

    printf("Enter the time in the format (hh:mm:ss): ");
    scanf("%[^:\n]s", input);

    hours = atoi(input);
    minutes = atoi(input + 3);
    seconds = atoi(input + 6);

    int totalSeconds = computeTotalSeconds(hours, minutes, seconds);

    printf("Total seconds: %d\n", totalSeconds);

    return 0;
}
