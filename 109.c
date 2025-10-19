// Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
#include<stdio.h>
int main(){
    int n , sum = 0  ; 
    printf("Enter the size of an array:");
    scanf("%d",&n) ; 
    int arr[n] ; 
    for(int i = 0 ; i<n ; i++){
        printf("Enter element %d :",(i+1));
        scanf("%d",&arr[i]);
    }
    int k ; 
    printf("Enter the value of k:");
    scanf("%d",&k); 
    // Sorting of an array
    for(int i = 0 ; i<n-1 ; i++){
        for(int j = 0 ; j<n-1-i ; j++){
            if(arr[j]<arr[j+1]){
                int temp = arr[j] ; 
                arr[j] = arr[j+1] ; 
                arr[j+1] =temp ; 
            }
        }
    }
    for(int i = 0 ; i<k ; i++){
        sum+= arr[i] ; 
    }
    printf("%d",sum) ; 
}