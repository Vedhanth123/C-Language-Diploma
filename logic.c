#include <stdio.h>
void main()
{
  int a, b, c, d;
  scanf("%d%d%d", &a, &b, &c);
  d = (a < b) && (b < c);
  printf("%d", d);
}