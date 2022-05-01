// Rock-Paper-Scissor
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gen_random_number();

int gen_random_number()
{
    // Function to generate a randon number
    srand(time(NULL));
    return rand() % 3;
}

int main()
{
    int a = 1, p_choice, c_choice, n, i = 0, c_score = 0, p_score = 0;
    char name[30];
    printf("Rock-Paper-Scissor");
    printf("\nWELCOME\n");
    printf("\nEnter number of rounds you want to play: ");
    scanf("%d", &n);
    getchar();
    printf("\nPlayer name: ");
    gets(name);
    printf("\nLet the game begin");
    while (i < n)
    {
        printf("\nRound %d", (i + 1));
        c_choice = ("%d", gen_random_number());
        printf("\nPress 0 for rock, 1 for paper, 2 for scissor: ");
        scanf("%d", &p_choice);
        if (p_choice == 0)
        {
            if (c_choice == 1)
                c_score++;
            else if (c_choice == 2)
                p_score++;
        }
        else if (p_choice == 1)
        {
            if (c_choice == 0)
                p_score++;
            else if (c_choice == 2)
                c_score++;
        }
        else if (p_choice == 2)
        {
            if (c_choice == 0)
                c_score++;
            else if (c_choice == 1)
                p_score++;
        }
        else
        {
            printf("\nError! Invalid choice"); // This round will not be counted and played again
            i--;
        }
        i++;
    }
    printf("\n%s's score: %d", name, p_score);
    printf("\nComputer's score: %d", c_score);
    if (p_score == c_score)
        printf("\nTIE");
    else if (p_score > c_choice)
        printf("\nYOU WIN");
    else
        printf("\nYOU LOSE");
    printf("\nGAME OVER");
    return 0;
}