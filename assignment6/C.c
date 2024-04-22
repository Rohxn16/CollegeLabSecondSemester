// write a program in c to take a email id input and verify whether it is a email id or not

#include <stdio.h>

int main() {
    char email[100];
    int i = 0;
    printf("Enter an email id: ");
    while ((email[i] = getchar()) != '\n') {
        i++;
    }
    email[i] = '\0';
    i = 0;
    while (email[i] != '\0') {
        if (email[i] == '@') {
            break;
        }
        i++;
    }
    if (email[i] == '\0') {
        printf("The entered string is not an email id\n");
    } else {
        printf("The entered string is an email id\n");
    }
    return 0;
}