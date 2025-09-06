// Q33: Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>
int main()
{
    int number, digits, count = 0, sum = 0;
    double cube;
    printf("Enter a number :");
    scanf("%d", &number);
    int orignal = number;
    int orignal2 = number;
    while (number != 0)
    {
        number = number / 10;
        count++;
    }
    while (orignal != 0)
    {
        digits = orignal % 10;
        cube = pow(digits, count);
        sum += cube;
        orignal = orignal / 10;
    }
    if (orignal2 == sum)
    {
        printf("This number is a amstrong number ");
    }
    else
    {
        printf("this number is not a amstrong number");
    }
    return 0;
}