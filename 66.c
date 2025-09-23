// Q66: Insert an element in a sorted array at the appropriate position.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n , temp ; 
    scanf("%d",&n);
    int* arr = (int*)malloc(n*sizeof(int));
    for(int i = 0 ; i< n ; i++){
        scanf("%d",&arr[i]);
    }
    arr = realloc(arr,(n+1)*sizeof(int));
    scanf("%d",&arr[n]);
    for(int i = 0 ; i< n ; i++){
        for(int j = 0;j< n-i ;j++ ){
            if(arr[j] >arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1] ; 
            arr[j+1] = temp ; 
            }
        }
    }
    for(int i = 0 ; i<=n ; i++){
        printf("%d ",arr[i]);
    }
    
}