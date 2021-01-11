#include <stdio.h>
#include <conio.h>
void main()
{
  int i, j, k;
  printf("Enter no. of rows and coloumns : \n");
  scanf("%d", &k);
  for (i = 1; i <= k; i++) // i is row 
  {
    for (j = 1; j < k; j++) // j is coloumn

    {
      printf("*\t", j);
    }
    printf("*\n", i);
  }
}
