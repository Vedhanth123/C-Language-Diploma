#include <stdio.h>
void main()
{
    int a,b, c, d = 0;
    printf("Enter the no. of rows and coloumns : ");
    scanf("%d",&a);
    for (b = 1; b <= a; b++)
    {

        for (c = 1; c < b; c++)
        {
            d++;
            printf("%d\t", d);
        }
        d++;
        printf("%d\n", d);
    }
}