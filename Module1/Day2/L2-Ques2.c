#include <stdio.h>

int compareBoxes(int boxA[], int boxB[], int size) {
    int found[size]; // Array to keep track of found items in boxB
    int i, j;

    // Initialize found array with zeros
    for (i = 0; i < size; i++) {
        found[i] = 0;
    }

    // Compare items in boxA with boxB
    for (i = 0; i < size; i++) {
        int itemFound = 0; // Flag to check if item is found in boxB

        for (j = 0; j < size; j++) {
            // If item in boxA matches an item in boxB and is not already found
            if (boxA[i] == boxB[j] && found[j] == 0) {
                found[j] = 1; // Mark item as found in boxB
                itemFound = 1;
                break;
            }
        }

        // If item in boxA doesn't have a corresponding item in boxB
        if (itemFound == 0) {
            return 0; // Return 0 indicating unequal boxes
        }
    }

    return 1; // Return 1 indicating equal boxes
}

int main() {
    int boxA[] = {200, 10, -90};
    int boxB[] = {-90, 200, 10};
    int size = sizeof(boxA) / sizeof(boxA[0]);

    int result = compareBoxes(boxA, boxB, size);

    if (result) {
        printf("The boxes have a one-to-one mapping of items.\n");
    } else {
        printf("The boxes do not have a one-to-one mapping of items.\n");
    }

    return 0;
}
