// Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>
void printWordWithLength(char str[], int len) {
    int wordLen = 0;
    char word[100];

    for (int i = 0, j = 0; i <= strlen(str); i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            word[j] = '\0';  // end the current word

            if (wordLen == len)
                printf("%s\n", word);

            j = 0;
            wordLen = 0;
        } else {
            word[j++] = str[i];
            wordLen++;
        }
    }
}
int main()
{
    char a[100], b, c;
    int count_space = 0, words_in_string, count_len_word = 0, i = 0;
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';
    // First we will caluclate the no of words
    for (int i = 0; i < strlen(a); i++)
    {
        b = a[i];
        if (b == ' ')
        {
            count_space++;
        }
    }
    words_in_string = count_space + 1;
    int word_length[words_in_string];
    // printf("%d",words_in_string);
    c = a[0];
    for (int l = 0; l < words_in_string; l++)
    {
        if (i == 0)
        {
        }
        else
        {
            i++;
            c = a[i];
        }
        while (c != ' ' && c != '\0')
        {
            count_len_word++;
            i++;
            c = a[i];
        }
        word_length[l] = count_len_word;
        count_len_word = 0;
    }
    // for (int k = 0; k < words_in_string; k++)
    // {
    //     printf("%d\t", word_length[k]);
    // }
    int max = word_length[0];
    for (int i = 1; i < words_in_string; i++)
    {
        if (max < word_length[i])
        {
            max = word_length[i];
        }
    }
    printWordWithLength(a,max) ; 
    return 0 ; 
}