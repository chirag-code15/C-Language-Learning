// Q28: Write a program to print the product of even numbers from 1 to n.
#include<stdio.h>
int main(){
    int number;
    long long product =1;
    printf("Enter the number upto which you want the product of even number :");
    scanf("%d",&number);
    for(int i = 1;i<=number ;i++){
        if(i%2==0){
            product *= i;
        }
    }
    printf("Product of all even numbers upto %d :%lld",number,product);
    return 0 ; 
}