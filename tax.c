#include <stdio.h>
int main()
{
    int income;
    float tax;
    printf("Enter your income in rs:");
    scanf("%d", &income);
    if (income < 250000)
    {
        printf("Congratulation no tax for you\n");
    }
    else if (income >= 250000 && income <= 500000)
    {
        tax = (float)(5 * income) / 100;
        printf("There will be 5%% tax on your income\nSo, you have to pay:%0.2f", tax);
    }
    else if (income > 50000 && income <= 1000000)
    {
        tax = (float)(20 * income) / 100;
        printf("There will be 20%% tax on your income\nSo, you have to pay:%0.2f", tax);
    }
    else
    {
        tax = (float)(30 * income) / 100;
        printf("There will be 30%% tax on your income\nSo, you have to pay:%0.2f", tax);
    }
    return 0;
}