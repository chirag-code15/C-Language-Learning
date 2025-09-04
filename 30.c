// Q30: Write a program to reverse a given number.
#include <stdio.h>
int main()
{
    int number, digit;
    printf("Enter the number :");
    scanf("%d", &number);
    int reverse = 0;
    int orignal = number;
    while (number != 0)
    {
        digit = number % 10;
        number = number / 10;
        reverse = (reverse * 10) + digit;
    }
    printf("Reverse of the %d is :%d", orignal, reverse);
    return 0;
}