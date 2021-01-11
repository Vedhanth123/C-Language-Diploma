#include <stdio.h>
void main()
{
    int i, j, r1, r2, c1, c2, k, a[2][2], b[2][2], c[2][2];
    printf("Enter the order of the first matrix :\n");
    scanf("%d%d", &r1, &c1);
    printf("Enter the order of the second matrix :\n");
    scanf("%d%d", &r2, &c2);
    printf("Enter the elements in the matrix :\n");
    for (i = 1; i <= r1; i++)
    {
        for (j = 1; j <= c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements in second the matrix :\n");
    for (i = 1; i <= r2; i++)
    {
        for (j = 1; j <= c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    if (r1 == c2)
    {
        for (i = 1; i <= r1; i++)
        {
            for (j = 1; j <= r1; j++)
            {
                c[i][j] = 0;
                for (k = 1; k <= r1; k++)
                {
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                }
                printf("%d  ", c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("multiplication cannot be executed :");
    }
}