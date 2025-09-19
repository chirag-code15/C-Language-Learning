// Q60: Count positive, negative, and zero elements in an array.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n ; 
    scanf("%d",&n);
    int count_zero = 0 , count_positive = 0 , count_negative = 0  ; 
    int* arr = (int*)malloc(n*sizeof(int));
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i<n ; i++){
        if(arr[i]== 0 ){
            count_zero ++ ; 
        }
        else if(arr[i]<0){
            count_negative++;
        }
        else{
            count_positive++;
        }
    }
    printf("Positive = %d\n",count_positive);
    printf("negative = %d\n",count_negative);
    printf("Zero = %d\n",count_zero);
}