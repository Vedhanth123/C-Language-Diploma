#include <stdio.h>
struct employee
{
    int no;
    char name[20];
    float salary;
};
void main()
{
    struct employee e1;
    printf("Enter employee no, employee name, employee salary :\n");
    scanf("%d%s%f", &e1.no, e1.name, &e1.salary);
    printf("Employee name: %s\nEmployee no. %d\nEmployee salary :%f", e1.name, e1.no, e1.salary);
}