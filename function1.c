#include <stdio.h>
int fact(int);  // prototype of a function
int fact(int m) // function definition and the parameters taken in them ara called formal parameters
{
    int fact = 1;
    int i = 1;
    for (i = 1; i <= m; i++)
    {
        fact = fact * i;
    }
    return fact;
}
void main()
{
    int c, b;
    printf("Enter the limit :\n");
    scanf("%d", &b);
    fact(b);
    c = fact(b); // calling a function and the parameters in them are called as actual parameters
    printf("%d is the factorial\n", c);
}
