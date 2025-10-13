// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy
/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include<stdio.h>
#include<string.h>
int main(){
    char date[100] , date1[100] ; 
    char month[100] ;
    int count  = 2 , k = 0  , l = 0   , m  , n= 6;  
    printf("Enter date in format dd/mm/yyyy:");
    scanf("%s",date);
    for(int i = 0 ; i<strlen(date);i++){  
        if(i ==3 || i == 4){
            month[k] = date[i] ; 
            k++ ; 
        }
    }
    month[k] = '\0' ; 
    if(strcmp(month , "01") == 0 ){
        strcpy(month,"Jan");
    }
    if(strcmp(month , "02") == 0 ){
        strcpy(month,"Feb");
    }
    if(strcmp(month , "03") == 0 ){
        strcpy(month,"Mar");
    }
    if(strcmp(month , "04") == 0 ){
        strcpy(month,"Apr");
    }
    if(strcmp(month , "05") == 0 ){
        strcpy(month,"May");
    }
    if(strcmp(month , "06") == 0 ){
        strcpy(month,"June");
    }
    if(strcmp(month , "07") == 0 ){
        strcpy(month,"July");
    }
    if(strcmp(month , "08") == 0 ){
        strcpy(month,"Aug");
    }
    if(strcmp(month , "09") == 0 ){
        strcpy(month,"Sept");
    }
    if(strcmp(month , "10") == 0 ){
        strcpy(month,"Oct");
    }
    if(strcmp(month , "11") == 0 ){
        strcpy(month,"Nov");
    }
    if(strcmp(month , "12") == 0 ){
        strcpy(month,"Dec");
    }
    for(int i = 0 ; i<(8+strlen(month));i++){
        if(i>=0 && i<=1){
            date1[i] = date[i] ; 
        }
        else if(i==2|| i== (3+strlen(month))){
            date1[i] = '-' ; 
        }
        else if(i >= (4+strlen(month))&&i<=(7+strlen(month))){
            date1[i] = date[n] ; 
            n++ ; 
        }
        else{
            date1[i] = month[l];
            l++ ; 
        }
        m = i ; 
        
    }
    date1[m+1] = '\0';
    printf("%s",date1); 
    return 0 ; 
}