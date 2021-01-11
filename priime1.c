#include <stdio.h>
void main()
{
    int uservar;
    printf("Enter a number you want to check for the prime factors :\n");
    scanf("%d",&uservar);
    int i,count = 0;
    for(i=1;i<=uservar;i++)
    {
        if(uservar%i==0)
            count++;
    }
    if(count==2)
        printf("The number is prime :\n");
    else
        printf("The number is not prime :\n");
}
