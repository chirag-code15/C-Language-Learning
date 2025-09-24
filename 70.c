// Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include<stdio.h>
int main(){
    int n   ; 
    scanf("%d",&n); 
    int temp [n-1] ; 
    int arr[n] ; 
    for(int i = 0 ; i< n ; i++){
        scanf("%d",&arr[i]);
    }
    printf("Array:");
    for(int i = 0 ; i<n ; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int k  ; 
    printf("Enter the term upto which you want to shift :");
    scanf("%d",&k); 
    while(k!=0){
        temp[0] = arr[1] ; 
        arr[1] = arr[0] ;  
        for(int i = 1 ; i<n-1 ; i++){
            temp[i] = arr[i+1] ; 
            arr[i+1] = temp[i-1] ; 
            if(i==n-2){
            arr[0] =temp [n-2]  ;
            } 
        }
            k-- ; 
        } 
        printf("Shifted array:");  
    for(int i = 0 ; i<n ; i++){
        printf("%d ",arr[i]);
    }
}
