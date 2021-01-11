#include <stdio.h>
void main()
{
    FILE *fp;
    char ch;
    printf("Enter the string :\n");
    fp = fopen("file.txt", "w");
    while ((ch = getchar()) != EOF)
    {
        fputc(ch, fp);
    }
    fclose(fp);
}
