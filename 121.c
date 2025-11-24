// Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

/*
Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/
#include<stdio.h>
int main(){
    FILE* ptr ; 
    ptr = fopen("info.txt","w+") ;
    char name[100] ; 
    printf("Enter the name: ");
    scanf("%s",name) ; 
    int age ; 
    printf("Enter the age: ");
    scanf("%d",&age) ; 
    fprintf(ptr,"Name: %s\n",name) ;
    fprintf(ptr,"Age: %d\n",age) ; 
    fclose(ptr) ; 
    printf("File created successfully! Data written to info.txt") ; 
    return 0 ; 
}