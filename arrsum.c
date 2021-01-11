#include <stdio.h>
void main()
{
    int ar2[1000], ar[1000], ar1[1000], b, n;
    printf("Enter the limits of two arrays : \n");
    scanf("%d", &n);
    printf("Enter the elements in first array : \n");
    for (b = 0; b < n; b++)
    {
        scanf("%d", &ar[b]);
    }
    printf("Enter the elements for second array : \n");
    for (b = 0; b < n; b++)
    {
        scanf("%d", &ar1[b]);
    }

    for (b = 0; b < n; b++)
    {
        ar2[b] = ar[b] + ar1[b];
    }
    printf("sum of two arrays is : \n");
    for (b = 0; b < n; b++)
    {
        printf("%d\n", ar2[b]);
    }
}