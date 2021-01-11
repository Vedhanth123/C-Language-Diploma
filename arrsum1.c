#include <stdio.h>
void main()
{
    int a, b, c[1000], avg, sum = 0;

    printf("Enter the limit of the array : \n");
    scanf("%d", &a);
    printf("Enter the elements : \n");
    for (b = 1; b <= a; b++)
    {
        scanf("%d", &c[b]);
    }
    for (b = 1; b <= a; b++)
    {
        sum = sum + c[b];
    }
    avg = sum / a;
    printf("%d is sum\n", sum);
    printf("%d is avg ", avg);
}