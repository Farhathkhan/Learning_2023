//set6 strings question 2- convert string as integer

#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[] = "6.2'5''2''7''8''\0'";
    int num;

    num = atoi(str);

    printf("Converted integer: %d\n", num);

    return 0;
}
