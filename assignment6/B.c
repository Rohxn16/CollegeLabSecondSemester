#include <stdio.h>

int main(){
    // take a string input and dsiplay length of string without library

    char str[100];
    int i = 0;
    printf("Enter a string: ");
    while ((str[i] = getchar()) != '\n') {
        i++;
    }
    str[i] = '\0';
    printf("The length of the string is: %d\n", i);
    return 0;
}