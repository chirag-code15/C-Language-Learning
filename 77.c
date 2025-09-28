// Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include<stdio.h>
int main(){
    int row , column  , k=0 , count = 0  ;
    printf("Enter number of row:");
    scanf("%d",&row);
    int arr[row] ;  
    printf("Enter number of column:");
    scanf("%d",&column);
    int matrix[row][column];
    for(int i = 0 ;i<row ;i++){
        for(int j = 0 ;j<column ; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i = 0 ;i<row ; i++){
        for(int j = 0 ;j<column ; j++){
            if(i==j){
                arr[k] = matrix[i][j] ; 
                k++ ; 
            }
        }
    }
    for(int i = 0 ; i<k ; i++){
        int a = arr[i] ; 
        for(int j = i+1 ; j<k ; j++){
            if(arr[j]==a){
                printf("False");
                return 0 ; 
            }
        }
    }
    printf("True") ; 
    return 0 ; 
}