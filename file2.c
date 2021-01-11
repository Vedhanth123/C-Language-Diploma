#include <stdio.h>
void main()
{
    FILE *fp;
    char ch;
    fp = fopen("file.txt", "a");
    while ((ch = getchar()) != EOF)
    {
        printf("%c", ch);
    }
}