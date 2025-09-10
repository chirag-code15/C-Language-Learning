//Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include<math.h>
int main()
{
    int number, count = 0 , digit1 ,digit2 ;
    int a = 0 ;
    int c= 0 ;  
    printf("Enter a number :");
    scanf("%d",&number);
    int temp = number ; 
    //count digit 
    while(number!= 0){
        number = number/ 10 ; 
        count ++ ; 
    }
    digit1 = temp/pow(10,(count-1));
    digit2 = temp%10 ;
    a += digit2 ; 
    a+=digit1*pow(10,count-1);
    // printf("%d\n",a);
    int b = temp - a ; 
    c += digit1 ; 
    c += digit2 * pow(10 , count -1);
    // printf("%d\n",c);
    int d = c + b ; 
    printf("The number after reversing the first and last digit is:%d",d);
    return 0 ; 
}