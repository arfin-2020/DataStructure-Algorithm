#include<stdio.h>

#define CAPACITY 5

int queue[CAPACITY];
int front = -1;
int rear = -1;
int i;

void enqueue(int x)
{
    if(rear == CAPACITY-1)
    {
        printf("Exception! no space");
    }
    else if(rear == -1 && front == -1)
    {
        front = rear = 0;
        queue[rear] = x;
        printf("Data Successfully inserted: %d\n",queue[rear]);
    }
    else
    {
        rear ++;
        queue[rear]  = x;
        printf("Data Successfully inserted: %d\n",queue[rear]);
    }
}

void dequeue()
{
    if(rear == -1 && front == -1)
    {
        printf("Exception ERROR! Empty Queue");
    }
    else if(front == rear){
        front = rear = -1;
        printf("Data Deleted Successfully: %d\n",queue[front]);
    }
    else{
        front++;
        printf("Data Deleted Successfully: %d\n",queue[front]);
    }
}


void display(){
    if(front ==-1 & rear==-1){
        printf("Exception ERROR! Empty Queue");
    }
    else{
            printf("Display all data in queue:");
        for(i=front;i<rear+1;i++){
            printf("%d ",queue[i]);
        }
    }
}


void peek(){
        if(front ==-1 & rear==-1){
        printf("Exception ERROR! Empty Queue");
    }
    else{
        printf("\nRemoving data using peek: %d\n",queue[front]);
    }
}
int main()
{
      enqueue(2);
      enqueue(5);
      enqueue(-1);
      display();
      peek();
      dequeue();
      peek();
      display();
      enqueue(2);
      display();
      return 0;
}
