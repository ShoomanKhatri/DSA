#include<stdio.h> 
#include<conio.h> 
#include<malloc.h>

struct node
{
int item;
struct node *next;
};

typedef struct node NODE; NODE *start=NULL;

void insertAtbeginning()
{
NODE *ptr;
ptr=(NODE*) malloc(sizeof(NODE));

printf("\n enter thr item"); scanf("%d",&ptr->item);

ptr->next=start; start=ptr;
printf("\n success");
}

void insertAtlast()
{
NODE*ptr, *loc; ptr=(NODE*)malloc(sizeof(NODE)); ptr->next=NULL;

printf("\n enter the number"); scanf("%d",&ptr->item);

if (start==NULL)
{
 

}else
{
 
start=ptr;


loc=start;
while(loc->next! =NULL)
{
 
loc=loc->next;
}
loc->next=ptr;

}
printf("\n success");
}

 
void show()
{
 


NODE *ptr; ptr=start;
 

if(start==NULL)
printf("\n empty item");
else
{
while(ptr! =NULL)
{
printf("\n %d", ptr->item); ptr=ptr->next;
}
}
}


void insertAtpos()
{
NODE *ptr,*loc; int pos,count;

ptr=(NODE*)malloc(sizeof(NODE));

printf("\n enter the position="); scanf("%d",&pos);

printf("\n enter the item:"); scanf("%d",&ptr->item);

count=0; loc=start;
while(count<pos-2 && loc! =NULL)
{
loc=loc->next; count++;
}

if(count==pos-2)
{
 



}else
{

}
}
 
ptr->next=lac->next; loc->next=ptr; printf("\n success");


printf("\n wrong position");
 


void deleteAtbeginning()
{
NODE *ptr; if(start==NULL)
printf("\n empty"); else
{
ptr=start; start=ptr->next;
 
free(ptr);
printf("\n deleted");
}
}

void deleteAtlast()
{
NODE *ptr,*loc; ptr=start;

if(start==NULL)
printf("\n empty"); else if (ptr->next==NULL)
{
 



}
else
{
 
start=NULL; free(ptr);
printf("\n deleted");



while(ptr->next! =NULL)
{
 
loc=ptr; ptr=ptr->next;
}

lac->next=NULL; free(ptr);
printf("\n deleted");
}
}

void deleteAtpos()
{
NODE *ptr,*loc; int pos,count;

if(start==NULL)
printf("\n empty");
 
else
{
 


ptr=start;
printf("enter the position:"); scanf("%d",&pos);

count=0;
while(ptr->next! =NULL && count<pos-1 )
{
 
loc=ptr; ptr=ptr->next; count++;
}

if(count<pos-1)
{
printf("n invalid position");
 
}
else
{



}
}
}
 



lac->next=ptr->next; free(ptr);
printf("\n deleted");
 


void main()
{
int choice;

do
{
clrscr();
printf("\n1.insert At Beginning"); printf("\n2.insert At Last"); printf(" \n3.show"); printf("\n4.inset At position"); printf("\n5.delete At Beginning"); printf("\n6.delete At last"); printf("\n7.delete At position"); printf("\n8.exit");

printf("\n\nwhat do you want"); scanf("%d",&choice);

if(choice==1)
insertAtbeginning(); 

else if (choice==2)
insertAtlast(); 

else if (choice==3)
show(); 

else if(choice==4)
insertAtpos();

 else if( choice== 5)
deleteAtBeginning();

 else if( choice== 6)
deleteAtlast(); 

else if( choice== 7)
deleteAtpos();

else if( choice= =8)
printf("\n end");
else
printf("\n invaild");

getch();
}while(choice! =8);
}
