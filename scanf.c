#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("enter any number for a ");
    scanf("%d", &a);
    printf("enter any number for b ");
    scanf("%d", &b);
    c = a + b;
    printf("%d is the sum of a and b", c);
    return 0;
}
