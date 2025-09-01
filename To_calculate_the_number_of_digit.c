// Program to find out no of digit
#include<stdio.h>
int main(){
    int number ,count = 0;
    printf("enter the number :");
    scanf("%d",&number);
    while(number !=0){
     number = number/10;
     count++;
    } 
    printf("Your number has :%d digit ",count);
    return 0 ; 

}