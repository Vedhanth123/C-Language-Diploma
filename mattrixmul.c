#include <stdio.h>
void matrix(int *m1, int *m2, int *m3);
void main()
{
    int r1, r2, c1, c2;
    int *p1, *p2, *mat3;
    printf("Enter the order of matrix 1 :\n");
    scanf("%d%d", &r1, &c1);
    p1 = (int *)malloc(r1 * c1 * sizeof(int));
    printf("Enter the order of matrix 2 :\n");
    scanf("%d%d", &r2, &c2);
    p2 = (int *)malloc(r2 * c2 * sizeof(int));
    if (r1 == c2)
        mat3 = (int *)calloc(c1 * r2, sizeof(int));
    else
        printf("Multiplication of matrix cannot be done :\n");
    int i, j, k;
    printf("Enter elements in matrix 1:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        scanf("%d", &*(p1 + i * c1 + j))
