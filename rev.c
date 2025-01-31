#include <stdio.h>
#include <string.h>
#define MAX 100
char stack[MAX];
int top=-1;

void push(char num)
{
    stack[++top]=num;
}

char pop()
{
    if(top==-1)
        return '\0';
    else
        return stack[top--];
}

int main()
{
    char n[MAX];
    //char str[MAX];

    printf("enter a number");
    fgets(n,sizeof(n),stdin);
    //sprintf(str,"%d",n);
    for(int i=0;i<(strlen(n));i++)
    {
        // if(n[i]==' ')
        //     push('+');
        // else
            push(n[i]);
    }

    while(top!=-1)
    {
        char j=pop();
        // if(j=='+')
        //     printf(" ");
        // else
            printf("%c",j);
    }
    printf("\n");
    return 0;
}