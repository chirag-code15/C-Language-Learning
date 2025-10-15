/*
Sample Test Cases:
Input 1:
arr = [1, 3, 2, 4]
Output 1:
3, 4, 4, -1

Input 2:
arr = [6, 8, 0, 1, 3]
Output 2:
8, -1, 1, 3, -1

Input 3:
arr = [1, 2, 3, 5]
Output 3:
2, 3, 5, -1

Input 4:
arr = [5, 4, 3, 1]
Output 4:
-1, -1, -1, -1

*/
#include<stdio.h>
int main(){
    int n , count  = 0 ;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int arr[n] ; 
    for(int i = 0 ; i< n ; i++){
        printf("Enter element %d:",(i+1));
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i< n ; i++){
        count  = 0 ; 
        int a = arr[i] ; 
        if(i==(n-1)){
            printf("-1"); 
            break ; 
        }
        for(int j = i+1 ; j< n ; j++){
            if(a<arr[j]){
                printf("%d,",arr[j]);
                break ; 
            }
            else{
                count++ ; 
            }
            if(count == (n-i-1) ){
                printf("-1,");
                break ; 
            }
        }
    }

}