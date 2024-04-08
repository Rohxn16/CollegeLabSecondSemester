// write a program in c to take 10 integers in an array and display them. All cells of the array should be initialized to 0.
#include <stdio.h>

int main() {
    int arr[10] = {0};
    for (int i = 0; i < 10; i++) {
        printf("Enter the %dth element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("The elements are: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}