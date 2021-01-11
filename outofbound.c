#include <stdio.h>
void main()
{
    int arr[4], i;
    printf("Enter the elements of the array :\n");
    for (i = 0; i < 4; i++)
        scanf("%d", &arr[i]);
    printf("%d\n", arr[3]);
    printf("%d", arr[7]);
}