#include <stdio.h>

void main()
{
    int subjects[4] = {40, 39, 29, 25};
    int sum = 0;
    int i = 0;
    for(i = 0; i < 4; i ++)
    {
        sum += subjects[i];
    }
    printf("%d is the sum",sum);
    printf("%d is the average of marks", sum/4);
}