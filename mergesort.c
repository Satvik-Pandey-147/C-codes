#include <stdio.h>
void print(int size,int grade[])
{
    for(int i=0;i<size;i++)
        printf("%d\t",grade[i]);
    printf("\n");
}


void merge(int a[],int b[],int c[],int m)
{
    int i=0,j=0,k=0;
    while(i<m&&j<m)
        if(a[i]<b[j])
            c[k++]=a[i++];
        else
            c[k++]=b[j++];
        
        while(i<m)
            c[k++]=a[i++];
        while(j<m)
            c[k++]=b[j++];
}


void mergesort(int a[],int size)
{
    int j,k;
    int w[size];
    for(j=1;j<size;j*=2){
        for(k=0;k<size-j;k+=2*j)
            merge(a+k,a+j+k,w+k,j);
        for(k=0;k<size-j;k++)
            a[k]=w[k];
    }
}

void main()
{
    const int size=10;
    int a[]={1,3,5,7,9,2,4,6,8,9};   // 2 sorted arrays can only be merged sorted
    //printf("before merge sorting:\n");
    //print(size,grade);

    mergesort(a,size);

    printf("after sorting:\n");
    print(size,a);

}