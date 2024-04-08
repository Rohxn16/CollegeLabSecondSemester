// program in c to add 2 matrices and display the result, ask the dimensions of the matrix from the user.

#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);
    int arr1[m][n], arr2[m][n], sum[m][n];
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter the element at (%d, %d): ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter the element at (%d, %d): ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("The sum of the matrices is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}