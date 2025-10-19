/*
Sample Test Cases:
Input 1:
arr = [1, 3, 2, 4]
Output 1:
-1, -1, 3, -1

Input 2:
arr = [6, 8, 0, 1, 3]
Output 2:
-1, -1, 8, 8, 8

Input 3:
arr = [1, 2, 3, 5]
Output 3:
-1, -1, -1, -1

Input 4:
arr = [5, 4, 3, 1]
Output 4:
-1, 5, 4, 3

*/
#include<stdio.h>
int main(){
    int n  , count = 0 ; 
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int arr[n] ; 
    for(int i = 0 ; i< n ; i++){
        printf("Enter the element %d :",(i+1));
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i<n ; i++){
        count  = 0 ; 
        if(i==0){
            printf("-1,");
            continue  ; 
        }
        int a = arr[i]; 
        for(int j = (i-1) ; j>=0 ; j--){
            if(arr[j]>a){
                printf("%d",arr[j]);
                break ;
            }
            count ++ ; 
        }
        if(count == i ){
            printf("-1");
            if(i==0){
                printf(",");
            }
        }
        if(i!=(n-1)&&i!=0){
            printf(",");
        }
    }
    return 0 ; 
}