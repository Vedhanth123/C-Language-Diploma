#include <stdio.h>
/* Declare and initialize an int variable */
int var = 1;
/* Declare a pointer to int */
int *ptr;
int main()
{
    /* Initialize ptr to point to var */
    ptr = &var;
    /* Access var directly and indirectly */
    //access by initialise the var variable
    printf("\nDirect access, var = %u", var);
    printf("\nIndirect access, var = %u", *ptr);
    /* Display the address of var two ways */
    printf("\n\nThe address of var = %d", &var);
    printf("\nThe address of var = %d\n", ptr);
    /* change the content of var through the pointer */
    *ptr = 48;
    printf("\nIndirect access, var = %d", *ptr);
}