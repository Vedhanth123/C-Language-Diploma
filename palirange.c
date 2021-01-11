#include <stdio.h>
void main()
{
    int i, j, m, n, count = 0, rev, rem = 0;
    printf("Enter the range :\n");
    scanf("%d", &n);
    printf("The palindrome series :\n");
    for (i = 0; i < n; i++)
    {
        m = i;
        while (m != 0)
        {
            rev = m % 10;
            rem = rem * 10 + rev;
            m = m / 10;
        }
        if (rem == i)
            count++;
        rem = 0;
    }
    printf("%d are the no.of palindrome numbers within %d:\n", count, n);
}