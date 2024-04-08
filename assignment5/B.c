// write a program in c to take 5 integer values and display their average.

#include <stdio.h>

int main() {
    int arr[5] = {0};
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        printf("Enter the %dth element: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("The average is: %f\n", (float)sum / 5);
    return 0;
}