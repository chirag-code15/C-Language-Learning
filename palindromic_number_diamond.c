#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = n; i >= 1; i--)
    {
        for (int j = n; j > i; j--)
        {
            printf("%d ", j);
        }
        for(int k =1 ; k<=(2*i-1);k++){
            printf("%d ",i);
        }
        for(int l = (i+1) ; l <=n ; l++){
            printf("%d ",l);
        }
        printf("\n");
    }
    for(int i = 1 ; i<=(n-1);i++){
        for(int j = n ; j >=(i+2);j--){
            printf("%d ",j);
        }
        for(int k = 1 ; k<=((2*i)+1);k++){
            printf("%d ",(i+1));
        }
        for(int l = (i+2);l<=n;l++){
            printf("%d ",l);
        }
        printf("\n");
    }

    return 0 ;  
}