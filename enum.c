#include <stdio.h>
enum day {sun,mon,tue,wed,thu,fri,sat};   //declare
void print_day(enum day d)
{
    switch(d)
    {
        case sun:printf("sunday");
            break;
        case mon:printf("monday");
            break;
        case tue:printf("tuesday");
            break;
        case wed:printf("wednesday");
            break;
        case thu:printf("thursday");
            break;
        case fri:printf("friday");
            break;
        case sat:printf("saturday");
            break;
        default:printf("error");
    }
}

enum day next_day(enum day d)
{
    return ((d+1)%7);
}

int main()
{
    enum day today=mon;
    print_day(today);
    printf("\n\n");
    print_day(7);
    printf("\n\n");
    print_day(next_day(next_day(today)));
    return 0;
}