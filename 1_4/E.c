// factorial of a number

#include <stdio.h>

int main(){
    int n, i = 1, fact = 1;
    printf("Enter a number to find the factorial of\n");
    scanf("%d", &n);
    while (i <= n)
    {
        fact *= i;
        i++;
    }
    printf("The factorial of %d is %d\n", n, fact);
    return 0;
}