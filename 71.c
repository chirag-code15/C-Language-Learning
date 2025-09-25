#include<stdio.h>
int main(){
    int row , column ; 
    printf("Enter no of row:");
    scanf("%d",&row);
    printf("Enter no of column:");
    scanf("%d",&column);
    int arr[row][column] ; 
    for(int i = 0 ; i<row ; i++){
        for(int j = 0 ; j<column ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i = 0 ; i<row ; i++){
        for(int j = 0 ; j<column ; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
}