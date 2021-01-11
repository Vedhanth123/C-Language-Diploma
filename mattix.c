#include <stdio.h>
void main()
{
    int i, j, n, m, mat[20][20];
    printf("Enter the order of the matrix : \n");
    scanf("%d%d", &m, &n);
    printf("Enter the elements in the matrix : \n");
    for (i = 0; i < n; i++) // first loop is for the rows
    {
        for (j = 0; j < m; j++) // second loop is for the coloumns
        {
            scanf("%d", &mat[i][j]); // assigning the values to the matrix
        }                            // the first row remaining constant the values
    }
    printf("matrix : \n");  //in the rest of the spaces will be allocated
    for (i = 0; i < n; i++)
    {   printf("|");
        for (j = 0; j < m; j++)
        {   
            printf("%d ", mat[i][j]);
        }
        printf("|\n");
    }
}