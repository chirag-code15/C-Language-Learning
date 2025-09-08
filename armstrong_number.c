// Q Program to check armstrong number
#include <stdio.h>
#include <math.h>
int main()
{
    int number,  digit ,count = 0  ;
    double sum ; 
    printf("Enter a number :");
    scanf("%d", &number);
    int orignal = number ; 
    int orignal1 = orignal ;
    while (number != 0)
    {
        number = number / 10;
        count++;
    }
    while (orignal != 0)
    {
        digit = orignal % 10;
        sum += pow(digit, count);
        orignal = orignal / 10;
    }
    if (orignal1 == sum)
    {
        printf("%d is an armstrong number ",orignal1);
    }
    else
    {
        printf("%d is not an armstrong number ",orignal1);
    }
    return 0;
}