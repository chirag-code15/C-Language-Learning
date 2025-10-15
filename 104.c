/*
Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/
#include <stdio.h>

int main() {
    int n = 0 , no_pivot = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int sum_left = 0, sum_right = 0;

        for (int j = 1; j < i; j++) {
            sum_left += j;
        }

        for (int j = i + 1; j <= n; j++) {
            sum_right += j;
        }

        if (sum_left == sum_right) {
            printf("%d\n", i);
            no_pivot = 1;
        }
    }

    if (no_pivot == 0) {
        printf("-1\n");
    }

    return 0;
}
