#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int game(int u, int c);
int randomnumber();
void main()
{
    int u = 0, c = 0;
    printf("\nWelcome to ROCK,PAPER,SCISSORS GAME :\n");
    printf("Choose your option :\n");
    printf("'r' for rock 'p' for paper 's' for scissors :\n");
    game(u, c);
}
int game(int u, int c)
{
    int i;
    char choice;
    int j, n;
    printf("Enter the options :\n");
    scanf("%c", &choice);
    switch (choice)
    {
    case 'r':
        j = randomnumber();
        if (j == 1)
        {
            printf("Draw match :\n");
            printf("computer score : %d user score : %d\n", c, u);
        }
        else if (j == 2)
        {
            c++;
            printf("Sorry you've lost :\n");
            printf("computer score : %d user score : %d\n", c, u);
        }
        else
        {
            u++;
            printf("Yay! you've won :\n");
            printf("computer score : %d user score : %d\n", c, u);
        }
        break;
    case 'p':
        j = randomnumber();
        if (j == 1)
        {
            u++;
            printf("Yay! you've won :\n");
            printf("computer score : %d user score : %d\n", c, u);
        }
        else if (j == 2)
        {
            printf("Draw match :\n");
            printf("computer score : %d user score : %d\n", c, u);
        }
        else
        {
            c++;
            printf("Sorry you lost :\n");
            printf("computer score : %d user score : %d\n", c, u);
        }
        break;
    case 's':
        j = randomnumber();
        if (j == 1)
        {
            c++;
            printf("Sorry you lost :\n");
            printf("computer score : %d user score : %d\n", c, u);
        }
        else if (j == 2)
        {
            u++;
            printf("Yay! you've won :\n");
            printf("computer score : %d user score : %d\n", c, u);
        }
        else
        {
            printf("Draw match:\n");
            printf("computer score : %d user score : %d\n", c, u);
        }
        break;
    }
    printf("Press 0 to stop press 1 to continue :\n");
    scanf("%d", &n);
    if (n != 0)
        game(u, c);
    else
        return 0;
}
int randomnumber()
{
    srand(time(NULL));
    return rand() % 3;
}