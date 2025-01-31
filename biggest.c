#include <stdio.h>

int big(int a ,int b ,int c ,int d)
{
    int arr[4]={a,b,c,d};
    int j=arr[0];
    for(int i=1;i<=3;i++)
    {
        if(j<=arr[i])
            j=arr[i];
    }
    return j;
}


void main()
{
    int a,b,c,d;
    printf("enter 4 numbers");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int bigg=big(a,b,c,d);
    printf("the biggest number is: %d",bigg);
}