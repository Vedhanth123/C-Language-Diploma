#include <stdio.h>
void main()
{
    int i, m, n, count = 0, rem = 0, rev;
    printf("Enter the range :\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        m = i;
        while (m != 0)
        {
            rem = m % 10;
            rev = rev * 10 + rem * rem * rem;
            m = m / 10;
        }
        if (rev == i)
        {
            count++;
            printf("%d is armstrong at %d", rev, count);
        }
    }
}