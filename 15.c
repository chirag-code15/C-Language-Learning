//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase    t, or special character.
#include<stdio.h>
int main(){
    char a ; 
printf("enter a charchter : ");
scanf("%c",&a);
if(a>= 'A' && a<= 'Z'){
    printf("it is an uppercase alphabet ");
}
else if (a>='a' && a<='z'){
    printf("it is a lowercase alphabet");
}
else if (a>= '0' && a<='9' ){
    printf("it is a digit ");
}
else{
    printf("it is a special charachter ");
}
return 0 ; 
}