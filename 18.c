//Q18: Write a program to assign grades based on a percentage input.
#include<stdio.h>
int main (){
    int a ;
    char grade[]= {'A','B','C','D','E','F'};
    printf("enter your percentage:");
    scanf("%d",&a);
    if (a>=90){
        printf("your grade is :%c",grade[0]);
    }
    else if (a>=80){
        printf("your grade is :%c",grade[1]);
    }
    else if (a>=70){
        printf("your grade is :%c",grade[2]);
    }
    else if(a>=60){
        printf("your grade is :%c",grade[3]);
    }
    else if(a>=50){
        printf("your grade is:%c",grade[4]);
    }
    else{
        printf("your grade is :%c",grade[5]);
    }
    return 0 ; 
}