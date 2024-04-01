// display all even numbers in a range

#include <stdio.h>

// even nums in a range

// take hthe range from the user

int main(){
    int a,b;
    printf("Enter the upper range of numbers\n");
    scanf("%d", &a);
    printf("Enter the lower range of numbers\n");
    scanf("%d", &b);
    while (a <= b)
    {
        if (a % 2 == 0)
        {
            printf("%d\n", a);
        }
        a++;
    }
}