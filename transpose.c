#include <stdio.h>
void main()
{
    int i, j, r, c, temp, mat[4][4];
    printf("Enter the order of matrix :\n");
    scanf("%d%d", &r, &c);
    printf("Enter the elements in the matrix :\n");
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Transpose of the matrix :\n"); // if the row is less than the coloumn then the transpose will take place
    for (i = 1; i <= r; i++)                
    {
        for (j = 1; j <= c; j++)           
            if (i < j)
            {
                temp = mat[i][j];
                mat[i][j] = mat[j][i];
                mat[j][i] = temp;
            }
    }
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= r; j++)
        {
            printf("%d  ", mat[i][j]);
        }
        printf("\n");
    }
}