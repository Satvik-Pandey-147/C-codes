#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct list{
    int data;
    struct list* next;
}list;

list* create_list(int d)
{
    list* head=malloc(sizeof(list));
    head -> data =d;
    head -> next =NULL;
    return head;
}

list* add_front(int d,list* h)
{
    list* head=create_list(d);
    head ->next=h;
    return head;
}

list* array_to_list(int d[],int size)
{
    list* head=create_list(d[0]);
    for(int i=1;i<size;i++)
        head=add_front(d[i],head);
    return head;
}

void bubble(list* h)
{
    int swapped;
    if(h==NULL)
        return;
    list* ptr1;
    list* ptr2=NULL;
    do {
        swapped = 0;
        ptr1 = h;

        while (ptr1->next != ptr2) {
            if (ptr1->data > ptr1->next->data) {
                // Swap data
                int temp = ptr1->data;
                ptr1->data = ptr1->next->data;
                ptr1->next->data = temp;
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        ptr2 = ptr1;
    } while (swapped);

}

void print_list(list *h)
{
    printf("the list is:\n");
    int l=1;
    while(h!=NULL)
    {
        printf("%d\t",h->data);
        h=h->next;
        if(l==5)
        {
            printf("\n");
            l=0;
        }
        l=l+1;
    }
}


void main()
{
    list* head=NULL;
    int arr[100];
    for(int x=0;x<100;x++)
    {
        arr[x]=rand();
    }
    head=array_to_list(arr,100);
    bubble(head);
    print_list(head);


}