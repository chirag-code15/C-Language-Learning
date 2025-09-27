// Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>
int main()
{
    int row, column , count = 0 ;
    printf("Enter no of row:");
    scanf("%d", &row);
    printf("Enter no of column:");
    scanf("%d", &column);
    if(row!=column){
        printf("False");
        return 0 ; 
    }
    int a = (row*column); 
    int matrix[row][column];
    int transpose[column][row];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            transpose[i][j] = matrix[j][i];
        }
    }
    for(int  i = 0 ; i <row ; i++  ){
        for(int j = 0 ; j<column ; j++){
            if(matrix[i][j]==transpose[i][j]){
            count++ ; 
            }
        }
    }
    if(count==a){
        printf("True");
    }
    else{
        printf("False");
    }
}