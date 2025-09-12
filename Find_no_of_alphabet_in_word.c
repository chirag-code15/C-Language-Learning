#include <stdio.h>
int length(char x[])
{
    int count = 0;
    while (*x != '\0')
    {
        count += 1;
        x++;
    }
    return count;
}
int main()
{
    char a[100];
    char b;
    printf("Enter the word :");
    scanf("%s", a);
    printf("Which word count you want to find :");
    scanf(" %c", &b);
    int i = 0;
    int count = 0;
    for (int i = 0; i <= length(a); i++)
    {
        if (a[i] == b)
        {
            count++;
        }
    }
    printf("There are total of %d %c in the word",count , b );
    return 0;
}