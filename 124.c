// Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include<stdio.h>
int main(){
    char source[100] ; 
    char destination[100] ; 
    printf("Enter the source file: ");
    scanf("%s",source) ; 
    printf("Enter the destination file: ");
    scanf("%s",destination) ; 
    FILE*ptr ; 
    FILE*fptr ; 
    ptr = fopen(source,"r") ; 
    fptr = fopen(destination,"w") ; 
    while(1){
        char ch = fgetc(ptr) ; 
        if(ch==EOF){
            break ; 
        }
        fputc(ch,fptr) ; 
    }
    printf("Content written successfully") ; 
    fclose(ptr) ; 
    fclose(fptr) ; 
    return 0 ;
}