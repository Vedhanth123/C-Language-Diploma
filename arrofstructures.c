#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student
{
    char name[50];
    int pin;
    char dept[20];
    char address[50];
};
void main()
{
    struct student s[10];
    int i, n;
    printf("Enter the no. of students :\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Enter the details of the student %d\n", i);
        printf("Enter the name of the student :\n");
        scanf("%s", s[i].name);
        printf("Enter the pin no. of the student :\n");
        scanf("%d", &s[i].pin);
        printf("Enter the department of the student :\n");
        scanf("%s", s[i].dept);
        printf("Enter the address of the student :\n");
        scanf("%s", s[i].address);
        printf("\nThe details of the student are :\n\n");
        printf("name of the student :\n");
        puts(s[i].name);
        printf("pin no. of the student :\n%d\n", s[i].pin);
        printf("department of the student :\n%s\n", s[i].dept);
        printf("address of the student :\n");
        puts(s[i].address);
    }
}