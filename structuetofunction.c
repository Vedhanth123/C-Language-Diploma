#include <stdio.h>
struct student
{
    int pin;
    char name[20];
};
void function(struct student student1);
void main()
{
    struct student s1;
    printf("Enter the pinno. and name of the student :\n");
    scanf("%d%s", &s1.pin, s1.name);
    function(s1);
}
void function(struct student s1)
{
    printf("pinno. of the student is %d\nname of the student is %s", s1.pin, s1.name);
}
