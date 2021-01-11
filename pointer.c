#include <stdio.h>
void main()
{
    char a = '2';
    char *ptr = &a;
    int array[] = {2, 3, 4, 5};
    int *pt = array;
    //printf("%d\n", a);
    //printf("%x\n", &a);
    printf("%d\n", pt);
    printf("%d\n", array);
    printf("%d\n", *(pt + 1));
    // printf("%d\n", ptr);
    // printf("%d\n", ptr + 1);
}