// Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/
#include<stdio.h>
int main(){
    int row , column ; 
    printf("Enter the no of row :");
    scanf("%d",&row);
    printf("Enter the no of column :");
    scanf("%d",&column);
    int arr[row][column] ; 
    for(int i = 0 ; i<row ; i++){
        for(int j = 0 ; j<column ; j++){
            printf("arr[%d][%d] = ",i , j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Matrix :\n");
    for(int i = 0 ; i<row ; i++){
        for(int j = 0 ; j<column ; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int transpose[column][row] ;
    for(int i = 0 ; i<column ; i++){
        for(int j = 0 ; j<row; j++){
            transpose[i][j] = arr[j][i] ;
        }
    }
    printf("Transpose matrix :\n");
    for(int i = 0 ; i<column ; i++){
        for(int j = 0 ; j<row ; j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
}