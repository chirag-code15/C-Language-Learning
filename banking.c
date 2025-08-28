//banking system
#include<stdio.h>
int main(){
    int amount = 10000;
    int deposit ;
     int  a , withdraw;
    printf("welcome to the bank\n");
    printf("press 1 to check the amount \npress 2 for the deposit\npress 3 for withdraw the money \npress 4 for others\n");
    scanf("%d",&a);
switch(a)
{
    case 1 :printf("the amount in your account is :%d ", amount);
    break;
    case 2 :printf("enter the amount you want to deposit : ");
           scanf("%d",&deposit);
           printf("deposit succesful \ntotal amount after depositing is : %d",amount + deposit );
           break;
    case 3 : printf("enter the amount you want to withdrawn: ");
    scanf("%d",&withdraw);
     if(withdraw > amount){
        printf("amount insufficient");
     }
     else{
        printf("withdraw succesfull\remaining amount :%d",amount - withdraw);
     }
     break;
     case 4 : printf("thanks for using banking system\nHave a good day !");
     break;
}
return 0 ; 
}