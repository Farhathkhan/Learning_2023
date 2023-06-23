//set6 strings question 5- rotate string

#include <stdio.h>
#include <string.h>

void rotateString(char *str, int rotations) {
    int length = strlen(str);
    rotations %= length;

    for (int i = 0, j = rotations - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    for (int i = rotations, j = length - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    for (int i = 0, j = length - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];
    int rotations;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter the number of rotations: ");
    scanf("%d", &rotations);

    rotateString(str, rotations);

    printf("Rotated string: %s\n", str);

    return 0;
}
