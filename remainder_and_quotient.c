// To calculate the remainder and quotient of two numbers
#include<stdio.h>
int main(){
    int dividend , divisor;
    printf("Enter the Dividend:");
    scanf("%d",&dividend);
printf("Enter the divisor :");
scanf("%d",&divisor);
float quotient = (float)dividend/divisor;
int remainder = dividend % divisor;
printf("The quotient of the %d and %d is :%0.2f\n",dividend,divisor,quotient);
printf("The remainder of the %d and %d is :%d",dividend,divisor,remainder);
return 0 ; 
}