#include <stdio.h>
int fibonacci_series(int x);
int fibonacci_series(int x){
    if((x==1)||(x==2)){
        return (x-1);
    }
    return fibonacci_series(x-1)+fibonacci_series(x-2);
}
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d", &n);
    int count = 1 ;
    for (int i = 1; i <= n; i++){
        for(int j = 1 ;j<=i ; j++){
           printf("%d,",fibonacci_series(count));
           count++ ; 
        }
        printf("\n");
    }
    return 0 ; 

}
