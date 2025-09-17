// Q55: Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>

int main() {
    int number, prime;
    printf("Enter the number : ");
    scanf("%d", &number);

    for (int i = 2; i <= number; i++) {
        prime = 0; // reset for every i

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                prime = 1; 
                break;   
            }
        }

        if (prime == 0) {
            printf("%d\n", i); 
        }
    }

    return 0;
}
