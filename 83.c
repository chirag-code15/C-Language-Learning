// Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include<stdio.h>
#include<string.h>
int main(){
    char a[100]  , ch; 
    scanf("%s",a) ;
    int vowels = 0  , consonants = 0  ; 
    for(int i = 0 ; i<strlen(a);i++){
        ch = a[i];
        if(ch == 'a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
            vowels++;
        }
        else{
            consonants++ ; 
        }
    }
    printf("Vowels = %d\nConsonants = %d",vowels,consonants);
    return 0 ; 
}