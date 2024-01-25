#include<stdio.h>  //linear queue.
int FRONT = -1;
int REAR = -1;
#define MAXSIZE 5
int QUEUE[5];


void enqueue () {      //This is for inserting elements. //This is fifo method.
    if ( REAR == MAXSIZE -1 ) {
            printf("Full");
    } else {
            if( FRONT == -1 ) 
                FRONT = 0;
            REAR++;
            printf("\n Enter num: \n");
            scanf("%d", &QUEUE[REAR]);

    }
}

void dequeue () {
    if ( REAR == -1)
        printf("Empty"); 
    else if( FRONT == REAR ) {
            FRONT = -1;
            REAR = -1;
    } else {
        FRONT++;
        printf("\n iTEM DELETED. \n");

    } 
    
    
}

void show() {
    int i;
    if( FRONT == -1 ) 
        printf("\n Empty");
    else {
        for( i = FRONT; i<= REAR ; i++ ){
            printf("\n %d", QUEUE[i]);
        }
    }
}

int main() {
    int choice;
    printf("\n Hello, User. \n");
    printf("\n Please enter your choice. \n");
    printf("\n 1 for pushing elements into queueue. \n");
    printf("\n 2 for poping(deleting) elements from queueu. \n");
    printf("\n 3 for showing you all elements of queueue. \n");
    printf("\n 4 for exiting from the program. \n");
    

    scanf("%d", &choice);

    do {
         switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
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