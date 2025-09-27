// Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include<stdio.h>
int main(){
    int row , column; 
    printf("Enter no of row for matrix  :");
    scanf("%d",&row);
    printf("Enter no of column for matrix  :");
    scanf("%d",&column);
    int arr[row][column] ; 
    printf("Enter the element of matrix 1:\n");
    for(int i = 0 ; i<row ;i++){
        for(int j = 0 ; j<column ; j++){
            scanf("%d",&arr[i][j]);
        } 
    }
    int arr1[row][column];
    printf("Enter the element of matrix 2:\n");
    for(int i = 0 ; i<row ;i++){
        for(int j = 0 ; j<column ; j++){
            scanf("%d",&arr1[i][j]);
        } 
    }
    int arr2[row][column] ; 
    for(int i = 0 ; i<row ; i++){
        for(int j = 0 ; j<column ; j++){
            arr2[i][j] = arr[i][j] + arr1[i][j] ; 
        }
    }
    printf("Sum of matrix 1 and matrix 2 :\n");
    for(int i = 0 ; i<row ; i++){
        for(int j = 0 ; j<column ; j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
}