#include <stdio.h>
#include <stdlib.h>

int top = -1, n=10, item;
int *stack;

int isfull()
{
    if (top == n - 1) {
        printf("Stack is full\n");
        return 1;
    }
    return 0;
}

int isEmpty()
{
    if (top == -1) {
        printf("Stack is empty\n");
        return 1;
    }
    return 0;
}

int push()
{
    if (isfull()) {
        return 0;
    } else {
        printf("Enter the value to be pushed: ");
        scanf("%d", &item);
        top++;
        stack[top] = item;
        return 1;
    }
}


int pop()
{
    if (isEmpty()) {
        return 0;
    } else {
        printf("The popped value is: %d\n", stack[top]);
        stack[top] = 0;  
        top--;
        return 1;
    }
}

int main()
{

    stack = (int *)malloc(n * sizeof(int));
    if (!stack) {
        printf("Memory allocation failed\n");
        return 1;
    }

    
    while (top != 9) {
        push();
    }

    
    printf("The stack before popping is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", stack[i]);
    }

    while (top != -1) {
        pop();
    }

    printf("The stack after popping is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", stack[i]);
    }

    free(stack);

    return 0;
}
