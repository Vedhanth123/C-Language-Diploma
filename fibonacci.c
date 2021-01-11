#include <stdio.h>
void main()
{
    int a, b, c = 0, d = 1, e = 0;
    printf("Enter the limit : ");
    scanf("%d", &a);
    printf("fibonacci series : \n");
    for (b = 1; b <= a; b++)
    {
        printf("%d\n", e); //printing the first element in the series
        e = c + d;         //manipulating the final answer
        c = d;             //manipulating the f0 that is the before element
        d = e;             //manipulating the f1 that is the after element
    }
}