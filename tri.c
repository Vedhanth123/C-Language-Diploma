#include <stdio.h>
void main()
{
    int i, j, k, n, m;
    printf("Enter the no.of rows and coloumns : ");
    scanf("%d", &n);
    m = n;                   // assigning the value to another variable as n will be changed
    for (i = 1; i <= n; i++) // for printing the rows
    {
        m -= 1;                  // reducing the m value
        for (k = 1; k <= m; k++) // printing the spaces by decrementing the conditional limit

        {                 /*  [ limit set to 4 in the first case then the code will repeat 4 times horizontally
                                then after one vertical iteration the condition will be reduced then the code will repeat */
            printf("\t"); /*    only 3 times as the code reaches the limit m (code)  will also become zero  ]   */
        }
        for (j = 1; j <= i; j++) // printing the * in the slope way
        {
            printf("*\t");
        }

        printf("\n"); // printing the next row
    }
}