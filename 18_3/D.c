// write a menu driven program in c  to calculate electricity bill using the following parameters
// for first 50 units  rs 80 flat
// for next 100 units rs .75 per unit
// for next 100 units rs 1.20 per unit
// for units above 250 rs 1.50 per unit
// an additional subcharge of 20% is added in every slab

#include <stdio.h>

int main()
{
    int units;
    float bill, subcharge;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    if (units <= 50)
    {
        bill = 80;
    }
    else if (units <= 150)
    {
        bill = 80 + (units - 50) * 0.75;
    }
    else if (units <= 250)
    {
        bill = 80 + 100 * 0.75 + (units - 150) * 1.20;
    }
    else
    {
        bill = 80 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }
    subcharge = bill * 0.2;
    bill += subcharge;
    printf("The electricity bill is %f\n", bill);
    return 0;
}

