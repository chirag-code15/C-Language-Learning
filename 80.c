// Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>
int main()
{
    int row, column, sum, k = 0;
    printf("Enter no of row :");
    scanf("%d", &row);
    printf("Enter no of column:");
    scanf("%d", &column);
    int matrix1[row][column];
    int matrix2[column][row];
    int product_matrix[row][row];
    printf("Enter the element for matrix 1:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter the element for matrix 2:\n");
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row;j ++)
        {
            for (int k = 0; k < column; k++)
            {
                sum+= matrix1[i][k] * matrix2[k][j];
            }
            product_matrix[i][j] = sum ; 
            sum = 0 ; 
        }
    }
    printf("Product of the matrix:\n");
    for(int i = 0 ; i<row ; i++ ){
        for(int j = 0 ; j <row ; j++){
            printf("%d ",product_matrix[i][j]);
        }
        printf("\n");
    }
}