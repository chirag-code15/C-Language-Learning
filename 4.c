//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h> 
#define PI 3.14
int main (){
    float radius ; 
    printf("enter the radius of the circle : ");
    scanf("%f" , & radius );
   float area = PI* radius * radius;
   float circumfrence = 2 * PI * radius;
   printf("area of the circle : %0.2f \n", area );
   printf("circumfrence of the circle : %0.2f", circumfrence);
   return 0 ;   

}