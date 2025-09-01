// Program to find out factorial of the number
#include <stdio.h>
int main()
{
    int a, factorial = 1;
    printf("Enter the number :");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        factorial *= i;
    }
    printf("Factorial of the %d is:%d", a, factorial);
    return 0;
}