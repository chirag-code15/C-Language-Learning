//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h> 
int main(){
    int a ,b ;
    printf("enter number 1 : "); 
    scanf("%d", & a); 
    printf("enter number 2 : "); 
    scanf("%d", &b);
    int sum = a+b;
    int diff = a-b;
    int product = a*b; 
    float quotient = (float) a/b; 
    printf("sum of the number you entered is :%d\n" ,sum); 
    printf("difference of the number you enter is : %d \n" ,diff);
    printf("product of the number you entered is : %d\n", product);
    printf("quotient of the two number is : %0.2f\n",quotient); 
    return 0 ;
}
