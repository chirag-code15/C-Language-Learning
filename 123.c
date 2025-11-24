// Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include<stdio.h>
int main(){
    FILE* ptr ; 
    ptr = fopen("Sample.txt","r") ; 
    int count_charchter = 0 ; 
    int line = 1 ; 
    int count_word = 0 ;
    int in_word = 0 ;  
    while(1){
        char a = fgetc(ptr) ; 
        int ch = a ; 
        if(65<=ch&&ch<=90||97<=ch&&ch<=122){
            count_charchter++ ; 
        }
        if(ch==10){
            line++ ; 
        }
        if(a=='\n'||a==' '||a == '\t'){
            in_word = 0 ; 
        }
        else{
            if(in_word==0){
                in_word = 1 ; 
                count_word++ ; 
            }
        }
        if(a==EOF){
            break ; 
        }
    }
    printf("No of charachter: %d\n",count_charchter) ; 
    printf("No of line: %d\n",line) ; 
    printf("No of word: %d\n",count_word) ; 
    fclose(ptr) ; 
    return 0 ; 
}