#include <stdio.h>
void main()
{
    int speed;
    printf("enter the speed of vehicle\n");
    scanf("%d/n",&speed);
    speed = (speed <= 65)? 65 : (speed <= 70)? 70:90;
    switch(speed)
    {
        case 65: printf("no speeding ticket"); break;
        case 70: printf("speeding ticket"); break;
        case 90: printf("more expensive speeding ticket"); break;
    }
}