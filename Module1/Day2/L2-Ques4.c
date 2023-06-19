#include <stdio.h>

char *xstrchr(char *string, char ch) {
    while (*string != '\0') {
        if (*string == ch) {
            return string;  // Character found, return pointer to the first occurrence
        }
        string++;  // Move to the next character in the string
    }

    return NULL;  // Character not found, return NULL
}

int main() {
    char *string = "Hello, World!";
    char ch = 'o';

    char *result = xstrchr(string, ch);

    if (result != NULL) {
        printf("Character '%c' found at position: %ld\n", ch, result - string);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }

    return 0;
}
