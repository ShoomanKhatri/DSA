#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue()
{
    int x;
    printf("Enter data:");
    scanf("%d",&x);
    if(rear==N-1)
    {
        printf("Overflow");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
        printf("Enqueued element is %d",x);
    }
    else
    {
        rear++;
        queue[rear]=x;
        printf("Enqueued element is %d",x);
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
        printf("Item deleted");
    }
    else
    {
        printf("Dequeued element is %d",queue[front]);
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
            printf("%d",queue[i]);
        }
    }
}
void peek()             //checking the value of front.


{
    if(front==-1 && rear==-1)
    {
        printf("Underflow");
    }
    else
    {
        printf("%d",queue[front]);
    }
}

int main()
{
    int ch;
    do
    {
        printf("\nEnter choice: \n 1:enqueue 2:dequeue 3:display 4:peek \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: enqueue();
            break;

            case 2: dequeue();
            break;

            case 3: display();
            break;

            case 4: peek();
            break;
            
            default: printf("\n invalid choice");
        }
    } while(ch!=0);
    return 0;
}