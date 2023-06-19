#include <stdio.h>

int bit_operation_prog(int numb, int oper_type) {

    switch (oper_type) {
        case 1:
            numb |= 1;
            break;
        case 2:
            numb &= ~(1 << 31);
            break;
        case 3:
            numb ^= (1 << 16);
            break;
        default:
            printf("Invalid operation type.\n");
            return -1;
    }

    return numb;
}

int main() {
    int numb = 56;
    int oper_type = 3;

    int result = bit_operation_prog(numb, oper_type);

    if (result != -1) {
        printf("Result: %d\n", result);
    }

    return 0;
}
