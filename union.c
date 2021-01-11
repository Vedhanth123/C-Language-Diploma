#include <stdio.h>
union std {
    int pin;
    char name[20];
};
void main()
{
    union std student;
    printf("Enter the pin no. of the student :\n");
    scanf("%d", &student.pin);
    printf("%u", &student.pin);
    scanf("%s", student.name);
    printf("%u", &student.name);
}