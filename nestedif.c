#include <stdio.h>
void main()
{
  long int a, b, c;
  printf("enter any values for a,b,c\n");
  scanf("%ld%ld%ld", &a, &b, &c);
  if (a > b)
  {
    if (a > c)
    {
      printf("%ld a is greatest",a);
    }
    else
    {
      printf("%ld c is greatest",c);
    }
  }
  else
  {
    if (b > c)
    {
      printf("%ld b is greatest",b);
    }
    else
    {
      printf("%ld c is greatest",c);
    }
  }
}
