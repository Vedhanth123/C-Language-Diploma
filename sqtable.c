#include <stdio.h>
#include <math.h>
void main()
{
  int a = 0, b;
  //printf("enter values for a");
  //scanf("%d",&a);
  do
  {
    a = a + 1;
    b = sqrt(a * a);
    printf("square root of %d is %d\n", a * a, b);

  } while (a < 20);
}