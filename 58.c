// Q58: Find the maximum and minimum element in an array.
#include<stdio.h>
#include<stdlib.h>
int main(){
int number  , min , max = 0 ; 
scanf("%d",&number);
int* ptr = (int*)malloc(number* sizeof(int));
    for(int i = 0 ; i<number ; i++){
        scanf("%d",&ptr[i]);
    }
    min = ptr[0] ; 
    for(int i = 0 ; i<number ; i++){
        if(ptr[i]>max){
            max = ptr[i];
        }
        if(ptr[i]<min){
            min = ptr[i];
        }
    }
    printf("Maximum number is :%d\n",max); 
    printf("Minimum number is :%d\n",min); 
    return 0 ; 
}