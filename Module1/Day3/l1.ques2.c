#include <stdio.h>

void printBits(unsigned int num) {
    int i;

    for (i = 31; i >= 0; i--) {
        unsigned int mask = 1 << i;
        unsigned int bit = (num & mask) >> i;
        printf("%u", bit);
    }
}

int main() {
    unsigned int num;

    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);

    printf("Binary representation: ");
    printBits(num);
    printf("\n");

    return 0;
}
