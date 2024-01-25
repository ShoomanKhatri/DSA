#include<stdio.h>
#define MAX_SIZE 5
int STACK[5];
int top = -1;


void show();
void push();
void pop();


int main() {
    int choice;
    printf("\n Hello, User. \n");
    printf("\n Please enter your choice. \n");
    printf("\n 1 for pushing elements into STACK. \n");
    printf("\n 2 for poping(deleting) elements from STACK. \n");
    printf("\n 3 for showing you all elements of STACK. \n");
    printf("\n 4 for exiting from the program. \n");
    scanf("%d", &choice);

    do {
         switch (choice) {
            case 1:
                printf("\n Your choice is %d i.e Pushing to STACK. \n", choice);
                push();
                break;
            case 2:
                printf("\n Your choice is %d i.e Popping from STACK. \n", choice);
                pop();
                break;
            case 3:
                printf("\n Your choice is %d i.e Seeing all elements in STACK. \n", choice);
                show();
                break;
            
            default:
                printf("\n You existed from the program. \n");
                break;
            }
        printf("\n Enter next choice. \n");
        scanf("\t%d", &choice);

    } while ( choice == 1 || choice == 2 || choice == 3 );

    printf("\n Thank you for using this program. \n");
   
    return 0;
}

void push() {
    if( top == MAX_SIZE - 1 )
        printf("\n Sorry, the STACK is Full. \n");
    else {
        top++;
        printf("\n Enter your element to insert in STACK: \n");
        scanf("\t%d", &STACK[top]);
    }

}

void pop() {
    if( top == -1 )
        printf("\n Sorry, the STACK is Empty. \n");
    else {
        top--;
        printf("\n Last inserted ELEMENT deleted from the stack. \n");
    }
}

void show() {
    int i;
    if( top == -1 )
        printf("\n Sorry, the STACK is Empty. \n");
    else {
        for( i = top; i>= 0; i--) {
            printf("\n %d \n", STACK[i]);
        }
    }
}
