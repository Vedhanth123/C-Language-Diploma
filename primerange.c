#include <stdio.h>
void main()
{
    int a = 0, i, j, count = 0, count1 = 0;
    for (i = 1; i <= 1000; i++)
    {
        for (j = 1; j <= a; j++)
        {
            if (a % j == 0)
                count1++;
        }
        if (count1 == 2)
            count++;
        count1 = 0;
        a++;
    }
    printf("The no. of prime numbers between 1-100 are %d", count);
}
