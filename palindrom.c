// To check a number is palindrom or not
#include <stdio.h>
int main()
{
    int number, reverse = 0, digit;
    printf("Enter the number :");
    scanf("%d", &number);
    int orignal;
    orignal = number;
    while (number != 0)
    {
        digit = number % 10;
        reverse = (10 * reverse) + digit;
        number = number / 10;
    }
    if (orignal == reverse)
    {
        printf("the number is palindrom");
    }
    else
    {
        printf("number is not palindrom");
    }

    return 0;
}