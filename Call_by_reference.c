# include <stdio.h>

void Call_by_reference(int *a, int *b);
void main()
{
    int p = 10, q = 20;
    Call_by_reference(&p, &q);
    printf("%d is p, %d is q",p,q);
    
}

void Call_by_reference(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}