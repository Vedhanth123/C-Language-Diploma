#include <stdio.h>
void srray(int[], int size);   // prototype of the function in recommended when we are dealing with the arrays
void array(int ar[], int size) // declaring the local variables in the function and specifying the type of the variable
{                              // or the parameter
    int i, j, temp = 0;
    printf("The required array :\n");
    for (i = 0; i < size; i++)
        printf("%d\n", ar[i]);
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }
    printf("The arranged array:\n");
    for (i = 0; i < size; i++)
        printf("%d\n", ar[i]);
}
void main()
{
    int arr[10], i, size;                          // in the calling function only the name of the array will be written
    printf("Enter the size of the array :\n");     // array is an internal pointer and it stores the address
    scanf("%d", &size);                            // of the base value ( first value)
    printf("Enter the elements in the array :\n"); // the base address is then transferred into the parameter
    for (i = 0; i < size; i++)                     // the base address is then transferred to the array in the function then the
        scanf("%d", &arr[i]);                      // all the values will be seen in the array
    array(arr, size);                              // in array function no extra array will be created in the memory
} // all the values will be changed in the original array also this is same like the call by reference type in the fucntion