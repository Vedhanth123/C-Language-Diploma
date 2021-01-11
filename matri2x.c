#include <stdio.h>
void main()
{
    int i, j, k, n, a[5][5], b[5][5], sum[5][5];
    printf("Enter no. of rows and coloumns : \n");
    scanf("%d", &n);
    printf("enter the elements in the matrix\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements in the second matrix :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("sum of two matrices :\n");
    for (i = 0; i < n; i++) // i for loop for the row
    {
        for (j = 0; j < n; j++) // j for loop for the coloumn
        {
            sum[i][j] = 0;                                 // assigning zero first to the space in which we are going to do the multiplication
            for (k = 0; k < n; k++)                        // k for loop for the element to element ( as the coloumn in the first matrix and row in the second matrix is changing )
            {                                              // we will commonly take it as k)
                sum[i][j] = sum[i][j] + a[i][k] * b[k][j]; // adding the first multiplication and then assigning the value to the sum
            }
            printf(" %d  ", sum[i][j]); // then printing the value which is obtained
        }
        printf("\n");
    }
}