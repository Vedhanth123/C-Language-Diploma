#include <stdio.h>
#include <stdlib.h>
void main()
{
    // use of malloc
    int *ptr, i, n;
    printf("Enter no. of elements in the array :\n");
    scanf("%d", &n);
    // ptr = (int *)malloc(n * sizeof(int));
    ptr = (int *)calloc(n, sizeof(int));
    if (ptr == NULL)
        printf("sorry memory not allocated\n");
    else
    {
        printf("Memory allocation successful \n");
        for (i = 1; i <= n; i++)
            scanf("%d", &*(ptr + i));
        for (i = 1; i <= n; i++)
            printf("%d\n", *(ptr + i));
        }
    printf("Enter new memory allocation space :\n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    if (ptr != NULL)
    {
        printf("memory reallocated successfully :\n");
        for (i = 1; i <= n; i++)
            scanf("%d", &*(ptr + i));
        for (i = 1; i <= n; i++)
            printf("%d\n", *(ptr + i));
    }
    else
        printf("sorry memory not reallocated :\n");
    free(ptr);
}