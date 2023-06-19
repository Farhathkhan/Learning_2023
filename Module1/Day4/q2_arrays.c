#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {64, 84, 20, 36, 12, 90, 72, 10, 45, 56};
    int length = sizeof(arr) / sizeof(arr[0]);
    int min = INT_MAX; // Initialize min with the maximum possible integer value
    int max = INT_MIN; // Initialize max with the minimum possible integer value

    for (int i = 0; i < length; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}
