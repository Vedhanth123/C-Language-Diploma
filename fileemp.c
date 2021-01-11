#include <stdio.h>
struct emp
{
    int empno;
    char name[20];
    int salary;
};
void main()
{
    struct emp e1;
    FILE *fp;
    printf("Enter empno.,name,salary :\n");
    scanf("%d%s%d", &e1.empno, e1.name, &e1.salary);
    fp = fopen("hello.txt", "w");
    fprintf(fp, "Details of the employee :\nname : %s\nno. : %d\nsalary : %d", e1.name, e1.empno, e1.salary);
    fclose(fp);
}