#include <stdio.h>
void main()
{
  int a = 2, b = 3, z;
  z = (a++) * (b++);
  printf("%d\n%d\n%d\n", z, a, b);
}