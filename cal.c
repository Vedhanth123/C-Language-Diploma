#include <stdio.h>

void main()
{
  int a, b = 0, c;
  printf("enter values");
  scanf("%d", &a);
  do
  {
    b = b + 1;
    c = a * b;
    printf("%d\n", c);
  } while (b < 10);
}
