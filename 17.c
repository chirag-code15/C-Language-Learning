// Q17: Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c;
    printf("enter the cofficient of the eqaution:");
    scanf("%lf%lf%lf", &a, &b, &c);
    double discriminant = b * b  -4 * a * c;
    if (discriminant > 0)
    {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("roots are real and different : %0.1lf, %0.1lf", root1, root2);
    }
    else if (discriminant == 0)
    {
        double root3 = -b / (2 * a);
        printf("real root exist of same value :%0.1lf ", root3);
    }
    else
    {
        printf("no real root exist");
    }
    return 0;
}
