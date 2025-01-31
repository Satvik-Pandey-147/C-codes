#include <stdio.h>
void main()
{
    int m,n,o,p,sum=0;
        printf("enter the order of matrix");
        scanf("%d %d",&m,&n);

        printf("enter the order of matrix 2");
        scanf("%d %d",&o,&p);

    int a[m][n];
    int b[o][p];
    int c[m][p];

        for(int jj=0;jj<m;jj++)
            {
                for(int kk=0;kk<p;kk++)
                {
                    c[jj][kk]=0;
                }
            }

        printf("enter the elements of matrix 1: ");
        for(int i=0;i<m;i++)
            {
                for(int j=0;j<n;j++)
                {
                    scanf("%d", &a[i][j]);
                }
            }
    
        printf("enter the elements of matrix 2: ");
            for(int i=0;i<o;i++)
                {
                    for(int j=0;j<p;j++)
                    scanf("%d", &b[i][j]);
                }

    if(n==o)
    {
        for(int l=0;l<m;l++)
        {
            for(int z=0;z<p;z++)
            {
                for(int i=0;i<o;i++)
                {
                    c[l][z]=c[l][z]+(a[l][i]*b[i][z]);
                }
            }
        }
        printf(" the resultant matrix is: ");

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<p;j++)
            printf("%d\n", c[i][j]);
        }
    }
    else
    printf("matrix multiplication not possible\n");
}




                // for(int l=0;l<m;l++)
                // {
                //     for(int z=0;z<p;z++)
                //     c[l][z]=sum;
                //     sum=0;
                // }


// for(int i=0;i<m;i++)
// {
//     for(int j=0;j<n;j++)
//     {
//         for(int k=0;k<o;k++)
//         {
//             sum=sum+(a[i][j]*b[k][i]);
//         
//     }
// }


// c[k][]=c[m][p]+(a[m][n]*b[o][m]);



// #include<stdio.h>
// int main()
// {
//     int a, b, c, i, j , k, m , n;

    
//     printf("Enter the order of matrix 1 : ");
//     scanf("%d %d", &a, &b);
//     int m[a][b] = {};
//     for(i=0; i<a; i++)
//         {
//             for(j=0; j<b; j++)
//             {
//                 scanf("%d", &a[i][j]);
//             }
//         }


//     printf("Enter the order of matrix 2 : ");
//     scanf("%d %d", &b, &c);

//     int n[b][c] = {};

//     for(j=0; j<a; j++)
//         {
//             for(k=0; k<b; k++)
//             {
//                 scanf("%d", &a[j][k]);
//             }
//         }








//     return 0;
// }