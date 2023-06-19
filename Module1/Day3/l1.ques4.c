#include <stdio.h>

int findLargestNumber(int num) {
    int largest = 0;

    // Convert the number to a string for easier manipulation
    char str[5];
    sprintf(str, "%d", num);

    // Iterate through each digit position
    for (int i = 0; i < 4; i++) {
        // Remove the digit at position i
        int temp = 0;
        int pow10 = 1;
        for (int j = 0; j < 4; j++) {
            if (j != i) {
                temp += (str[j] - '0') * pow10;
                pow10 *= 10;
            }
        }

        // Update the largest number if necessary
        if (temp > largest) {
            largest = temp;
        }
    }

    return largest;
}

int main() {
    int num;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largest = findLargestNumber(num);

    printf("The largest number by deleting a single digit is: %d\n", largest);

    return 0;
}
