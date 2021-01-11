#include <stdio.h>
void main()
{
  int a, b, c;
  printf("enter any values for a,b,c\n");
  scanf("%d%d%d", &a, &b, &c);
  if (a > b)
  {
    if (a > c)
    {
      printf("a is greatest");
    }
    else
    {
      printf("c is greatest");
    }
  }
  else
  {
    if (b > c)
    {
      printf("b is greatest");
    }
    else
    {
      printf("c is greatest");
    }
  }
}