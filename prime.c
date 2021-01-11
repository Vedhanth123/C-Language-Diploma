#include <stdio.h>
void main()
{
  int a, b, c=0;
  printf("enter any value : ");
  scanf("%d", &a);
  for (b = 1; b <= a; b++)     // dividing the value with each and every number
  {
    if (a % b == 0)            // checking the value if it is divisible by the number and remainder is zero 
    {
      c=c+1;                   // if the number gives remainder zero then the no. of factors are assigned to a variable
    }
  }
  if (c == 2)                  // if the number of factors is equal to 2 then it is a prime no.
    printf("%d is prime no.",a);
  else
    printf("%d is not a prime no.",a);
}
