#include <stdio.h>
int add(int x, int y);
void main()
{
    int a, b, c;
    printf("ENter a,b :\n");
    scanf("%d%d", &a, &b);
    c = add(a, b);
    printf("%d", c);
}
int add(int x, int y)
{
    int c;
    c = x + y;
    return c;
}