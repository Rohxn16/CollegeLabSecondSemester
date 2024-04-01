// perfect number in c

#include <stdio.h>

int main(){
    int n, i = 1, sum = 0;
    printf("Enter a number to check whether it is a perfect number or not\n");
    scanf("%d", &n);
    while (i < n)
    {
        if (n % i == 0)
        {
            sum += i;
        }
        i++;
    }
    if (sum == n)
    {
        printf("Perfect number\n");
    }
    else
    {
        printf("Not a perfect number\n");
    }
    return 0;
}