// take 12 integers in a 3d array and display them

#include <stdio.h>

int main() {
    int arr[2][3][2] = {0};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 2; k++) {
                printf("Enter the element at (%d, %d, %d): ", i, j, k);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }
    printf("The elements are:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 2; k++) {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}