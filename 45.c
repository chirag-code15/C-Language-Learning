// Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

// /*
// Sample Test Cases:
// Input 1:
// 3
// Output 1:
// Approximate sum: 1.56

// Input 2:
// 5
// Output 2:
// Approximate sum: 2.22

// */
#include<stdio.h>
int main(){
    int n ;
    float number  , sum = 0.0; 
    printf("Enter the term upto which you want the sum:");
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; i++){
        number = (float)(2*i)/(3+(4*(i-1)));
        sum = sum + number ; 
    }
    printf("Approximate sum:%0.2f",sum);
    return 0 ; 
}