// Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include<stdio.h>
#include<string.h>
int main(){
    int count = 0  ; 
    char s1[100] , s2[100] ; 
    scanf("%s",s1); 
    scanf("%s",s2);
    char temp[strlen(s1)+1] ; 
    for(int i = 0 ; i<strlen(s1) ; i++ ){
        if(strcmp(s1,s2)==0){
            printf("Rotaion");
            break ; 
        }
        else{
            int k =1 ; 
            temp[0] = s1[0] ;  
            s1[0] = s1[1] ; 
            for(int j = strlen(s1)-1 ; j >0 ; j--){
              temp[k] = s1[j];
              s1[j] = temp [k-1] ; 
              k++ ; 
            }
        }
        count++ ; 
    }
    if(count==strlen(s1)){
        printf("Not rotation") ; 
    }
    return 0 ; 
}