#include <stdio.h>

void findSmallestLargestDigits(int n, ...) {
    int smallest = 9;
    int largest = 0;
    va_list args;
    va_start(args, n);

    for (int i = 0; i < n; i++) {
        int num = va_arg(args, int);

        // Find the smallest and largest digits in the current number
        while (num != 0) {
            int digit = num % 10;
            if (digit < smallest) {
                smallest = digit;
            }
            if (digit > largest) {
                largest = digit;
            }
            num /= 10;
        }
    }

    va_end(args);

    // Print the results
    if (smallest == 9 || largest == 0) {
        printf("Not Valid\n");
    } else {
        printf("Smallest Digit: %d\n", smallest);
        printf("Largest Digit: %d\n", largest);
    }
}

int main() {
    findSmallestLargestDigits(3, 8, 156, 123450);

    return 0;
}
