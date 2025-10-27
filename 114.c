#include<stdio.h>
#include<string.h>
int main(){
    char a[100] ; 
    printf("Enter the string:");
    scanf("%s",a);
    int b = strlen(a) ; 
    for(int str = 0 ; str<b ; str++){
        for(int end = str ; end<b ; end++){
            for(int i = str ; i<=end ; i++){
                printf("%c",a[i]);
            }
            printf(" ");
        }
        printf("\n");
    }
}