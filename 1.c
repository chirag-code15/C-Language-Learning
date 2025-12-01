// Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
#include<stdio.h>
int main(){
    FILE*ptr = fopen("Text.txt","r") ; 
    int count_vowel = 0 ; 
    int count_consonent = 0 ; 
    while(1){
        int ch = fgetc(ptr) ; 
        if(ch==EOF){
            break ; 
        }
        if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'){
            if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
                count_vowel ++ ; 
            }
            else{
                count_consonent ++; 
            }
        }
    }
    printf("Count of vowel : %d\n",count_vowel) ; 
    printf("Count of consonent: %d",count_consonent) ; 
    fclose(ptr) ; 
}