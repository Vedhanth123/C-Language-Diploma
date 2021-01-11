#include <stdio.h>
void main()
{
    char alphabet;
    printf("Enter the alphabet you want to check :\n");
    scanf("%c", &alphabet);
    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' || alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U')
        printf("The alphabet is vowel ");
    else
        printf("The alphaber is a consonant ");
}