#include <stdio.h>
void main()
{
    int a, b[1000], c, d, small, large;
    printf("Enter the array limit : "); // entering the array limit
    scanf("%d", &c);
    printf("Enter the elements : "); // assigning the values to the arrays
    for (a = 0; a < c; a++)
    {
        scanf("%d", &b[a]);
    }
    small = b[0];           // assigning one value in array to the variable
    for (d = 0; d < c; d++) // comparing all the elements in the array with the small
    {                       // if the elements are smaller than the variable small then the new values will be assigned to small
        if (small < b[d])   // it continues till the smallest value is assigned to small
        {
            small = b[d];
        }
        if (large > b[d]) // all the elements are compared to the large variable then if the
        {                 // values are greater then the larger values will be replaced
            large = b[d];
        }
    }

    printf("largest is %d\n", large); // after the values are obtained then they are printed
    printf("smallest is %d\n", small);
}