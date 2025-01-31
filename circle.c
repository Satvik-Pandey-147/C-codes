#include <stdio.h>
#define pi 3.14159
int main()
{
    double a=0.0, r=0.0;
    printf("enter radius :");
    scanf("%lf", &r);
    a=pi*r*r;
    printf("area is %lf\n", a);
    return 0;
}