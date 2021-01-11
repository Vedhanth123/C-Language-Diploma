#include <stdio.h>
void main()
{
  int a, b, c;
  printf("Enter the value for a,b : ");
  scanf("%d%d", &a, &b);
  printf("bitwise operators : \n");
  c = a & b;
  printf("%d\n", c);
  c = a | b;
  printf("%d\n", c);
  c = a ^ b;
  printf("%d\n", c);
  c = ~a;
  printf("%d\n", c);
  c = 2 << a;
  printf("%d\n", c);
  c = 3 >> a;
  printf("%d\n", c);
}
