#include<stdio.h>

int main()
{
    int i=100;
    int *p=&i;
    p=NULL;/*because the p pointer has
             null value means 0 when it 
            null value it doesn't have 
            any value in that*/
    printf("%d,%d",p,&p);
}