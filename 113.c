#include<stdio.h>
#include<limits.h>
int k_smallest_element(int arr[] , int n , int k ){
    for(int i = 0 ; i<n-1 ; i++){
        for(int j = 0 ; j<n-1-i ; j++){
            if(arr[j+1]<arr[j]){
                int temp = arr[j] ; 
                arr[j] = arr[j+1] ; 
                arr[j+1] = temp ; 
            }
        }
    }
    return arr[k-1] ;
}
int main(){
    int n ; 
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int arr[n] ; 
    printf("Enter the element of the array:\n");
    for(int i = 0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int k ; 
    printf("Enter the value of k:");
    scanf("%d",&k);
    int a = k_smallest_element(arr,n,k);
    printf("%d smallest element of an array :%d",k,a);
    return 0 ; 
}