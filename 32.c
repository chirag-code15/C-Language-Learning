// Q32: Write a program to check if a number is a palindrome.
#include<stdio.h>
int main(){
    int number , digit , reverse  = 0, orignal ;
    printf("Enter the number :");
    scanf("%d",&number );
    orignal = number ; 
    while (number!=0){
        digit = number %10; 
        number = number / 10;
       reverse = (reverse * 10)+digit;
    }
    if (orignal == reverse ){
        printf("This number is palindrom ");
    }
    else {
        printf("This number is not palindrom");
    }
    return 0 ; 
}
