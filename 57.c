// Q57: Find the sum of array elements.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int number , sum = 0 ; 
    scanf("%d",&number);
    int* ptr = (int*)malloc(number*sizeof(int));
    for(int i= 0 ; i<number ;i++){
        scanf("%d",&ptr[i]);
    }  
    for(int i= 0 ; i<number ; i++){
        sum+= ptr[i] ; 
    }
    printf("%d",sum);
    return 0 ; 
}