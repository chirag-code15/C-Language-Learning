// Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include<stdio.h>
#include<string.h>
int main(){
    FILE* ptr ; 
    ptr = fopen("data.txt","a");
    char a[100];
    printf("Enter the data: ");
    fgets(a,sizeof(a),stdin) ;
    a[strcspn(a,"\n")] = '\0' ; 
    fprintf(ptr,"\n%s",a) ;  
    return 0 ; 
}