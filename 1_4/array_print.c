#include <stdio.h>
#define n 5
int main(int argc, char const *argv[])
{
    int arr[n] = {1, 2, 3, 4, 5};
    for(int i = 0; i < n; i++)
    {
        // printf
        printf("%d ", arr[i]);
    }

    // do the same for a double dimensional; array
    int arr2[n][n] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            // printf
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// this is classwork not to be written in the assignment