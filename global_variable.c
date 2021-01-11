#include <stdio.h>

int var = 10;
void function ();
int main()  
{
    function();
    printf("%d",var);
    return 0;

}

void function ()
{   
    var = 110;
    printf("%d",var);
}