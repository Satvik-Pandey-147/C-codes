#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct list
{
    int data;
    struct list *next;
}list;

int is_empty(list *l)
{
    return(l==NULL);
}

list *create_list(int d)
{
    list *head=malloc(sizeof(list));
    head->data=d;
    head->next=NULL; 
    return head;
}

list *add_front(int d,list *h)
{
    list *head=create_list(d);
    head->next=h;
    return head;
}

list *array_to_list(int d[],int size)
{
    list *head=create_list(d[0]);
    int i;
    for(i=1;i<size;i++)
    {
        head=add_front(d[i],head);
    }
    return head;
}


void print_list(list *h,char *title)
{
    printf("%s\n",title);
    while(h!=NULL)
    {
        printf("%d :",h->data);
        h=h->next;
    }
}


void main()
{
    list list_int;
    list *head=NULL;
    int data[6]={2,3,4,6,8,4};
    head=array_to_list(data,6);
    print_list(head,"list\n");
}