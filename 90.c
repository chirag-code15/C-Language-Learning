// Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include<stdio.h>
#include<string.h>
int main(){
    char a[100]; 
    int ch ; 
    fgets(a,sizeof(a),stdin);
    a[strcspn(a,"\n")] = '\0' ; 
    for(int i = 0 ; i<strlen(a);i++){
        ch = a[i] ; 
        if(ch>=65 &&ch<=90){
            ch += 32 ; 
            a[i] = ch ; 
        }
        else if(ch>=97 && ch<=122){
            ch-=32 ; 
            a[i] = ch ; 
        }
        else{
            continue;
        }
    }
    printf("%s",a);
    return 0 ; 
}