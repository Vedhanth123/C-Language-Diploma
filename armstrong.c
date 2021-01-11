#include <stdio.h>
void main()
{
    int a, b, c, d;
    printf("Enter the value : ");
    scanf("%d", &a);
    b = a; // assigning the value to a variable as manipulation of the primary one taked place
    while (a != 0)
    {
        d = a % 10;        // modulating the value to get the last digit of the number
        c = d * d * d + c; // cubing the digit and assigning to final answer
        a = a / 10;        // removing the last digit of the number by dividing it by 10
    }
    if (b == c) // comparing the final answer with the stored value
    {
        printf("%d is an Armstrong number", c);
    }
    else
    {
        printf("%d is not an Armstrong number", c);
    }
}