// Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include<stdio.h>
#include<string.h>
int main(){
    char a[100] ; 
    scanf("%s",a);
    for(int i = 0 ; i<strlen(a);i++){
        int ch = a[i] ; 
        if(ch==65||ch==69||ch==73||ch==79||ch==85||ch==97||ch==101||ch==105||ch==111||ch==117){
            for(int j = i ; j< strlen(a); j++){
                a[j] = a[j+1] ;
            }
            i-- ; 
        }
    }
    printf("%s",a);
    return 0 ; 
}