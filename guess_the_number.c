// Project = 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guess, count = 0;
    srand(time(0));
    int randomNumber = rand() % 101;
    do
    {
        printf("Enter the number :");
        scanf("%d", &guess);
        count++;
        if (guess == randomNumber)
        {
            printf("Congratulation you guessed the number in %d times\n", count);
        }
        else if (guess < randomNumber)
        {
            if (randomNumber - guess >= 25)
            {
                printf("Nah! That's too low \n");
            }
            else if (randomNumber - guess >= 15)
            {
                printf("Nah! Thats low\n");
            }
            else if (randomNumber - guess >= 5)
            {
                printf("you are close\n");
            }
            else
            {
                printf("you are very close\n");
            }
        }
        else 
        {
            if (guess - randomNumber >= 25)
            {
                printf("Nah! That's too big\n");
            }
            else if (guess - randomNumber >= 15)
            {
                printf("Nah! That 's big \n");
            }
            else if (guess - randomNumber >= 5)
            {
                printf("You are close\n");
            }
            else
            {
                printf("you are very close \n");
            }
        }

    } while (guess != randomNumber);
    return 0;
}
