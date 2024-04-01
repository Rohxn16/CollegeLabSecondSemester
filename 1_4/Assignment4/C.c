// write a program in c to check whether a number is prime or not using while loop

#include <stdio.h>

int main(){
    int n, i = 2;
    printf("Enter a number to check whether it is prime or not\n");
    scanf("%d", &n);
    while (i <= n - 1)
    {
        if (n % i == 0)
        {
            printf("Not a prime number\n");
            break;
        }
        i++;
    }
    if (i == n)
    {
        printf("Prime number\n");
    }
    return 0;
}