#include <stdio.h>
void main()
{
    int i=5;
    {
        int i=7,j=9;
        printf("%d\t%d\n",i,j);
    }
    printf("%d\n",i);
}