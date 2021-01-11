#include <stdio.h>
#include <string.h>
void main()
{
    char a[100], b[100], c[100];           // strings need not to be called with the help of a addres
    int i;                                 // as strings are nothing but another form of the array
    printf("Enter the string :\n");        // array is an internal pointer
    gets(a);                               // so whatever the array may be it always points to the address of the first value in it
    printf("Enter the second string :\n"); // then the address will be incremented gradually and the memory will be created
    gets(b);                               // and strings are array and with primary datatype as char which only takes size 1 byte so
    printf("Enter the third string :\n");  // the memoy automatically increments the memory allocation of the string by one
    gets(c);
    // in another array (int) the size of the array is not 1 so we need to always use address
    if (strcmp(b, a) == 0)
        printf("The string you have entered matches :\n");
    else
        printf("Both the strings don't match ");
    printf("\n\n");
    i = strlen(a);
    printf("%d is the length of the string :\n", i);
    printf("\n");
    strcat(a, c);
    puts(a);
}