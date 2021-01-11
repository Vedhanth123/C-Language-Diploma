#include <stdio.h>
int main()
{
    int array[10], a, b = 66; // initializing the size of array
    for (a = 1; a <= 10; a++) // printing out the elements by for loop as multiplt elements are there in an array
    {
        b += 1; // incrementing the element in the array
        array[a] = b;
        printf("%d\n", array[a]); // printing out the array
    }
    return 0;
}
