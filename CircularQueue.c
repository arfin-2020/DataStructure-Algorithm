#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear = -1;

void enqueue(int x)
{
    if(front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else if((rear+1)%N == front)
    {
        printf("Exception Error! Array is Full no space for insertion\n");

    }
    else
    {
        rear = ((rear+1)%N);
        queue[rear] = x;
    }
}
    void dequeue()
    {
        if(front == -1 && rear == -1)
        {
            printf("Empty Array.\n");
        }
        else if(front == rear)
        {
            front = rear = -1;
        }
        else
        {
            printf("\nfrom Dequeue %d",queue[front]);
            front = (front+1)%N;
        }
    }

    void display()
    {
        int i;
        if(front == -1 && rear == -1)
        {
            printf("Empty Array.\n");
        }
        else
        {
            printf("Queue is: ");
            while(i!=rear)
            {
                printf("%d ",queue[i]);
                i = (i+1)%N;
            }
            printf("%d",queue[rear]);
        }
    }
    void peek()
    {
        if(front == -1 && rear == -1)
        {
            printf("Empty Array.\n");
        }
        else
        {
            printf("%d\n",queue[front]);
        }
    }

    int main()
    {
        enqueue(2);
        enqueue(-1);
        enqueue(5);
        enqueue(6);
        enqueue(7);
        display();
        dequeue();
        enqueue(2);
        enqueue(-1);
        enqueue(5);
        enqueue(6);
        return 0;
    }

