// check for palindrome string

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j;
    printf("Enter a string: ");
    while ((str[i] = getchar()) != '\n') {
        i++;
    }
    str[i] = '\0';
    i--;
    for (j = 0; j < i; j++, i--) {
        if (str[j] != str[i]) {
            printf("The entered string is not a palindrome\n");
            return 0;
        }
    }
    printf("The entered string is a palindrome\n");
    return 0;
}