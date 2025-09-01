// Q24: Write a program to calculate an electricity bill based on units consumed.
#include <stdio.h>
int main()
{
    int units, bill;
    printf("Enter the consumed unit:");
    scanf("%d", &units);
    if (units <= 100)
    {
        bill = units * 5;
        printf("Bill:%d", bill);
    }
    else if (units <= 200)
    {
        bill = (100 * 5) + (units - 100) * 9;
        printf("Bill:%d", bill);
    }
    else
    {
        bill = (100 * 5) + (100 * 9) + (units - 200) * 16;
        printf("Bill:%d", bill);
    }
    return 0;
}