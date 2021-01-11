#include <stdio.h>
struct emo
{
    int pin;
    char name[20];
};
void main()
{
    struct emo s[5];
    int size, i;
    printf("Enter the no. of students :\n");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("Enter the pin and name of the students :\n");
        scanf("%d%s", &s[i].pin, s[i].name);
        printf("%d is pin\n%s is name", s[i].pin, s[i].name);
    }
}