#include <stdio.h>
int fact(int n)
{
    if(n==0)
        return 1;
    else 
        return(fact(n-1)*n);
}
void main()
{
    int x,i;
    printf("find factorial of:\n");
    scanf("%d",&x);
    printf("%d\n",fact(x));

}