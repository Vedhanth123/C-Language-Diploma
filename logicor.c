#include <stdio.h>
void main()
{
   int a, b, c, d;
   printf("enter values for a,b,c");
   scanf("%d\n%d\n%d", &a, &b, &c);
   d = (a < b) || (b > c);
   printf("%d", d);
}