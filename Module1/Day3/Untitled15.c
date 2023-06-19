#include <stdio.h>

// Function to convert a decimal number to BCD format
unsigned char decimalToBCD(unsigned char decimal) {
    return ((decimal / 10) << 4) | (decimal % 10);
}

int main() {
    unsigned char decimal = 42;
    unsigned char bcd = decimalToBCD(decimal);

    printf("Decimal: %d\n", decimal);
    printf("BCD: 0x%X\n", bcd);

    return 0;
}
