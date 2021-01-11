// pointer implementation

# include <stdio.h>
int main()  
{
    // normal int variable
    int i = 20;

    // int pointer having address of i
    int *ip = &i;

    // int pointer having address of pointer (ip)
    int **iip = &ip;
    
    // printing *ip (address of i will be printed)
    printf("%d\n", *ip);

    // printing ip (value of i will be printed)
    printf("%x\n",ip);

    // printing &ip (address of ip will be printed)
    printf("%x\n",&ip);

    // printing iip (address of i will be printed)
    printf("%x\n",iip);

    // printing &iip (address of iip will be printed)
    printf("%x\n",&iip);

    // printing *ip (address of i will be printed)
    printf("%d\n",*ip);

    // prining **iip (address of ip will be printed)
    printf("%d\n",**iip);

    return 0;
}