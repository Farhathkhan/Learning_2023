#include <stdio.h>

int main() {
    int arr[] = {64, 84, 20, 36, 12, 90, 72, 10, 45, 56};
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nReversed array: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
