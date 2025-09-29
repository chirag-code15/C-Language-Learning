// Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>
int main()
{
    int row, column, a, b, k, x = 0, y, c, d;
    scanf("%d %d", &row, &column);
    y = row - 1;
    int matrix[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("%d ", matrix[0][0]);
    while (x == 0)
    {
        for (int j = 1; j < column; j++)
        {
            a = x, b = j;
            k = a + b;
            if ((a + b) % 2 != 0)
            {
                for (int i = 0; i <= k; i++)
                {
                    printf("%d ", matrix[a][b]);
                    a += 1;
                    b -= 1;
                }
            }
            else
            {
                for (int i = 0; i <= k; i++)
                {
                    printf("%d ", matrix[b][a]);
                    a += 1;
                    b -= 1;
                }
            }
        }
        x++;
    }
    for (int i = 1; i < row; i++)
    {
        int j = column - 1;
        c = i, d = j;
        if (c%2!=0)
        {
            for (int l = 0; l < y; l++)
            {
                printf("%d ", matrix[c][d]);
                c+= 1 ; 
                d-= 1 ; 
            }
        }
        else{
            for(int m = 0 ; m<y ; m++){
                printf("%d ",matrix[d][c]);
                d-=1 ;
                c+=1 ; 
            }
        }
        y--;
    }
}