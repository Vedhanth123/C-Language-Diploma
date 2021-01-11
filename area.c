#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, s;
    float area;
    printf("assign any values for a,b,c");
    scanf("%d%d%d", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("%f", area);
    return 0;
}
