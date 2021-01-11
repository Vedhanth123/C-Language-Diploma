#include <stdio.h>
void main()
{
    FILE *fp;
    char ch, goo[23];
    fp = fopen("myfile.txt", "a+");
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
        // fprintf(fp, "%c", ch);
    }
    printf("\nEnter the string you want to append :\n");
    scanf("%s", goo);
    fprintf(fp, "%s", goo);
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
        // fprintf(fp, "%c", ch);
    }
    fclose(fp);
}