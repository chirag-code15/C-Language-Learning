// Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include<stdio.h>
#include<string.h>
int main(){
    char a [100]  ; 
    int count_space = 0 , count_digit = 0 , count_special_charachter=0,count_alphabet=0,  b ; 
    fgets(a,sizeof(a),stdin);//This is adding extra new line charachter at the end of the string 
    a[strcspn(a, "\n")] = '\0';  // remove newline if present
    for(int i = 0 ; i<strlen(a) ; i++){
        b = a[i] ; 
        if(b==32){
            count_space ++;
        }
        else if(b>=48&&b<=57){
            count_digit++;
        }
        else if(b>=65&&b<=90 || b>=97&&b<=122){
            count_alphabet++;
        }
        else{
            count_special_charachter++;
        }
    }
    printf("Spaces :%d,",count_space);
    printf(" Digits :%d,",count_digit);
    printf(" Special :%d",count_special_charachter);
    return 0 ; 
}