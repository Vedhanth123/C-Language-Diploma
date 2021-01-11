// c program to write and append to a file

#include <stdio.h>
int main()

{
    FILE *p;
    p = fopen("shallow.txt","a+");

    char string[20] = "I am Fine";
    fprintf(p,"hello how are you doing? %s",string);
    
    fseek(p,2,SEEK_SET);
    printf("%ld\n",ftell(p));
    rewind(p);
    printf("%ld\n",ftell(p));
    return 0;

}