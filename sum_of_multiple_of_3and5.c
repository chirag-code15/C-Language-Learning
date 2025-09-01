//Find the sum of all the multiples of 3 or 5 below 1000
#include<stdio.h>
int main(){
   int sum = 0 ;
   int i;
   for(i=1 ; i < 1000 ;  i++ ){
      if(i%3== 0 || i % 5 == 0 ){
         sum += i;
      }
   }
printf("sum of all multiple of 3 and 5 :%d ",sum);

return 0 ; 
}