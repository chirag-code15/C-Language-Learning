//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
#include<math.h>
int main(){
    //taking input of user 
    double principal;
    printf("enter the pricipal in ruppes : ");
    scanf("%lf",&principal);
double  rate ; 
    printf("enter the rate (%%) : ");
    scanf("%lf",&rate);
    double time;
    printf("enter the time (in month) : ");
    scanf("%lf",& time);
   double SI , CI  ;
   SI = (principal*rate*time)/100;
   CI = principal * pow(1+rate/100, time);
   printf("simple interest and compound interest are respectively :%0.1lf ,%0.1lf",SI,CI);
   return 0 ; 
}