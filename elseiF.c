#include <stdio.h>
void main()
{
  int grade = 0;
  printf("enter any value");
  scanf("%d", &grade);
  if (grade > 90)
  {
    printf("grade 1");
  }

  else if (grade > 80)
  {
    printf("grade 2");
  }

  else if (grade > 70)
  {
    printf("grade 3");
  }

  else if (grade > 60)
  {
    printf("grade 3");
  }

  else
  {
    printf("fail");
  }
}
