#include<stdio.h>
#include<stdlib.h>
void reverse(int x[] , int y){
    int temp ; 
    for(int i = 0 ; i<y/2 ; i++){
        temp = x[i];
        x[i] = x[y-1-i];
        x[y-1-i] = temp;
    }
}
int main(){
    int n ; 
    scanf("%d",&n);
    int* arr = (int*)malloc(n*sizeof(int));
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    printf("Array before reverse:\n");
    for(int i = 0 ; i < n ; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    reverse(arr , n);
    printf("Array after reverse :\n");
    for(int i = 0 ; i <n ;i++ ){
        printf("%d ",arr[i]);
    }
    free(arr);
    return 0 ; 
}