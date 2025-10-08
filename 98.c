// Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char name[100], ch, initials_surname[100];
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    int count = 0, j = 0, k, breakk = 0;
    for (int i = 0; i < strlen(name); i++)
    {
        ch = name[i];
        if (ch == ' ')
        {
            count++;
        }
        else
        {
            continue;
        }
    }
    ch = name[0];
    while (ch != '\0')
    {
        while (count != 0)
        {
            initials_surname[j] = ch;
            j++;
            initials_surname[j] = '.';
            count--;
            j++;
            if (j == 2)
            {
                k = j - 1;
            }
            while (ch != ' ' && ch != '\0')
            {
                k++;
                ch = name[k];
            }
            if (ch != '\0')
            {
                ch = name[k + 1];
            }
            else
            {
            }
            k++ ; 
        }
        // printf("%d",k) ; 
        if (count == 0)
        {
            for (int i = k; i < strlen(name); i++)
            {
                initials_surname[j] = name[i] ;  
                j++ ; 
                breakk = 1;
            }
            if (breakk == 1)
            {
                break;
            }
        }
    }
    j++ ; 
    initials_surname[j] = '\0';
    printf("%s", initials_surname);
    return 0;
}