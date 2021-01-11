#include <stdio.h>
int sum(int n)
{
    if (n == 1)
        return 1;
    else
    return n+sum(n-1); 
}
void main()
{
    int n,result;
    printf("Enter the value :\n");
    scanf("%d",&n);
    result=sum(n);
    printf("%d",result);

}