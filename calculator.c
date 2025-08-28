#include<stdio.h>
int main (){
    int a , b, c  ; 
    printf("enter two number : ");
    scanf("%d%d",&a,&b);
   int sum = a+b;
   int diff = a-b;
   int multiplication = a*b;
   float division = (float)a/b;
   printf("press 1 for sum of the number \n press 2 for differnce of the number \n press 3 for thw multiplication of the number \n press 4  for the division of the number \n");
   scanf("%d",&c);
  switch(c){
    case(1):printf("sum of the numbers is : %d",sum);
    break;
    case(2):printf("differnce of the two number is : %d",diff);
    break;
    case(3):printf("multiplication of the two number is %d",multiplication);
    break;
    case(4):printf("division of the two number is : %0.2f",division);
    break;
    default:printf("worng input please enter number from 1 to 4 ");
    break; 
  }
  return 0 ; 
}
