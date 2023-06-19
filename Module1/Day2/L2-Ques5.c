#include <stdio.h>

void encodeString(char *string) {
    while (*string != '\0') {
        *string = *string + 5;  // Add 5 to the ASCII value of each character
        string++;  // Move to the next character
    }
}

void decodeString(char *string) {
    while (*string != '\0') {
        *string = *string - 5;  // Subtract 5 from the ASCII value of each character
        string++;  // Move to the next character
    }
}

int main() {
    char string[] = "Hello, World!";

    printf("Original string: %s\n", string);

    // Encoding
    encodeString(string);
    printf("Encoded string: %s\n", string);

    // Decoding
    decodeString(string);
    printf("Decoded string: %s\n", string);

    return 0;
}
