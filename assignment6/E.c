// display reverse of input string

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    while ((str[i] = getchar()) != '\n') {
        i++;
    }
    str[i] = '\0';
    i--;
    while (i >= 0) {
        putchar(str[i]);
        i--;
    }
    putchar('\n');
    return 0;
}