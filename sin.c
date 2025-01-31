#include<stdio.h>
#include<math.h>
void main()
{
    float pi=3.1415;
    printf(" x\t  sin(x)\t cos(x)\n");
    printf("------------------------------\n");
    for(float i=0;i<=1.1;i=i+0.1)
    {
        printf("%0.1f \t%f \t%f\n",i, sin(i), cos(i));
    }
}