#include <stdio.h>
#include <stdlib.h>
/*
int smallalphanumfunction(char alpha[], int i);
int bigalphanumfunction(char alpha);
void main()
{
    int matchletter[] = {6, 7, 4, 6, 5, 4, 6, 5, 2, 4, 4, 3, 6, 6, 6, 5, 7, 6, 5, 3, 5, 4, 6, 4, 3, 4};
    int matchnumber[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    char alpha[] = "ANT";
    printf("%d",smallalphanumfunction(alpha,3));
}
int smallalphanumfunction(char alpha[],int n)
{
    int i;
    int sum = 0;
    for(i=0;i<10;i++)
    {
        printf("%d   ",alpha[i]);
    }
    return sum;
}
/*
int bigalphanumfunction(char alpha[])
{
    return (int)alpha-65;
}
*/



#include<string.h>

int main()
{
    int i, n;
    char *x="Alice";
    n = strlen(x);
    *x = x[n];
    for(i=0; i<=n; i++)
    {
        printf("%s ", x);
        x++;
    }
    printf("\n", x);
    return 0;
}