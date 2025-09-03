//Q27: Write a program to print the sum of the first n odd numbers.
#include<stdio.h>
int main(){
    int a,sum=0 ;
    printf("Enter the number upto which you want to print the sum :");
    scanf("%d",&a);
    for(int i ;i<=a;i++){
sum+=i;
    }
    printf("The sum of the first %d natural number is :%d",a,sum);
    return 0 ; 
}