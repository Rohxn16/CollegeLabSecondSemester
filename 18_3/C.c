#include <stdio.h>

int main()
{
    int phy, chem, bio, math, comp;
    printf("Enter the marks of Physics: ");
    scanf("%d", &phy);
    printf("Enter the marks of Chemistry: ");
    scanf("%d", &chem);
    printf("Enter the marks of Biology: ");
    scanf("%d", &bio);
    printf("Enter the marks of Mathematics: ");
    scanf("%d", &math);
    printf("Enter the marks of Computer: ");
    scanf("%d", &comp);
    float percent = (phy + chem + bio + math + comp) / 5.0;
    printf("The percentage is %f and the grade is ", percent);
    if (percent >= 90)
    {
        printf("O");
    }
    else if (percent >= 80)
    {
        printf("E");
    }
    else if (percent >= 70)
    {
        printf("A");
    }
    else if (percent >= 60)
    {
        printf("B");
    }
    else if (percent >= 40)
    {
        printf("C");
    }
    else
    {
        printf("F");
    }
    return 0;
}