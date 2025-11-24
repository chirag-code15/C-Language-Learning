// Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

/*
Sample Test Cases:
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23

*/
#include<stdio.h>
int main(){
    FILE *ptr ;
    ptr = fopen("1.txt","r") ; 
    if(ptr==NULL){
        printf("No file found");
        return 0 ; 
    }
    char ch = getc(ptr) ; 
    while(ch!=EOF){
        printf("%c",ch) ; 
        ch = getc(ptr) ; 
    }
    fclose(ptr) ; 
    return 0 ; 
}