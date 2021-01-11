#include <stdio.h>
void main()
{
    char d;
    int a, b, c;
    printf("Enter the opertor : ");
    scanf("%c", &d);
    printf("Enter values for a,b : ");
    scanf("%d%d", &a, &b);
    switch (d) // specify the case (ex : +,-,/,*)
    {
    case '+': // should not terminated the case by ;
        c = a + b;
        printf("%d\n", c);
        break;
    case '-':
        c = a - b;
        printf("%d\n", c);
        break;
    case '*':
        c = a * b;
        printf("%d\n", c);
        break;
    case '/':
        c = a / b;
        printf("%d\n", c);
        break;

    default: // should not be terminated by ;
        printf("does not match any case");

        break;
    }
}