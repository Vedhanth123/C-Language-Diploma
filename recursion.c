#include <stdio.h>
int fact(int n)
{
  int result;
  if (n == 1)
  {
    return 1; //
  }
  else
  {
    result = n * fact(n - 1); // recalling the function again and again till the condition in the if
  }                           // statement becomes false the function will repeat again and again and the only n remains constant
} // in the expression and the function will be repeated again and again and then the function wiil be returned the variable
void main()
{
  int n, result; // then the function will go back and the else statement will be executed then the function will be halted
  printf("Enter the number :\n");
  scanf("%d", &n);
  result = fact(n); // the total value will be returned and then the value can be printed
  printf("%d", result);
}