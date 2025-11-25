// Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include<stdio.h>
#include<string.h>
int main(){
    FILE* ptr = fopen("input.txt","r") ; 
    FILE* ptr1 = fopen("output.txt","w") ; 
    char a[100] ; 
    while(fgets(a,sizeof(a),ptr)!=NULL){
        for(int i = 0 ; i<strlen(a) ; i++){
            if(a[i]>='a'&&a[i]<='z'){
                a[i] -= 32 ; 
            }
        }
        fprintf(ptr1,a) ; 
    } 
    fclose(ptr1) ; 
    fclose(ptr) ; 
    return 0 ; 
}