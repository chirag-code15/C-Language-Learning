// Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include<stdio.h>
#include<string.h>
int main(){
    char a[100] , ch ;
    int b;  
    fgets(a ,sizeof(a),stdin); 
    for(int i = 0 ; i <strlen(a) ; i++ ){
        b = a[i] ; 
        if(b==32){
            printf(" ");
        }
        else if(b==10){
            continue  ; 
        }
        else{
            b-=32 ; 
            ch = b ; 
            printf("%c",ch);
        }
    }
    return 0 ; 
}