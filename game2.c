#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int player, computer;
    srand(time(0));
    computer = (rand() % 3 + 1);
    printf("Choose 1 for rock \nChoose 2 for paper \nChoose 3 for scissors \n");
    scanf("%d", &player);
    switch (player)
    {
    case (1):
        if (computer == 2)
        {
            printf("oops1 you lost cause computer chose paper");
            break;
        }
        else if (computer == 1)
        {
            printf("That was a draw computer also chose rock ");
            break ; 
        }
        else
        {
            printf("congrats ! you won cause computer chose scissors ");
            break; 
        }
    case (2):
        if (computer == 2)
        {
            printf("That was a draw computer also chose paper ");
            break;
        }
        else if (computer == 1)
        {
            printf("congrats ! you won cause computer chose rock ");
            break;
        }
        else
        {
            printf("oops1 you lost cause computer chose scissors");
            break;
        }
    case (3):
        if (computer == 2)
        {
            printf("congrats ! you won cause computer chose paper");
            break;
        }
        else if (computer == 1)
        {
            printf("oops1 you lost cause computer chose rock");
            break;
        }
        else
        {
            printf("That was a draw computer also chose scissors ");
            break;
        }
        default :printf("Please enter a valid coice "); 
    }
}
