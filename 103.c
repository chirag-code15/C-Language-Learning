// Q103: Write a Program to take an array of integers as input, 
// calculate the pivot index of this array. 
// The pivot index is the index where the sum of all the numbers strictly to the 
// left of the index is equal to the sum of all the numbers strictly to the index's right. 
// If the index is on the left edge of the array, 
// then the left sum is 0 because there are no elements to the left. 
// This also applies to the right edge of the array. Print the leftmost pivot index. 
// If no such index exists, print -1.
 
// Sample Test Cases:
// Input 1:
// nums = [1,7,3,6,5,6]
// Output 1:
// 3

// Input 2:
// nums = [1,2,3]
// Output 2:
// -1

// Input 3:
// nums = [2,1,-1]
// Output 3:
// 0
#include<stdio.h>
int main(){
    int n , sum , sum1 , no_pivot =0  ; 
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        printf("Enter the element %d: ",(i+1));
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ;i<n ; i++){
        sum = 0 ; 
        sum1 = 0 ; 
        if(i==0){
            for(int j = 1 ; j<n ; j++){
                sum+= arr[j]; 
            }
            if(sum==0){
                printf("%d",i);
                no_pivot = 1 ;
            }
        }
        else if(i==(n-1)){
            for(int k = n-2 ;k>=0 ; k-- ){
                sum += arr[k] ; 
            }
            if(sum==0){
                printf("%d",i);
                no_pivot = 1 ;
            }
        }
        else if(i>=2 && i<(n-1)){
            for(int l = (i+1) ; l<n ; l++){
                sum+= arr[l];
            }
            for(int m = (i-1); m>=0 ; m--){
                sum1+=arr[m];
            }
            if(sum1==sum){
                printf("%d",i);
                no_pivot = 1 ;
            }
        }
    }
    if(no_pivot==0){
        printf("-1");
    }
    return 0 ; 
}
