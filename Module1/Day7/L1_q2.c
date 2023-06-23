//structures question 2 - use of functions to perform operations like reading,writing,addition,multiplication of complex numbers

#include <stdio.h>

struct Complex {
    double real;
    double imaginary;
};

void readComplex(struct Complex *num) {
    printf("Enter the real part: ");
    scanf("%lf", &(num->real));

    printf("Enter the imaginary part: ");
    scanf("%lf", &(num->imaginary));
}

void writeComplex(struct Complex num) {
    printf("Complex number: %.2lf + %.2lfi\n", num.real, num.imaginary);
}

struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}

// Function to multiply two complex numbers
struct Complex multiplyComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real * num2.real - num1.imaginary * num2.imaginary;
    result.imaginary = num1.real * num2.imaginary + num1.imaginary * num2.real;
    return result;
}

int main() {
    struct Complex num1, num2, sum, product;

    printf("Reading the first complex number:\n");
    readComplex(&num1);

    printf("\nReading the second complex number:\n");
    readComplex(&num2);

    printf("\n");

    printf("First Complex number:\n");
    writeComplex(num1);

    printf("Second Complex number:\n");
    writeComplex(num2);

    printf("\n");

    // Addition
    sum = addComplex(num1, num2);
    printf("Addition of two complex numbers:\n");
    writeComplex(sum);

    // Multiplication
    product = multiplyComplex(num1, num2);
    printf("Multiplication of two complex numbers:\n");
    writeComplex(product);

    return 0;
}
