#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0;
    printf("Enter a string: ");
    while ((str1[i] = getchar()) != '\n') {
        i++;
    }
    str1[i] = '\0';
    i = 0;
    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
    printf("The copied string is: %s\n", str2);
    for(i = 0; str1[i] != '\0'; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            str1[i] = str1[i] - 32;
        }
    }
    return 0;
}