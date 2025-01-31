// // // PROBLEM - 1 :----

// // #include<stdio.h>
// // int main(){

// //     int a[5][5] = {
// //         {1,2,3,4,5},
// //         {1,3,5,7,9},
// //         {2,4,6,8,0},
// //         {10,20,30,40,50},
// //         {1,4,6,9,0}
// //     };
// //     int sumr=0, sumc=0;
// //     // row sum = 15 25 20 150 20
// //     // column sum = 15 33 .....

// //     for(int i=0;i<5;i++)
// //     {
// //         sumr=0;
// //         for(int j=0;j<5;j++)
// //         {
// //             sumr=sumr+a[i][j];
// //         }
// //         printf("sum of row %d is %d\n", i,sumr);
// //     }
// //     for(int i=0;i<5;i++)
// //     {
// //         for(int j=0;j<5;j++)
// //         {
// //             sumc=sumc+a[j][i];
// //         }
// //     }








// //     return 0;
// // }






// // PROBLEM - 2 :---

#include <stdio.h>
void main()
{
    int n,a[10],z=1,j,jj=0;
    printf("enter a number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        a[jj]=n%10;
        n=n/10;
        jj+=1;
    }
    for(int i=0;i<jj;i++)
    {
        for(int k=i+1;k<jj;k++)
        {
            if(a[i]==a[k])
            {
                printf("yes");
                z=0;
                goto lund;
            }
        }
    }
    lund:
    {
        if(z!=0)
        printf("No");
    }
}