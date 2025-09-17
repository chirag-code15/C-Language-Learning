// Q56: Read and print elements of a one-dimensional array.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n ; 
    scanf("%d",&n);
    int* a = (int*)malloc(n*sizeof(int));
    for(int i = 0 ; i< n ; i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0 ; i< n ; i++){
        printf("%d ",a[i]);
    }
    return 0 ; 
}