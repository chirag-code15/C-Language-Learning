#include<stdio.h>
#include<limits.h>
int main(){
    int n ; 
    printf("Enter the size of an array :");
    scanf("%d",&n);
    int arr[n] ; 
    printf("Enter the elements of an array :\n");
    for(int i = 0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int current_sum = 0 ;
    int max_sum  = INT_MIN ; 
    for(int i = 0 ; i<n ; i++){
        current_sum += arr[i] ; 
        if(max_sum<current_sum){
            max_sum = current_sum ; 
        }
        if(current_sum<0){
            current_sum = 0 ; 
        }
    }
    printf("Mx sum of an subarray: %d",max_sum);
    return 0 ; 
}   
