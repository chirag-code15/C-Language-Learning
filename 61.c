#include<stdio.h>
#include<stdlib.h>
int main(){
    int count = 0 ; 
    int n  , number; 
    scanf("%d",&n);
    int* arr = (int*)malloc(n*sizeof(n));
    for(int i = 0 ; i <n ; i++){
        scanf("%d",&arr[i]);
    } 
    printf("Enter a number you want to check :");
    scanf("%d",&number);
    for(int i = 0 ; i<n ; i++){
        if(arr[i]==number){
            printf("found the number at index %d",i);
            count++;
            break ; 
        }
    }
    if(count==0){
        printf("-1");
    }
    free(arr);
    return 0 ; 
}