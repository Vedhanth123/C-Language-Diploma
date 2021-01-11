// c program to allocate memory dynamically using malloc function

# include <stdio.h>
# include <stdlib.h>

void main()
{
    int *ptr;

    ptr = (int*) calloc(10 * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory not allocated ");
    }
    else
    {
        printf("Memory allocated successfully\n");
    }

    for (int i = 1; i <= 10; i ++)
    {
        // *(ptr + i) = i;
        printf("value in memory = %d\t index of memory %d\n",*(ptr + i),i);
    }
    
}