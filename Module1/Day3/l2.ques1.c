#include <stdio.h>

// Function to set a bit at a specific position in an 8-bit number
unsigned char setBit(unsigned char num, int position) {
    unsigned char mask = 1 << position;
    return num | mask;
}

// Function to clear a bit at a specific position in an 8-bit number
unsigned char clearBit(unsigned char num, int position) {
    unsigned char mask = ~(1 << position);
    return num & mask;
}

// Function to toggle a bit at a specific position in an 8-bit number
unsigned char toggleBit(unsigned char num, int position) {
    unsigned char mask = 1 << position;
    return num ^ mask;
}

int main() {
    unsigned char num = 0b10101010;

    printf("Original Number: 0x%X\n", num);

    num = setBit(num, 2);
    printf("After Setting Bit 2: 0x%X\n", num);

    num = clearBit(num, 5);
    printf("After Clearing Bit 5: 0x%X\n", num);

    num = toggleBit(num, 3);
    printf("After Toggling Bit 3: 0x%X\n", num);

    return 0;
}
