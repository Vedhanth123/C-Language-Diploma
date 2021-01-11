#include <stdio.h>
void main()
{
  int a, b;
  for (a = 1; a <= 5; a++) //row is a
  {
     
    for (b = 1; b < a; b++) //column is b
    {
      printf("*\t", b);
    }
    printf("^\n", a);
   
  }
}