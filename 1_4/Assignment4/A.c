// print this pattern
//*
//**
//***

#include <stdio.h>

int main(){
    int i, j;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    /*
     *
    ***
   ***** 
    */
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3 - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    //do the above pattern but do it in reverse after 3 rows
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3 - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
        // now reverse the above pattern
    for (i = 2; i >= 1; i--)
    {
        for (j = 1; j <= 3 - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}