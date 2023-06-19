#include <stdio.h>

void swap(void* a, void* b, size_t size)
{
    // Create a temporary buffer
    char temp[size];

    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
}

int main() {
    int a = 5;
    int b = 10;

    printf("Before swap: a = %d, b = %d\n", a, b);

    // Swap integers
    swap(&a, &b, sizeof(int));

    printf("After swap: a = %d, b = %d\n", a, b);

    double c = 2.5;
    double d = 3.7;

    printf("Before swap: c = %f, d = %f\n", c, d);

    // Swap doubles
    swap(&c, &d, sizeof(double));

    printf("After swap: c = %f, d = %f\n", c, d);

    return 0;
}
