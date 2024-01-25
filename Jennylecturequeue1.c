#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue(int x)
{
    if(rear==N-1)
    {
        printf("Overflow");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
        printf("Enqueued element is %d \n",x);
    }
    else
    {
        rear++;
        queue[rear]=x;
        printf("Enqueued element is %d \n",x);
    }
     
}
void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("Underflow"); //Empty.
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        printf("Dequeued element is %d\n",queue[front]);
        front++;
    }
}
void display()
{
    int i;
    if(front==-1 && rear==-1)
    {
        printf("Underflow");
    }
    else
    {
        for(i=front;i<rear+1;i++)
        {
            printf("%d\n",queue[i]);
        }
    }
}
void peek()
{
    if(front==-1 && rear==-1)
    {
        printf("Underflow");
    }
    else
    {
        printf("%d\n",queue[front]);
    }
}

int main()
{
    enqueue(6);
    enqueue(5);
    enqueue(-1);
    dequeue();
    display();
    return 0;
}