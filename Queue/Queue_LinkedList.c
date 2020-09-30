//Implementation of queue using linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct queue
{
struct node *front;
struct node *rear;
};
void insert(struct queue **q,int item)
{
struct node *new = (struct node *)malloc(sizeof(struct node));
new->data=item;
new->next=NULL;
if((*q)->front==NULL)
{
((*q)->front) =new;
((*q)->rear) =new;
}
else
{
((*q)->rear)->next=new;
(*q)->rear=new;
}
}

int delete(struct queue **q)
{
if((*q)->front==NULL)
{
printf("Underflow\n");
return 1;
}
else
{
int t=(*q)->front->data;
(*q)->front=(*q)->front->next;
return t;
}
}
void display(struct queue **q1)
{
struct queue *q2=(struct queue *)malloc(sizeof(struct queue));
q2->front=NULL;
q2->rear=NULL;
while((*q1)->front!=NULL)
{
int t1 =delete(q1);
printf("%d\t",t1);
insert(&q2,t1);
}
while((q2)->front!=NULL)
{
int t2 =delete(&q2);
insert(q1,t2);
}
}


void reverse(struct queue **q)
{
if((*q)->front==NULL)
return;
int t=delete(q);
reverse(q);
printf("%d\t",t);
insert(q,t);
}

int main()
{
struct queue *q1=(struct queue *)malloc(sizeof(struct queue));
q1->front=NULL;
q1->rear=NULL;
int ch,item;
while(ch!=0)
{
printf("\nEnter to do the operation\n");
printf("1 To insert in queue\n");
printf("2 To delete from queue\n");
printf("3 To display the queue\n");
printf("4 To reverse the queue\n");
printf("0 To Exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter the value\t");
scanf("%d",&item);
insert(&q1,item);
break;
case 2:
delete(&q1);
break;
case 3:
display(&q1);
break;
case 4:
reverse(&q1);
break;
default:
printf("Invalid\n");
break;
}
}
printf("EXIT\n");
return 0;
}

