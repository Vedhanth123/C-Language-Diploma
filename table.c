#include <stdio.h>
void main()
{
    long int a = 0, c, b;
    printf("enter the table you want to multiply:\n");
    scanf("%ld", &b);
    printf("output is:\n");
    do
    {
        a = a + 1;
        c = b * a;
        printf(" %ld x %ld = %ld\n", b, a, c);
    } while (a < 10);
}