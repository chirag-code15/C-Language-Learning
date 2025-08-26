//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
int main(){
    int a;
    printf("write the seconds : ");
    scanf("%d",&a);
    int hours = a/3600 ;
    int minutes = (a%3600)/60;
    int seconds = a%60;
    printf("time in hours : minutes: seconds format is = %d : %d : %d ",hours, minutes , seconds);
    return 0 ; 
}