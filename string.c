#include <stdio.h>
void main()
{
    char str[10], i;
    printf("Enter the string :\n");
    gets(str);
    for (i = 0; i < 10; i++)
    {
        if (str[i] == 97 && 123)
            str[i] = str[i] - 32;
    }
    puts(str);
}