// c program to implement call by value and and call by reference

# include <stdio.h>

void Call_by_value(int x, int y);

void main()
{
    int p = 10, q = 20;
    Call_by_value(p, q);
    printf("%d is p, %d is q",p,q);
    
}

void Call_by_value(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
