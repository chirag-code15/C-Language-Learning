// Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include<stdio.h>
int main(){
    int row , column , sum = 0  ; 
    printf("Enter the no of row :");
    scanf("%d",&row);
    printf("Enter the no of column :");
    scanf("%d",&column);
    int a[row] ; 
    int arr[row][column];
    for(int i = 0 ; i<row ; i++){
        for(int j = 0 ; j<column ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i = 0 ; i<row ; i++){
        for(int j = 0 ; j <column ; j++){
            sum += arr[i][j] ; 
        }
        a[i] = sum ; 
        sum = 0 ; 
    }
    for(int i = 0 ; i<row ; i++){
        printf("%d ",a[i]);
    }
    return 0 ; 
}