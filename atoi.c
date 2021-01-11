#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
void main()
{
    char str[20];

    printf("Enter the string :\n");
    gets(str);
    int c = atoi(str);

    printf("%d", c);
}