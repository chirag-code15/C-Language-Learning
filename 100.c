#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int n = strlen(str);

    printf("\nAll substrings of %s are:\n", str);

    // i = starting index
    for (int i = 0; i < n; i++) {
        // j = ending index
        for (int j = i; j < n; j++) {
            // print characters from i to j
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf(",");
        }
    }

    return 0;
}
