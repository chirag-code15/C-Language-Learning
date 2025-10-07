// Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include<stdio.h>
#include<string.h>
int main(){
    char word[100] , word1[100] ; 
    scanf("%s",word);
    scanf("%s",word1);
    char ch ; 
    int count = 0  , b = strlen(word); 
    for(int i = 0 ; i<b; i++){
        ch = word[i] ;
        for(int j = 0 ; j<strlen(word) ; j++){
            if(ch==word1[j]){
                count++ ; 
                break ; 
            }
        }
    }
    if(count==b){
        printf("Anagram");
    }
    else{
        printf("not anagram");
    }
    return 0 ; 
}