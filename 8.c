//Q8: Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
 int main(){
    int sum = 0; 
    int a , b ;
    printf("enter the number upto which you want to find out the sum : ");
    scanf("%d",&a);
    for(b=1;b<=a;b++){ sum += b ;
    }
      printf("sum of the numbers upto n will be : %d ",sum);
    return 0 ;
 }

