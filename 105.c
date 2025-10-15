/*
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/
#include<stdio.h>
int main(){
    int n ; 
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int arr[n] ;
    for(int i = 0 ; i < n ; i++){
        printf("Enter element %d :",(i+1));
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(int i = 1 ; i<n ;i++){
        if(arr[i]>max){
            max = arr[i] ; 
        }
    }
    int count = 0 ; 
    for(int i = 0 ;i <n ; i++){
        if(arr[i]==max){
            count ++ ; 
        }
    }
    if(count > n/2){
        printf("%d",max);
    }
    else{
        printf("-1");
    }
    return 0 ; 
}
