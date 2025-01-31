#include <stdio.h>
int top=-1,n=5,item;
int stack[5];

int isfull()
{
if(top==n-1)
printf("stack is full");
else
return 0;
}

int isEmpty()
{
if(top==-1)
printf("stack is empty");
else
return 0;
}


int push()
{
if(isfull())
return 0;

else
{
printf("enter the value to be pushed\n");
scanf("%d",&item);
stack[top+1]=item;
}

}

int pop(int top)
{
if(isEmpty())
return 0;
else
{
printf("the popped value is:%d\n", stack[top]);
stack[top]=0;
}
}

void main()
{
while(top!=4)
{
push();
top++;
}
for(int i=0;i<5;i++)
{
printf("the stack before popping is..");
printf("%d\n", stack[i]);
}
while(top!=-1)
{
pop(top);
top--;
}
for(int i=0;i<5;i++)
{
printf("the stack after popping is..");
printf("%d\n", stack[i]);
}

}