// Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include<stdio.h>
#include<string.h>
int main(){
    char a [100] ; 
    fgets(a,sizeof(a),stdin);
    a[strcspn(a,"\n")] = '\0'; 
    for(int i = 0 ; i<strlen(a);i++){
        int b = a[i] ; 
        if(b==32){
            a[i] = '-' ; 
        }
    }
    printf("%s",a);
    return 0 ; 
}