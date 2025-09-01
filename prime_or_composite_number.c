// Program to check wheter is number is prime or composite.
#include<stdio.h>
int main(){
    int number,prime = 0  ;
    printf("Enter the number :");
    scanf("%d",&number);
    for(int i=2;i<number;i++){
        if(number%i==0)
        prime = 1;
    }
    if(prime ==1){
        printf("Number is composite");
    }
    else{
        printf("Number is prime");
    }
    return 0 ; 
}