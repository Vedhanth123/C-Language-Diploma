#include <stdio.h>
void main()
{
    float b, a;
    printf("Enter the fahrenheit : ");
    scanf("%f", &a);
    
    b = (a - 32) / (1.8);
    printf("%f", b);
}