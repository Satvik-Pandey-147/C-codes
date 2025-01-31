#include <stdio.h>
void swap(int i,int j)
{
    int temp=i;
    i=j;
    j=temp;
}

void swapp(int *i,int *j)
{
    int temp=*i;             // * means dereferencing
    *i=*j;
    *j=temp;
}

void main()
{
    int a=5,b=8;
    swap(a,b);
    printf("%d\t%d\n",a,b);     // it diddn't change because the function could only change locally
    swapp(&a,&b);
    printf("%d\t%d",a,b);      //it works
}