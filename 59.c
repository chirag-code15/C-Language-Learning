// Q59: Count even and odd numbers in an array.
#include<stdio.h>
#include<stdlib.h>
int c_e , c_o ; 
int main(){
    int number  ;  
    scanf("%d",&number);
    int* arr = (int*)malloc(number*sizeof(int));
    for(int i = 0 ; i <number ; i++ ){
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i<number ; i++){
        if(arr[i]%2==0){
            c_e++;
        }
        else{
            c_o++ ; 
        }
    }
    printf("Even = %d\n",c_e);
    printf("Odd = %d",c_o);
    return 0 ; 
}