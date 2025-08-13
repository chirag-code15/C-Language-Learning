#include<stdio.h>
#define PI 3.14
int main() {
    float radius ,area ;
    printf("enter the radius of the circle: ");
    scanf("%f", & radius);
    area = PI * radius * radius; 
printf("Area of the circle is: %0.2f",area);
return 0 ;

}