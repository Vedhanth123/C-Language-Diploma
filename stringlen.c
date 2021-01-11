#include <stdio.h>
void main()
{
    char string[20];
    int i, count = 0;
    gets(string);
    for (i = 1; i <= 20; i++)
    {
        if (string[i] != '\0')
            count = count + 1;
    }
    printf("%d", count);
}