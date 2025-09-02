// Q26: Write a program to print numbers from 1 to n.
#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number upto which you want to print :");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}
