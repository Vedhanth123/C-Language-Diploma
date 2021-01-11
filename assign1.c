#include <stdio.h>
void main()
{
  int a, b, c, d, e;
  printf("assign any values\n");
  scanf("%d\n%d\n%d\n%d\n%d", &a, &b, &c, &d, &e);
  printf("the answer is\n");
  a += 2;   // [ a+2
  b -= 2;     // b-2
  c *= 2;     // c*2
  d /= 2;      //d/2
  e %= 2;      //e%2 ]
  printf("%d\n%d\n%d\n%d\n%d", a, b, c, d, e);
}
