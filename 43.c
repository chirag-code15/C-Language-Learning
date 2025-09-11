// Q43: Write a program to check if a number is a strong number.
#include <stdio.h>
int main()
{
    int number, temp, digit, factorial = 1 , sum = 0;
    printf("Enter a number :");
    scanf("%d", &number);
    temp = number;
    while (number != 0)
    {
        digit = number % 10;
        for (int i = 1; i <= digit; i++)
        {
            factorial = factorial*i;
        }
        sum = sum+factorial ; 
        number = number /10;
        factorial = 1 ; 
    }
    if(sum==temp){
        printf("Strong number");
    }
    else{
        printf("Not strong number ");
    }
}
