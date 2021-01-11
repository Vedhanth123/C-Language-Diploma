#include <stdio.h>
int p(int n, int rem, int rev);
void main()
{
    int n,m, rem = 0, rev,revm;
    printf("Enter the value :\n");
    scanf("%d",&n);
    m=n;
    revm=p(m, rem, rev);
    printf("%d",revm);   
}    
int p(int n, int rem, int rev)
{
    if (n == 0)
    {   
        return rev;
    }
    else
    {
        rem=n%10;
        rev=rev*10+rem;
        p(n/10,rem,rev);
    }
}