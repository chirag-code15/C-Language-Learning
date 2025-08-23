//Q6: Write a program to swap two numbers using a third variable 
#include<stdio.h>
int main(){ 
    int a , b , c ;
    printf("enter the number : ");
    scanf("%d %d", & a,  &b);
    c = a ;
    a = b ;
    b = c ;
    printf("numbers after swaping will be :%d %d  ", a , b );
    return 0 ; 
}