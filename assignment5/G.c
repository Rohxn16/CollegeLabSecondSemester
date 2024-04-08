// check for palindromic number

#include <stdio.h>

int main() {
    int n, reversed = 0, original;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    if (original == reversed) {
        printf("The number is palindromic\n");
    } else {
        printf("The number is not palindromic\n");
    }
    return 0;
}