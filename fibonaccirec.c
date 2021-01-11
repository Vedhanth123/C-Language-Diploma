#include <stdio.h>
int sum(int n, int res, int rem, int lim);
void main()
{
    int res = 0, v1 = 1, v2 = 0, lim = 0;
    sum(res, v1, v2, lim);
}
int sum(int n, int res, int rem, int lim)
{
    if (lim == 8)
        return 0;
    else
    {
        printf("%d\n", res);
        n = res + rem;
        res = rem;
        rem = res;
        lim++;
    }
}