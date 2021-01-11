#include <stdio.h>
void main()
{
    int ved[5], b, a, temp = 0;
    printf("Enter the values in array : "); // assigning the values to array
    for (b = 0; b < 5; b++)                 // multiple assignment with for loop
    {
        scanf("%d", &ved[b]);
    }
    printf("ascending order :\n");
    for (b = 0; b <= 5; b++) // again checking whether the values are in the ascending order
    {
        for (a = 0; a < 5; a++) // checking the first element of the array if it in asscending order or not
        {
            if (ved[a] > ved[a + 1]) // swaping of the numbers it will last till the element reaches it place
            {
                temp = ved[a];
                ved[a] = ved[a + 1];
                ved[a + 1] = temp;
            }
        }
    }
    for (b = 0; b < 5; b++) // printing the array
    {
        printf("%d iter %d\n", b, ved[b]);
    }
}