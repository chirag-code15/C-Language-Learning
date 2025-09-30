// Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include<stdio.h>
int main(){
    char a[10] , b ; 
    int count = 0  ,c=0; 
    scanf("%s",&a);
    b = a[c] ; 
    while(b!='\0'){
        c++;
        b = a[c];
        count++; 
    }
    printf("%d",count);
}