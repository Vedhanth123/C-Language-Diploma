#include <stdio.h>
int a;
void globe();
void main()
{
    printf("Enter the value of a :\n");
    scanf("%d", &a);
    globe();
}
void globe()
{
    int b, c;
    printf("Enter b :\n");
    scanf("%d", &b);
    c = b;
    printf("%d", c);
}