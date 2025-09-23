// Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n , number , index  , temp; 
    scanf("%d",&n);
    int* arr = (int*)malloc(n*sizeof(int));
    for(int i = 0 ; i< n ; i++){
        scanf("%d",&arr[i]);
    }
    printf("Array:");
    for(int i = 0 ; i<n ; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Enter the index number :");
    scanf("%d",&index);
    printf("Enter the number you want to insert:");
    scanf("%d",&number) ; 
    arr = realloc(arr , (n+1)*sizeof(int));
    arr[n] = 0 ; 
    for (int i = n ; i>index ; i--){
         arr[i] = arr[i-1] ; 
    }
    arr[index] = number; 
    for(int i = 0 ; i<=n ; i++){
        printf("%d ",arr[i]);
    }
    return 0 ; 
}