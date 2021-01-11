// c program to multiply numbers using c

// algorithm 
// 1. initialize three numbers 
// 2. declare a function to add multiply two numbers
// 3. multiply and return its value to the main function


#include <stdio.h>

int multiplication(int a,int b);
int main() 
{
    int a = 3;
    int b = 4;
    int c = multiplication(a,b);
    printf("%d\n", c);
    return 0;
}

int multiplication(int x, int y)
{
    return x*y;
}