#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *ptr;
    char ch;
    printf("Enter string in the file :\n");
    ptr = fopen("windows.txt", "w");
    while ((ch = getchar()) != EOF)
        fprintf(ptr, "%c", ch);
    fclose(ptr);
    ptr = fopen("windows.txt", "a");
    while ((ch = getchar()) != EOF)
        fputc(ch, ptr);
    fclose(ptr);
    ptr = fopen("windows.txt", "r");
    printf("Data in file is :\n");
    while ((ch = fgetc(ptr)) != EOF)
        printf("%c", ch);
    fclose(ptr);
}