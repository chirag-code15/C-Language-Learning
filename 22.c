// Q22: Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main()
{
    int cost_price;
    int selling_price;
    float profit , loss ; 
    printf("enter the cost price:");
    scanf("%d", &cost_price);
    printf("enter the selling price:");
    scanf("%d",&selling_price);
    if(cost_price<selling_price){
    profit = (float)(selling_price-cost_price)/(cost_price) * 100;
    printf("Profit of:%d\nPROFIT(%%)= %0.2f",selling_price-cost_price,profit);
    }
    else if (cost_price>selling_price){
        loss = (float)(cost_price-selling_price)/(cost_price)*100;
        printf("Loss of:%d\nLOSS(%%):%0.2f",cost_price-selling_price,loss);
    }
    else{
        printf("No loss no profit ");
    }
}
