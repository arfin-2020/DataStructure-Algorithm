#include<stdio.h>
#define CAPACITY 3

int stack[CAPACITY];
int top = -1;

void push(int x)
{
    if(top<CAPACITY-1)
    {
        top = top + 1;
        stack[top] = x;
        printf("Successfully added item: %d\n",x);
    }
    else
    {
        printf("Exception! No space.");
    }
}

int pop()
{
    if(top >= 0)
    {
        int value = stack[top];
        top = top -1;
        return value;
    }
    printf("Exception from POP! empty stack\n");
    return -1;
}
int peek()
{
    if(top >= 0)
    {
        return stack[top];
    }
    printf("Exception from peek! empty stack\n");
    return -1;
}

int main()
{
    printf("Implementing My stack in c.\n");
    push(10);
    push(20);
    push(30);
    printf("Remove Item: %d\n",pop());
    push(70);
    printf("Remove Item using peek: %d\n",peek());
    printf("Remove Item: %d\n",pop());
    return 0;
}
