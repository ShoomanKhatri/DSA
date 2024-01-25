#include<stdio.h>
#define N 5
int stack[N];
int top=-1;
void push()
{
    int x;
    printf("Enter data:");
    scanf("%d",&x);
    if (top==N-1)
    {
        printf("Overflow"); //Stack is full.
    }
    else
    {
        top++;
        stack[top]=x;
    }
}

void pop()
{
    int item;
    if(top==-1)
    {
        printf("Underflow"); //Stack is empty.
    }
    else
    {
        item=stack[top];
        top--;
        printf("%d",item);
    }
}

void peek()    //checking the value of top without removing element.
{
    if(top==-1)
    {
        printf("\n Stack is empty");
    }
    else
    {
        printf("%d",stack[top]);
    }
}

void display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d",stack[i]);
    }
}

int main()
{
    int ch;
    // clrscr();
    do
    {
        printf("\nEnter choice: \n 1:push 2:pop 3:peek 4:display \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: push();
            break;

            case 2: pop();
            break;

            case 3: peek();
            break;

            case 4: display();
            break;
            
            default: printf("\n invalid choice");
        }
    } while(ch!=0);
    return 0;
}