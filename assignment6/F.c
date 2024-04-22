// count the number of vowels in a string 

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, count = 0;
    printf("Enter a string: ");
    while ((str[i] = getchar()) != '\n') {
        i++;
    }
    str[i] = '\0';
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;
        }
    }
    printf("The number of vowels in the string is: %d\n", count);
    return 0;
}