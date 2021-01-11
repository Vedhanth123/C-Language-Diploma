#include <stdio.h>
void main()
{
    int i, v1, v2, v3, temp = 0;
    char decision;
    printf("Enter the values :\n");
    scanf("%d%d", &v1, &v2);
    printf("Do you want to enter another value ? Type y for yes and n for no :\n");
    scanf("%c", &decision);
    if (decision == 'y')
    {
        printf("Enter the value");
        scanf("%d", &v3);
    }
    calculator(v1, v2, v3);
}
int calculator(v1, v2, v3)
{
    int sum;
    char op1, op2;
    printf("Enter the operation you want to do :\n");
    scanf("%c", &op1);
    printf("Enter the operation you want to do :\n");
    scanf("%c", &op2);
    sum = v1 * op1 + v2 * op2;
    printf("%d", sum);
    return 0;
}
