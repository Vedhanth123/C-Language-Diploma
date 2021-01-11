#include <stdio.h>
void main()
{
    int a, b, c,d;
    printf("Enter the value : ");
    scanf("%d", &a);
    b = a;                             // a is copied into b as a wiil be altered in the program
    while (a != 0)
    {
        d = a % 10;                   // we are finding the last value from a
        c = c * 10 + d;               // then we are assigning the value to c and multiplying with 10 to increase the value by ten ([121] 1*10+2=12)
        a  = a / 10;                  // then a will be altered
    }
    if (b == c)
        printf("palindrome");
    else
        printf("not a palindrome");
}
