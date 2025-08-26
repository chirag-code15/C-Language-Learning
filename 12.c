#include<stdio.h>
int main(){
    int a ; 
    printf("enter the integer : ");
    scanf("%d",&a);
    if(a<0){
        printf("integer is negative ");
    }
    else if(a>0){
        printf("integer is positive ");
    }
    else {printf("integer is 0 ");
    }
    return 0 ; 
}