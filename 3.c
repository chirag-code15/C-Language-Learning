//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main(){ 
    int length , breadth ; 
    printf("enter the length of the triangle: ");
    scanf("%d", & length);
   printf("enter the breadth of the triangle: ");
    scanf("%d", & breadth);
    int result= length * breadth;  
    printf("area of the triangle is :%d ", result ); 
    return 0 ; 
}
