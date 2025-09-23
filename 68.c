// Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n ; 
    scanf("%d",&n);
    int* arr = (int*)malloc(n*sizeof(int));
    for(int i = 0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    printf("Array :");
    for(int i =0  ; i< n ; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int index ;
    scanf("%d",&index);
    for(int i = index ; i<(n-1) ; i++){
        arr[i] = arr[i+1]; 
    }
    arr = (int*)realloc(arr,(n-1)*sizeof(int));
    for(int i = 0 ; i<n-1 ; i++){
        printf("%d ",arr[i]);
    }
    free(arr) ; 
}