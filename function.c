#include <stdio.h>
/* function 1 */
int loop(int v, int a, int n) // function with argument and no return
{
    for (a = 1; a <= n; a++)
    {
        printf("* ");
        for (v = 1; v <= n; v++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
/* function 2 */
int loop1(int i, int t, int m) // function woth arument and return
{
    printf("%d table :\n", t);
    for (i = 1; i <= 10; i++)
    {
        m = i * t;
        printf("%d\n", m);
    }
}
/* function 3 */
int vedhanth()
{
    int n, cm;
    printf("Enter the limit :\n");
    scanf("%d", &n);
    loop(1, 1, n);
    printf("function with return and argument :\n");
    printf("Enter the table you want to print :\n");
    scanf("%d", &cm);
    loop1(1, cm, 10);
}
/* function 4 */
int lenovo()
{
    int a, b = 1, i;
    printf("enter the factorial limit : ");
    scanf("%d", &i);
    for (a = 1; a <= i; a++) // a is the loop number (how many times will the loop go)
    {
        b = a * b; // b is total answer
    }
    return b;
}
void main()
{
    int dell;
    vedhanth();
    dell=lenovo(); // b value will go into dell
    printf("%d",dell);
}
