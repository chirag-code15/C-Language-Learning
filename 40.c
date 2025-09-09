// Q40: Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
int main()
{
    int number, digit, i = 0;
    int a[32];
    printf("Enter a number : ");
    scanf("%d", &number);
    while (number != 0)
    {
        digit = number % 2;
        a[i] = digit;
        i++;
        number = number / 2;
    }
    int count = i - 1;
    for (int j = count; j >= 0; j--)
    {
        if (a[j] == 1)
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
    }
    return 0;
}

