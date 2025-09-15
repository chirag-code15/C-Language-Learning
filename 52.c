#include<stdio.h>
int main(){
    for(int i =  1 ; i<=3 ; i++){
        printf("\n");
        for(int j = 1 ; j<=(2*i-1);j++){
            printf("*");
            printf("\n");
        }
    }
    for(int k = 2 ; k >=1 ; k--){
        printf("\n");
        for(int l = 1 ; l<=(2*k-1);l++){
            printf("*");
            printf("\n");
        }
    }
}