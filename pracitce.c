#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    // file pointer of type FILE
    FILE *fp;
    
    // opening file "hel.txt" using fileopen and with file pointer fp
    fp = fopen("hel.txt","w+");
    
    // we are assigning string to fp
    fprintf(fp, "This is testing for fprintf...\n");
    
    // printing that string
    fputs("This is testing for fputs...\n", fp);
    fclose(fp);
    
    return 0;
}