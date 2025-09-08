// Q : program to diamomd of asterisks
#include<stdio.h>
int main(){
    int rows = 5;
    for(int i = 1;i<=5;i++){
        for(int j = 1 ; j <= (5-i);j++){
            printf(" ");
        }
        for(int k = 1;k<=(2*i-1);k++ ){
            printf("*");
        }
        printf("\n");
    }
    for (int i = rows - 1; i >= 1; i--) {
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0 ; 
}