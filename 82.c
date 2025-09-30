// Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include<stdio.h>
int main(){
    char a [100] ; 
    int b  = 0 ; 
    scanf("%s",&a);
    char ch ; 
    ch = a[b] ; 
    while(ch!='\0'){
        printf("%c\n",ch);
        b++ ; 
       ch = a[b] ;  
    }
    return 0 ; 
}