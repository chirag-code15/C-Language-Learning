// Q64: Find the digit that occurs the most times in an integer number.
#include<stdio.h>
int main(){
    long long number ; 
    int  digit ,temp; 
    scanf("%lld",&number);
    temp = number ; 
    int b[10] = {0};
    while(number!=0){
        digit = number %10 ;
        b[digit] += 1 ;
        number = number /10 ;  
    }
    int max = b[0] ;
    int k = 0  ; 
    for(int i = 0 ; i<10 ; i++){
        if(b[i]>max){
            max = b[i] ; 
            k = i ; 
        }
    }
    printf("%d",k);
}
