//Q39: Write a program to find the product of odd digits of a number.
#include<stdio.h>
int main(){
    int number , digit, product = 1 ; 
    printf("Enter a number :");
    scanf("%d",&number);
   while (number!=0){
        digit = number%10;
        if(digit%2 != 0 ){
            product = product*digit;
        }
        number = number/10;
    }
    if(product!=1){
    printf("Product of the odd  digit of the number is :%d",product);
    }
    else{
        printf("There are no odd digits in the number ");
    }
    return 0 ; 
}