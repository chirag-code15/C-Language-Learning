// to Calculate Percentage and Check Pass/Fail Based on Subject-wise Minimum Marks
#include <stdio.h>
int main()
{
    double a, b, c;
    printf("enter the marks of three subject:");
    scanf("%lf%lf%lf", &a, &b, &c);
    double percentage = (a + b + c) / 300 * 100;
    if (percentage >= 40)
    {
        if (a>=33 && b>=33 && c>=33)
        {
            printf("congratulation you are pass\nyou have got percantage:%0.2lf%%",percentage);
        }
        else
        {
            printf("sorry you are fail beacause you don't have minimum marks i.e.33 in one of the subject");
        }
    }

    else
    {
        printf("you are fail because you only got %0.2lf%%\nbetter luck nect time", percentage);
    }
    return 0;
}
