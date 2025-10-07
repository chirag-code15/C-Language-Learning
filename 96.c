// Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], ch, b[100];
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';
    int length = strlen(a), count = 0, k = 0, m;
    ch = a[k];
    do
    {
        while (ch != ' '&& ch!='\0')
        {
            count++;
            // b[0] = ch ;
            k++;
            ch = a[k];
        }
        if (count == 1)
        {
            b[k - 1] = a[k - 1];
        }
        else
        {
            int p = k -count ; 
            int l = k-count ; 
            for (int j = k - 1; j >= p; j--)
            {
                b[l] = a[j];
                l++ ; 
            }
        }
        count = 0;
        b[k] = ' ';
        k++;
        ch = a[k];
    } while (ch!='\0');
    b[k-1] = '\0' ; 
    
    printf("%s",b); 
}