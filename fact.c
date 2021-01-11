#include <stdio.h>
void main()
{
    int a, b=1, i;
    printf("enter the factorial limit : ");
    scanf("%d", &i);
    for (a = 1; a <= i; a++) // a is the loop number (how many times will the loop go)
    {
        b = a * b; // b is total answer 
    }
    printf("%d\n", b);
}