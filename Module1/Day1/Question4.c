#include <stdio.h>

int main()
{
    float oper1, oper2, ans;
    char operator;

    printf("Enter the 1st number: ");
    scanf("%f", &oper1);

    printf("Enter the operator: ");
    scanf(" %c", &operator);

    printf("Enter the 2nd Number: ");
    scanf("%f", &oper2);

    switch (operator)
    {
        case '+':
            ans = oper1 + oper2;
            break;
        case '-':
            ans = oper1 - oper2;
            break;
        case '*':
            ans = oper1 * oper2;
            break;
        case '/':
            if (oper2 != 0)
            {
                ans = oper1 / oper2;
            }
            else
            {
                printf("Error: Operand 2 is zero. Division by zero is not valid.\n");
                return 1;
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1;
    }

    printf("answer: %.2f\n", ans);

    return 0;
}
