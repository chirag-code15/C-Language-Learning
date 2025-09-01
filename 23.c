// Q23: Write a program to calculate a library fine based on late days.
#include <stdio.h>
int main()
{
    int day, fine;
    printf("Enter the number  of days you are late:");
    scanf("%d", &day);
    if (day <= 5)
    {
        fine = day * 2;
        printf("Your finr is :%drs", fine);
    }
    else if (day <= 10)
    {
        fine = day * 4;
        printf("Your fine is :%drs", fine);
    }
    else if (day <= 30)
    {
        fine = day * 6;
        printf("your fine is :%drs", fine);
    }
    else
    {
        printf("Your membership has been cancelled due to late submission");
    }
    return 0;
}