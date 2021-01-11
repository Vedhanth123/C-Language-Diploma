#include <stdio.h>
int fib(int n, int v1, int v2, int ans) // taking the parameters as the values will be initialized again if the
{                                       // function is called again
    if (n == 1)
    {
        return 1;
    }
    else
    {
        printf("%d\n", ans);
        ans = v1 + v2;
        v1 = v2;
        v2 = ans;
        fib(n - 1, v1, v2, ans);
    }
}
void main()
{
    int n, m, a = 0, b = 1, ans = 0;
    printf("Enter the no of interations :\n");
    scanf("%d", &n);
    m = n;
    printf("Fibonacci series :\n");
    fib(m, a, b, ans);
}