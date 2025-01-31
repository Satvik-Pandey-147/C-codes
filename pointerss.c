#include <stdio.h>
void main()
{
    int a=3;
    int *p=&a;    //p stores address of a
    printf("%p\n",p);  // or %lu instead of %p
    printf("%d\n",*p);
    printf ("a is at %p or %lu and is %d",p,p,*p);
    int data[5]={10,20,30,40,50};
    printf("\ndata is from %lu to %lu",data,data+5);    
}