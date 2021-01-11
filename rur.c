#include <stdio.h>
void main()
{
    int *ptr;
    int a = 23;
    ptr = &a;
    printf("%d\n%d\n", sizeof(int), sizeof(char));
    printf("%d\n", ptr);
    printf("%d\n", *ptr);
    printf("%d\n", ptr + 1);
}