#include <stdio.h>
int fibonacci(int a, int b, int c);
void main()
{
    int a = 0, b = 0, c = 1;
    // printf("Enter no of iterations :\n");
    // scanf("%d", &n);
    fibonacci(a, b, c);
}
int fibonacci(int a, int b, int c)
{
    // limit = limit - 1;
    // if (limit == 0)
    if (a >= 255)
    {
        return 0;
    }
    else
    {
        printf("%d\n", a);
        a = b + c;
        b = c;
        c = a;
        fibonacci(a, b, c);
    }
}