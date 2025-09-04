// Q29: Write a program to calculate the factorial of a number.
#include <stdio.h>
int main()
{
    int number, factorial = 1;
    printf("Enter the number :");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {
        factorial *= i;
    }
    printf("The factorial of the %d is :%d", number, factorial);
    return 0;
}