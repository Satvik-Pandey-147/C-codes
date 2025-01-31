#include <stdio.h>
#include<stdlib.h>
#define max 10
int top=-1;
int stack[max];

void push(int item)
{
    if(top==max-1)
    {
        printf("stack is full\n");
    }
    else
    {
        stack[++top]=item;
    }
}

void pop()
{
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("Item : %d popped from the stack\n", stack[top--]);
    }
    printf("\n");
}

void peek()
{
    printf("Topmost element of the stack is: %d",stack[top]);
}

void display()
{
    for(int i=0;i<=top;i++)
        printf("%d\t",stack[i]);
}

void main()
{
    int choice,item;
    while(1)
    {
        printf("enter operation\n 1. Push\n 2. Pop\n 3. Peek\n 4. Display\n 5. Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("enter element to push\n");
                scanf("%d",&item);
                push(item);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default: printf("enter valid choice\n");
        }
    }
}