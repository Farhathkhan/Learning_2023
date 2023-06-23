//set6 strings question 1-toggle case

#include <stdio.h>
#include <ctype.h>

void toggleCase(char *str) {
    while (*str != '\0') {
        if (islower(*str)) {
            *str = toupper(*str);  // Convert lowercase to uppercase
        } else if (isupper(*str)) {
            *str = tolower(*str);  // Convert uppercase to lowercase
        }
        str++;
    }
}

int main() {
    char str[] = "6.1'A''b''c''d''  ''X''Y''Z''\0''a''B''C''D''  ''x''y''z''\0'";

    printf("Before toggling case: %s\n", str);

    toggleCase(str);

    printf("After toggling case: %s\n", str);

    return 0;
}
