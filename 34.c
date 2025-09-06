//Q34: Write a program to check if a number is prime.
#include<stdio.h>
int main(){
    int number,count = 0  ;
    printf("Enter the number :");
    scanf("%d",&number );
    if(number == 1 ){
        printf("Number is nor prime nor composite ");
        return 1 ; 
    }
    for (int i = 2 ; i<number ; i++){
        if(number % i == 0 ){
           count ++;
            break ; 
        }
    }
    if(count>0){
        printf("%d is composite ",number);
    }
    else{
        printf("%d is prime",number); 
    }
    return 0 ; 
}
