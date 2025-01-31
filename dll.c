#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node
{
    char name[20];
    char usn[10];
    char branch[5];
    int sem;
    char phno[10];
    struct Node* next;
    struct Node* prev;
};
typedef struct Node* node;

node create()
{
    node temp;
    temp=(node)malloc(sizeof(struct Node));
    temp->next=temp->prev=NULL;
    printf("\n Name:");
    scanf("%s",temp->name);
    printf("\n USN: ");
    scanf("%s", temp->usn);
    printf("\n Branch: ");
    scanf("%s", temp->branch);
    printf("\n Sem: ");
    scanf("%d", &temp->sem);
    printf("\n Ph no: ");
    scanf("%s", temp->phno);
    return temp;
}

node insert_front(node head)
{
    node temp;
    temp=create();
    if(head==NULL)
        return temp;
    else
    {
        temp->prev=NULL;
        temp->next=head;
        head->prev=temp;
        return temp;
    }
}
node insert_rear(node head)
{
    node temp;
    temp=create();
    if(head==NULL)
        return temp;
    else
    {
        node cur;
        cur=head;
        while(cur->next!=NULL)
        {
            cur=cur->next;
        }
        cur->next=temp;
        temp->prev=cur;
        temp->next=NULL;
        return head;
    }
}

node del_front(node head)
{
    node temp;
    if(head==NULL)
    {
        printf("LL is empty");
        return head;
    }
    else
    {
        temp=head->next;
        temp->prev=NULL;
        free(head);
        return temp;
    }
}

node del_rear(node head)
{
    node temp,cur;
    if(head==NULL)
    {
        printf("LL is empty");
        return temp;
    }
    else
    {
        temp=head;
        cur=head->next;
        while(cur->next!=NULL)
        {
            temp=temp->next;
            cur=cur->next;
        }
        temp->next=NULL;
        free(cur);
        return head;
    }
}

void display(node head)
{
    node temp=head;
    while(temp!=NULL)
    {
        printf("Name:%s\t", temp->name);
        printf("USN:%s\t", temp->usn);
        printf("Branch:%s\t", temp->branch);
        printf("Sem:%d\t", temp->sem);
        printf("Ph no:%s\t", temp->phno);
        printf("\n");
        temp=temp->next;
    }
}

void main()
{
node head = NULL;
int choice, item;
while(1)
{
printf("\n\n Enter the choice \n1.Insert Front \n2.InsertRear \n3.Delete Front \n4.Delete Rear \n5.Display \n6.Exit\n");
scanf("%d", &choice);
switch (choice)
{
    case 1: head = insert_front(head);
        break;
    case 2: head = insert_rear(head);
        break;
    case 3: head = del_front(head);
        break;
    case 4: head = del_rear(head);
        break;
    case 5: display(head);
        break;
    case 6: exit(0);
        default: printf("\nWrong choice\n");
}
}
}