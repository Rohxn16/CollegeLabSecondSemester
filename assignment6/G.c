// take 2 strings and append the first to the end of the second and display the new string

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, j = 0;
    printf("Enter the first string: ");
    while ((str1[i] = getchar()) != '\n') {
        i++;
    }
    str1[i] = '\0';
    i = 0;
    printf("Enter the second string: ");
    while ((str2[i] = getchar()) != '\n') {
        i++;
    }
    str2[i] = '\0';
    while (str1[j] != '\0') {
        str2[i] = str1[j];
        i++;
        j++;
    }
    str2[i] = '\0';
    printf("The new string is: %s\n", str2);
    return 0;
}