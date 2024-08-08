#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int guesstime = 0, a;
    int randomNum = rand() % 100 + 1;
    do
    {
        printf("Guess the number:");
        scanf("%d", &a);
        guesstime++;
        if (a > randomNum)
        {
            printf("Lower number please!\n");
        }
        else if (a < randomNum)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("Congrest you Win the Game\n");
        }

    } while (a != randomNum);
    printf("Guess Time is %d", guesstime);
    return 0;
}
