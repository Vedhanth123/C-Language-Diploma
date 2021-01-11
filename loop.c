#include <stdio.h>
void main()
{
    int a = 0, b;
    printf("set the limit\n");
    scanf("%d", &b);
    printf("output is :\n");
    do
    {
        a = a + 1;
        printf("%d\n", a);
    } while (a < b);
}
