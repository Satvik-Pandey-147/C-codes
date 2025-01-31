#include <stdio.h>
#include <math.h>
void main()
{
    float x;
    printf("enter the value of x between 0 and 1\n");
    scanf("%f", &x);
    printf("the value of the sine{%f} is: %f", x,sin(x));  /*the answer is in radians*/
}