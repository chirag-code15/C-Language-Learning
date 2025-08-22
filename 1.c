//Q1: Write a program to input two numbers and display their sum
#include<stdio.h>
int main(){
    int a , b ;
    printf("enter number 1 : ");
    scanf("%d", & a );
    printf("enter number 2 : ");
    scanf("%d", & b );
    int c = a+b;
    printf("%d", c);
    return 0 ; 
}