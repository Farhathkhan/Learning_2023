//set6 strings question 4- count number of days

#include <stdio.h>
#include <stdlib.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1;
    else
        return 0;
}

int daysInMonth(int month, int year) {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (month == 2 && isLeapYear(year))
        return 29;
    else
        return days[month - 1];
}

int countDays(int day, int month, int year) {
    int totalDays = 0;
    int i;

    for (i = 1; i < year; i++) {
        if (isLeapYear(i))
            totalDays += 366;
        else
            totalDays += 365;
    }

    for (i = 1; i < month; i++)
        totalDays += daysInMonth(i, year);

    totalDays += day;

    return totalDays;
}

int main() {
    int day, month, year;
    char date[11];

    printf("Enter the date in DD/MM/YYYY format: ");
    scanf("%[^/]%*c%[^/]%*c%d", date, date + 3, &year);

    day = atoi(date);
    month = atoi(date + 3);

    int totalDays = countDays(day, month, year);

    printf("Total days elapsed: %d\n", totalDays);

    return 0;
}
