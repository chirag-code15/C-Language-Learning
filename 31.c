// Q31: Write a program to take a number as input and print its equivalent binary representation.
#include<stdio.h>
int main(){
    int number,digit ;
    int a[32]; 
    int i = 0 ; 
    printf("Enter a number :");
    scanf("%d",&number );
    while (number>0){
        digit = number %2;
        number = number / 2 ; 
        a[i]=digit;
        i++;
    }
    for(int j = i-1;j >= 0 ;j -- ){
        printf("%d",a[j]);
    }
    return 0 ; 
}