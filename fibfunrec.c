#include <stdio.h>
int fib(int ans, int v1, int v2, int n);
void main()
{
    int ans = 0, v1 = 1, v2 = 0, n;
    printf("Enter the limit :\n");
    scanf("%d", &n);
    printf("The fibonacci series :\n");
    fib(ans, v1, v2, n);
}
int fib(int ans, int v1, int v2, int n)
{
    if (n == 1)
    {
        return 0;
    }
    else
    {
        printf("%d\n", ans);
        ans = v1 + v2;
        v2 = v1;
        v1 = ans;
        fib(ans, v1, v2, n - 1);
    }
}