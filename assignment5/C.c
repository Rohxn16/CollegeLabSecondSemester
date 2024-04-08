// write a program in c to take 12 integers in a 2d array and display them.

#include <stdio.h>

int main() {
    int arr[3][4] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Enter the element at (%d, %d): ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The elements are:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}