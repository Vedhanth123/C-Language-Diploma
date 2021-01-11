#include <stdio.h>
void main()
{
  int a = 3, b = 4, c = 0;
  c = (a++) + (++b);
  printf("%d\n%d\n%d is the output", c, a, b);   // assingning in C is always done from right to left
}
