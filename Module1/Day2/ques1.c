#include <stdio.h>

void Exponent(double x) {
    unsigned long long* p = (unsigned long long*)&x;
    unsigned long long bits = *p;

    unsigned int exponent = (bits >> 52) & 0x7FF;

    printf("Exponent in hexadecimal: 0x%X\n", exponent);

    printf("Exponent in binary: 0b");
    for (int i = 10; i >= 0; i--) {
        int bit = (exponent >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    Exponent(x);
    return 0;
}
