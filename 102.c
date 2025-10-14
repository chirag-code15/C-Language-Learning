// Q102: Write a Program to take a sorted array arr[] and an integer x as input, 
// find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. 
// This element is called the ceil of x. If such an element does not exist, 
// print -1. Note: In case of multiple occurrences of ceil of x, 
// return the index of the first occurrence.

/*
Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2

Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1

Input 3:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
Output 3:
0

Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 4:
2

*/
#include<stdio.h>
int main(){
    int n ,x ,count = 0 , found = 0  ; 
    printf("Enter a size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        printf("Enter element %d:",(i+1));
        scanf("%d",&arr[i]);
    }
    printf("Enter the value of x:"); 
    scanf("%d",&x);
    // First we have to check wheather x exist or not 
    for(int i = 0 ; i<n ; i++){
        if(arr[i]==x){
            printf("%d",i);
            found = 1 ; 
            break ; 
        }
    }
    if(found!=1){
        for(int i=0 ; i<n ; i++){
            if(arr[i]>x){
                printf("%d",i);
                found = 1 ; 
                break ; 
            }
        }
    }
    if(found!=1){
        printf("-1");
    }
    return 0 ; 
}
