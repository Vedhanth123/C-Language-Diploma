#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    int n, i;
    char c;
    for (i = 0; i < 10; i--)
    {
        srand(time(NULL));
        n = rand() % 6;
        printf("The dice is at %d:\n", n);
        printf("To stop the dice press n to continue rolling press c :\n");
        scanf("%c", &c);
        if (c == 'n')
            break;
    }
}