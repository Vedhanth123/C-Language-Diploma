#include <stdio.h>
#include <string.h>
void main()
{
    char a[10], b[10];
    printf("Enter the string 1 :\n");
    gets(a);
    strcpy(b, a);
    puts(b);
}