#include <stdio.h>
void main()
{
  int a, b, c;
  printf("wnter any values for a,b");
  scanf("%d\n%d", &a, &b);
  c = a;
  a = b;
  b = c;
  printf("%d\n%d", a, b);
}