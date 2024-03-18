#include <stdio.h>

int main()
{
    int a, b;
    char op;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter the operation you want to perform: ");
    scanf(" %c", &op);
    switch (op)
    {
    case '+':
        printf("The sum of %d and %d is %d\n", a, b, a + b);
        break;
    case '-':
        printf("The difference of %d and %d is %d\n", a, b, a - b);
        break;
    case '*':
        printf("The product of %d and %d is %d\n", a, b, a * b);
        break;
    case '/':
        printf("The division of %d and %d is %f\n", a, b, a / b);
        break;
    default:
        printf("Invalid operation");
    }
    return 0;
}