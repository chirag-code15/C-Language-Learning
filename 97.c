// Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include<stdio.h>
#include<string.h>
int main(){
    int i = 0 , k = 2  ; 
    char name[100] , ch, initials[100];
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")] = '\0' ; 
    ch = name[0] ;
    while(ch!='\0'){
        initials[i] = ch  ; 
        i++ ; 
        initials[i] = '.';
        i++ ;  
        if(i==2){
        k = i-1; 
        }
        while(ch!=' '&&ch!='\0'){
            k++ ; 
            ch = name[k] ; 
        }
        if(ch!='\0'){
            ch = name[k+1] ; 
        }
        else{}
    }
    initials[i] = '\0';
    printf("%s",initials) ; 
    return 0 ; 
    
}