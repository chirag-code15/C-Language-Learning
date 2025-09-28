// Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include<stdio.h>
int main(){
    int row , column  , sum = 0 ; 
    printf("Enter number of row:");
    scanf("%d",&row);
    printf("Enter number of column:");
    scanf("%d",&column);
    int matrix[row][column];
    for(int i = 0 ;i<row ;i++){
        for(int j = 0 ;j<column ; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i = 0 ; i<row ; i++){
        for(int j = 0 ;j<column ; j++){
            if(i==j){
                sum+= matrix[i][j];
            }
        }
    }
    printf("Sum of the diagnols of mtrix :%d",sum);
    return 0 ; 
}