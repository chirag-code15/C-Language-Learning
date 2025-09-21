// Q63: Merge two arrays.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n1 , n2 , a ; 
    scanf("%d",&n1);
    int* arr1 = (int*)malloc(n1*sizeof(int));
    for(int i = 0 ; i<n1 ; i++){
        scanf("%d",&arr1[i]);
    }
    printf("Array 1:");
    for(int i = 0 ; i< n1 ; i++){
        printf(" %d ",arr1[i]);
    }
    printf("\n");
    scanf("%d",&n2);
    int* arr2 = (int*)malloc(n2*sizeof(int));
    for(int i = 0 ; i<n2 ; i++){
        scanf("%d",&arr2[i]);
    }
    printf("Array 2 :");
    for(int i = 0 ; i <n2 ; i++){
        printf(" %d ",arr2[i]);
    }
    printf("\n");
    a = n1 + n2 ;
    int k = 0 ;  
    arr1 = (int*)realloc(arr1 ,a*sizeof(int));
    for(int i = n1  ; i <a ; i ++ ){
        arr1[i] = arr2[k];
        k++ ; 
    }
    printf("Array after merging :");
    for(int i = 0 ; i<a ; i++){
        printf("%d ",arr1[i]);
    }
    free(arr1);
    free(arr2);
    return 0 ; 
}