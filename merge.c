#include <stdio.h>
void print(int size,int grade[])
{
    for(int i=0;i<size;i++)
        printf("%d\t",grade[i]);
    printf("\n");
}


void merge(int a[],int b[],int c[],int m,int n)
{
    int i=0,j=0,k=0;
    while(i<m&&j<n)
        if(a[i]<b[j])
            c[k++]=a[i++];
        else
            c[k++]=b[j++];
        
        while(i<m)
            c[k++]=a[i++];
        while(j<m)
            c[k++]=b[j++];
}

void main()
{
    const int size=5;
    int a[]={1,3,5,7,9},b[]={2,4,6,8,9};   // 2 sorted arrays can only be merged sorted
    int c[2*size];
    //printf("before merge sorting:\n");
    //print(size,grade);

    merge(a,b,c,size,size);

    printf("after sorting:\n");
    print(2*size,c);

}