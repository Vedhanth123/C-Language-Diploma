#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, count = 0;
    char string[10];
    printf("Enter the string :\n");
    gets(string);
    for (i = 0; i <= 10; i++)
    {
        if (string[i] != 0)
        {
            count += 1;
        }
    }
    printf("%d", count);
}