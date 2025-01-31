#include <stdio.h>
typedef enum Month {jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec}month;  
typedef struct date 
{
    month m;
    int d;
}date;

void print_day(date today)
{
    switch(today.m)
    {
        case jan:printf("%d january",today.d);
            break;
        case feb:printf("%d february",today.d);
            break;
        case mar:printf("%d march",today.d);
            break;
        case apr:printf("%d april",today.d);
            break;
        case may:printf("%d may",today.d);
            break;
        case jun:printf("%d june",today.d);
            break;
        case jul:printf("%d july",today.d);
            break;
        case aug:printf("%d august",today.d);
            break;
        case sep:printf("%d september",today.d);
            break;
        case oct:printf("%d october",today.d);
            break;
        case nov:printf("%d november",today.d);
            break;
        case dec:printf("%d december",today.d);
            break;
        default:printf("error");
    }
}

void next_date(date *today)
{
    if((*today).d==31 && ((*today).m==jan||(*today).m==mar||(*today).m==may||(*today).m==jul||(*today).m==aug||(*today).m==oct||(*today).m==dec))
    {
        (*today).d=1;
        (*today).m=((((*today).m)+1)%12);
    }
    else if((*today).d==30 && ((*today).m==apr||(*today).m==jun||(*today).m==sep||(*today).m==nov))
    {
        (*today).d=1;
        (*today).m=((((*today).m)+1)%12);
    }
    else if((*today).d==28 && (*today).m==feb)
    {
        (*today).d=1;
        (*today).m=((((*today).m)+1)%12);
    }
    else
    {
        ((*today).d)++;
        (*today).m;
    }
}

int main()
{
    date today;
    printf("enter the month today(0 for jan 1 for feb......11 for dec):\n");
    scanf("%d",&today.m);
    printf("enter the day today:\n");
    scanf("%d",&today.d);
    // printf("today is: %d %s\n",tod,today);
    print_day(today); 
    printf("\n\n");
    next_date(&today);
    print_day(today); 

    return 0;
}

