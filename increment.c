#include <stdio.h>
void main()
{
  int a, b, c;
  scanf("%d%d", &a, &b);
  c = (a++) + (++b);
  printf("%d\n", c);
  printf("%d\n%d", a, b);
}