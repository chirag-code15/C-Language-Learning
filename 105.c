// Q : TO Find out wheather two strings are anagram or not.
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    char t[100];
    int arr[122] = {0};
    printf("Enter the string s: ");
    scanf("%s", s);
    printf("Enter the string t: ");
    scanf("%s", t);
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        int a = s[i];
        arr[a] += 1;
    }
    for (int i = 0; i < n; i++)
    {
        int a = t[i];
        arr[a] -= 1;
    }
    int count = 0;
    for (int i = 0; i < 122; i++)
    {
        if (arr[i] == 0)
        {
            count++;
        }
    }
    if(count==122){
        printf("Anagram") ; 
    }
    else{
        printf("Not Anagram") ;  
    }
    return 0;
}