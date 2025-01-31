#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define m 100

char pal[m];
int top = -1;

void push(char c);
char pop();

int main()
{
    int count=0;

    printf("Enter the palindrome: ");
    fgets(pal, sizeof(pal), stdin);
    pal[strcspn(pal , "\n")] = '\0' ;

    for(int i=0; i<strlen(pal); i++)
    {
        push(pal[i]);
    }

    for(int i=0; i<strlen(pal)/2; i++)
    {
        if(tolower(pal[i]) == tolower(pop()))

        {
            count++;
        }

    }
            if(count==(strlen(pal)/2))
            printf("pallindrome");
        else
            printf("Not pallindrome");
}

void push(char c)
{
    pal[++top] = c;

}

char pop()
{
    return pal[top--];
}