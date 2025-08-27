//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include<stdio.h>
int main (){
    char a ;  
    printf("enter the alphabet : ");
    scanf("%c",&a);
   if(a=='A' || a=='E' || a=='I' || a=='O' || a=='U' ||
       a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
    printf("it is vowel ");
   }
   else{
    printf("it is consonent");
   }
   return 0;
}

