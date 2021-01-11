#include <stdio.h>
int fact(int n)
{
    if (n <= 5)
        return n * fact(n + 1);    // return statement returns the value to the function again and the control
         // goes into the expression 
    else
        return 1;
}
void main()
{
    int n = 1;
    printf("%d ",fact(n+1));
}