#include <stdio.h>
int fact(int n);
void main() 

{
    int n = 5;
    fact(n);
    printf("%d", fact(n));
}
int fact(int n)
{
    int result;
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return result = n * fact(n - 1);
    }
}

