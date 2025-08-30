// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side
#include <stdio.h>
int main()
{
    int side1, side2, side3;
    printf("enter the sides of the triangle:");
    scanf("%d%d%d", &side1, &side2, &side3);
    if (side1 == side2 && side2 == side3 && side1 == side3)
    {
        printf("Triangle is Equilateral\n");
    }
    else if (side1 != side2 && side2 != side3 && side1 != side3)
    {
        printf("Triangle is Scalene\n");
    }
    else
    {
        printf("triangle is isosceles\n");
    }
    return 0;
}