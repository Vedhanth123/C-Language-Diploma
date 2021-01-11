#include <stdio.h>
void swap(int *, int *);
void swap(int *a, int *b) // pointer of the function are taken in the formal variable
{
    *a = *a + *b; // pointer is nothing but a variable but which points to the address of the variable
    *b = *a - *b; // which in turn the value of the variable
    *a = *a - *b; // call by reference will be used if the variables in the main function also need to be manipulated along with the user
    // defined function
}
void main() // the pointer which are changed in the function wiil also be effected in main function also
{
    int a, b; // taking two variables and assigning the values to it
    printf("Enter the values in a,b :\n");
    scanf("%d%d", &a, &b);
    swap(&a, &b); // calling the function with the address of the variable as the parameters in the function
    printf("%d of a\n%d of b", a, b);
}