#include <stdio.h>
void swap(int *a, int *b)
{
    *a = *a * *b;
    *b = *a / *b;
    *a = *a / *b;
    printf("The swapped numbers are :\n");
}
void main()
{
    int a, b;
    printf("Enter the numbers:\n");
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("%d is 1st \n%d is 2nd", a, b);
}