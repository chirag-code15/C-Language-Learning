//Q35: Write a program to print all factors of a given number.
#include<stdio.h>
int main(){
    int number ;
    printf("Enter a number :");
    scanf("%d",&number);
    for(int i = 1 ; i <= number ; i ++){
        if(number%i == 0 ){
            printf("%d\n",i);
        }
    }
    return 0 ; 
}
