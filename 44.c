// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main()
{
    int number;
    float first = 1, sum = 0;
    printf("Enter a term upto which you want to print :");
    scanf("%d", &number);
    if (number == 0)
    {
        printf("0");
    }
    else if (number == 1)
    {
        printf("%0.1f", first);
    }
    else
    { sum = 1.0 ; 
        for (int i = 2; i <= number; i++)
        {            
                first = (float)(2 * i - 1) / (2 * i);
                sum = sum + first;
            
        }
    }
    printf("Sum of the series upto term %d is :%0.2f", number, sum);
    return 0;
}
