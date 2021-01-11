#include <stdio.h>
void main()
{
  int a, b, c;
  printf("Enter the table you want : ",a);
  scanf("%d", &a);
  for (b = 1; b <= 10; b++)  // for (initialization;condition;expression)
  {
    c = a * b;
    printf("%dx%d=%d\n", a, b, c);
  }
}