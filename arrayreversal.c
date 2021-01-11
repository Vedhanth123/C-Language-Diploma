#include <stdio.h>
void main()
{
    int array[] = {1, 2, 3, 4, 5, 6}, temp = 0, i;
    for (i = 0; i < 6 / 2; i++)
    {
        temp = array[i];
        array[1] = array[1 + 1];
        array[i + 1] = temp;
    }
    for (i = 0; i < 6; i++)
        printf("%d\n", array[i]);
}