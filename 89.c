// Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include<stdio.h>
#include<string.h>
int main(){
char a[100] , ch; 
fgets(a,sizeof(a),stdin);
a[strcspn(a,"\n")] = '\0' ; 
scanf("%c",&ch) ; 
int frequency = 0 ; 
for(int i = 0 ; i<strlen(a) ; i++){
    if(ch==a[i]){
        frequency++ ; 
    }
}
printf("%d",frequency);
return 0 ; 
}