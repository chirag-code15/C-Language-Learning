// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main()
{
    int number1, number2;
    char choice;
    int sum, diff, multiplication,remainder;
    float division;
    printf("Enter number 1 :");
    scanf("%d", &number1);
    printf("Enter number 2 :");
    scanf("%d", &number2);
    printf("Press + for addition\nPress - for subtraction\nPress * for multiplication\nPress / for division\nPress %% for remainder\n");
    scanf(" %c", &choice);
    switch (choice)
    {
    case '+':
        sum = number1 + number2;
        printf("%d", sum);
        break;
    case '-':
        diff = number1 - number2;
        printf("%d", diff);
        break;
    case '*':
        multiplication = number1 * number2;
        printf("%d", multiplication);
        break;
    case '/':
        division = (float)number1 / number2;
        printf("%0.2f", division);
        break;
    case '%':
        remainder =  number1% number2;
        printf("%d", remainder);
        break;
    default:
        printf("please enter valid input ");
        break;
    }
    return 0;
}
