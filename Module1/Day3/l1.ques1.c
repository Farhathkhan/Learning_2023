#include <stdio.h>

void printPattern1(int n) {
    int i;

    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }

    for (i = n - 1; i >= 1; i--) {
        printf("%d", i);
    }
}

void printPattern2(int n) {
    int i;

    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }

    for (i = 1; i <= (2 * (n - 2) + 1); i++) {
        printf(" ");
    }

    for (i = n; i >= 1; i--) {
        printf("%d", i);
    }
}

void printPattern3(int n) {
    int i;

    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }

    for (i = 1; i <= (2 * (n - 2) + 1); i++) {
        printf(" ");
    }

    for (i = n; i >= 1; i--) {
        printf("%d", i);
    }
}

int main() {
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        printPattern1(i);
        printf("\n");

        if (i != 1) {
            printPattern2(i);
            printf("\n");
        }
    }

    return 0;
}
