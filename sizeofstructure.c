#include <stdio.h>
struct student
{
    char name[20];
    int rollno;
};
void main()
{
    struct student s1;
    printf("The size of the structure is %d:\n", sizeof(s1));
}