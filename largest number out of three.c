//find the largest among three different numbers entered by user
#include<stdio.h>
int main (){
    int a , b , c ;
    printf("enter three numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){printf("the largest number is:%d ",a);}
    if(b>a && b>c){printf("the largest number is : %d", b );}
    else{printf("the largest number is : %d",c);}
    return 0 ; 
}