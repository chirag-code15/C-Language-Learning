// Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include<stdio.h>
#include<string.h>
int main(){
    char a[100] ; 
    scanf("%s",a);
    char b[100] ; 
    strcpy(b,a); 
    for(int i = 0 ; i<strlen(a)/2 ; i++){
        char temp = a[i] ; 
        a[i] = a[strlen(a)-1-i];
        a[strlen(a)-1-i] = temp ; 
    }
    int c = strcmp(b,a) ;
    if(c==0){
        printf("PALINDROME");
    }
    else{
        printf("NOT PALINDROME");
    }
    return 0 ; 
}