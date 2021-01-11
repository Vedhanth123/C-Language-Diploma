#include <stdio.h>
void add(int *, int *);
void main()
{
    int a, b;
    printf("Enter the values in a,b :\n");
    scanf("%d%d", &a, &b);
    add(&a, &b);
    printf("%d is a,%d is b", a, b);
}
void add(int *a, int *b)
{
    int temp;
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}