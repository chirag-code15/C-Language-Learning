// Q36: Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>
int main()
{
    int n1, n2, hcf = 1;
    printf("Enter number1 : ");
    scanf("%d", &n1);
    printf("Enter number2 : ");
    scanf("%d", &n2);

    int min = (n1 < n2) ? n1 : n2;

    for (int i = min; i >= 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
            break;
        }
    }

    printf("HCF of %d and %d is %d", n1, n2, hcf);
    return 0;
}
