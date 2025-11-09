#include<stdio.h>
int pairsum(int arr[],int n , int target){
    int first = 0 , last = (n-1) ; 
    while(first<=last){
        if(arr[first]+arr[last]==target){
            printf("%d %d",first,last) ; 
            return 0 ; 
        }
        if(arr[first]+arr[last]>target){
            last-- ; 
        }
        else{
            first++ ; 
        }
    }
    printf("-1,-1") ; 
    return 0 ; 
}
int main(){
    int n ; 
    printf("Enter the size of an array: ");
    scanf("%d",&n) ; 
    int arr[n] ; 
    printf("Enter the element of an array:\n") ; 
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]) ; 
    }
    int target ; 
    printf("Enter the value of target: ");
    scanf("%d",&target) ; 
    for(int i = 0 ; i<(n-1) ; i++){
        for(int j = 0 ; j<n-1-i ; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j] ; 
                arr[j] = arr[j+1] ; 
                arr[j+1] = temp ; 
            }
        }
    }
    pairsum(arr,n,target) ;
    return 0 ; 
}