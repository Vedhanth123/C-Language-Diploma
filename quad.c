#include <stdio.h>
#include <math.h>
void main()
{
  int a, b, c, n, m, x, y;
  printf("assign values for a,b,c");
  scanf("%d\n%d\n%d", &a, &b, &c);
  n = sqrt((b * b) - (4 * a * c));
  printf("%d\n", n);
  m = 2 * a;
  x = (-b + n) / m;
  y = (-b - n) / m;
  printf("%d\n", x);
  printf("%d\n", y);
}
