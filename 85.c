// Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include<stdio.h>
#include<string.h>
int main(){
    char a [100] ; 
    scanf("%s",&a);
    for(int i = 0 ; i<strlen(a)/2;i++){
        char temp = a[i] ; 
        a[i] = a[strlen(a)-1-i];
        a[strlen(a)-1-i] = temp ; 
    }
    printf("%s",a);
    return 0 ; 
}