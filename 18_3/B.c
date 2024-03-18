// write a menu driven program in c to check if an input is a special character or alphabet or number.

// the code needs to be menu driven


#include <stdio.h>

int main()
{
    char ch;
    int a;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("1. Check if the character is a special character\n");
    printf("2. Check if the character is an alphabet\n");
    printf("3. Check if the character is a number\n");
    printf("Enter your choice: ");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        if ((ch >= 0 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 127))
        {
            printf("The character is a special character\n");
        }
        else
        {
            printf("The character is not a special character\n");
        }
        break;
    case 2:
        if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
        {
            printf("The character is an alphabet\n");
        }
        else
        {
            printf("The character is not an alphabet\n");
        }
        break;
    case 3:
        if (ch >= 48 && ch <= 57)
        {
            printf("The character is a number\n");
        }
        else
        {
            printf("The character is not a number\n");
        }
        break;
    default:
        printf("Invalid choice");
    }
    return 0;
}