#include <stdio.h>
void swap(int *i,int *j)
{
    int temp=*i;
    *i=*j;
    *j=temp;
}

void print(int size,int grade[])
{
    for(int i=0;i<size;i++)
        printf("%d\t",grade[i]);
    printf("\n");
}


void bubble(int size,int grade[])
{
    int i,j;
    for(i=0;i<size-1;i++) {
        for(j=0;j<size-i-1;j++)
        {
            if(grade[j]>grade[j+1])
                swap(&grade[j],&grade[j+1]);
        }
    }
}

void main()
{
    const int size=5;
    int grade[]={30,20,70,64,56};
    printf("before sorting:\n");
    print(size,grade);

    bubble(size,grade);

    printf("after sorting:\n");
    print(size,grade);

}