// store temperature of 2 cities for a week and display them using 2d array

#include <stdio.h>

int main() {
    int arr[2][7] = {0};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 7; j++) {
            printf("Enter the temperature of city %d on day %d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The temperatures are:\n");
    for (int i = 0; i < 2; i++) {
        printf("City %d: ", i + 1);
        for (int j = 0; j < 7; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}