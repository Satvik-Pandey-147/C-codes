#include <stdio.h>
int fib(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else 
        return(fib(n-1)+fib(n-2));
}
int main()
{
    int x;
    printf("find  fibonacci number of\n");
    scanf("%d",&x);
    for(int i=0;i<=x;i++)
        printf("%d\n",fib(i));
}