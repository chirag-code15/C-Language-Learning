// Find all the roots of a quadratic equation ax^2 + bx + c = 0
#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    printf("Enter the coefficients: ");
    scanf("%d %d %d", &a, &b, &c);

    double d = b * b - 4 * a * c;

    if (d >= 0) {
        double root1 = (-b + sqrt(d)) / (2 * a);
        double root2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots of the equation are: %0.1lf %0.1lf\n", root1, root2);
    } else {
        printf("No real root exists\n");
    }

    return 0;
}


