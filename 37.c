// Q37: Write a program to find the LCM of two numbers.
#include <stdio.h>
int main()
{
    int n1, n2, i = 2;
    printf("Enter number 1 :");
    scanf("%d", &n1);
    printf("Enter number 2 :");
    scanf("%d", &n2);
    while (1)
    {
        if (i % n1 == 0 && i % n2 == 0)
        {
            printf("%d", i);
            break;
        }
        i++;
    }
    return 0;
}
