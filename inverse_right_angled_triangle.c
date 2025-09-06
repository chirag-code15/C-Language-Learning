// Program to print a inverse right angle triangle
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i == 1)
        {
            for (int j = 1; j <= 5; j++)
            {
                printf("%d," ,j);
            }
            printf("\n");
        }
        else if (i==2){
            for(int k = 1 ; k <=4 ;k++){
                printf("%d,",k);
            }
            printf("\n");
        }
        else if (i==3){
            for(int l = 1 ; l <=3 ;l++){
                printf("%d,",l);
            }
            printf("\n");
        }
        else if (i==4){
            for(int m = 1 ; m <=2 ;m++){
                printf("%d,",m);
            }
            printf("\n");
        }
        else{
            printf("1");
        }
        
    }
    return 0 ; 
}