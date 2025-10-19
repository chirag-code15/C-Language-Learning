/*
Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/
#include<stdio.h>
int main(){
    int n , product_right  = 1  , product_left = 1 ; 
    printf("Enter the size of an array:");
    scanf("%d",&n) ; 
    int arr[n] ; 
    for(int i = 0 ; i< n ;i++){
        printf("Enter element %d: ",(i+1)) ; 
        scanf("%d",&arr[i]) ; 
    }
    for(int i = 0 ; i<n ; i++){
        product_left = 1 ;
        product_right = 1 ; 
        for(int j = 0 ; j<i ; j++){
            product_left = arr[j] * product_left ; 
        }
        for(int k = (i+1) ; k<n ; k++){
            product_right = arr[k] *product_right ;
        }
        printf("%d\n",(product_left*product_right)) ; 
    }
} 