#include <stdio.h>

void read_data(FILE *ptr,int d[],int *size)
{
    *size=0;
    while(fscanf(ptr,"%d",&d[*size])==1)
        (*size)++;
}

void print_data(int d[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\t",d[i]);
    }
}

double average(int d[],int size)
{
    double avg=0.0;
    for(int i=0;i<size;i++)
        avg+=d[i];
    return avg/size;
}

void main()
{
    int i,sz=10;
    FILE *ifp;
    int data[10]={};
    ifp=fopen("myhw","r");
    read_data(ifp,data,&sz);
    printf("my %d homework marks are:",sz);
    print_data(data,sz);
    printf("\n my average marks is %f",average(data,sz));
    printf("\n\n");
    fclose(ifp);
}