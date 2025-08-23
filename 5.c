//Q5: Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main(){
    float temp; 
    printf("enter the temperature in celcius : ");
    scanf("%f", & temp); 
    float result = (temp*1.8) + 32;
    printf("The temperature that you entered in celius will be : %0.2f ferhanite ", result);
    return 0 ;  
} 
