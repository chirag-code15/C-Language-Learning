// Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include<stdio.h>
#include<string.h>
int main(){
    char a[100] ,ch ; 
    scanf("%s",a);
    int count , len = strlen(a)  ; 
    for(int i = 0 ; i<len;i++){
        ch = a[i] ; 
        count = 0 ; 
        for(int j = 0 ; j<len; j++){
            if(a[j]==ch){
                count ++ ; 
                if(count>1){
                    printf("%c",a[j]);
                    break;
                }
            }
            else{
                continue;
            }
        }
        if(count>1){
            break ; 
        }
    }
    return 0 ; 
}