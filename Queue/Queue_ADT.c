//Implementation of Queue using ADT 
#include<stdio.h>
#include<stdlib.h>
struct queue
{
int q0[10];
int front;
int rear;
};


void insert(struct queue **q,int item)
{
if(((*q)->front==-1)&&((*q)->rear==-1))
{
(*q)->front=0;
(*q)->rear=0;
(*q)->q0[(*q)->rear]=item;
}
else if((*q)->rear>=9)
{
printf("Overflow\n");
}
else
{
((*q)->rear)++;
(*q)->q0[(*q)->rear]=item;
}
}

int delete(struct queue **q)
{
if(((*q)->front==-1)&&((*q)->rear==-1))
{
printf("Underflow");
return 1;
}
else if((*q)->front==(*q)->rear)
{
int t=(*q)->q0[(*q)->front];
(*q)->front=(*q)->rear=-1;
return t;
}
else
{
int t=(*q)->q0[(*q)->front];
((*q)->front)++;
return t;
}
}
void display(struct queue **q1)
{
struct queue *q2=(struct queue *)malloc(sizeof(struct queue));
q2->front=-1;
q2->rear=-1;
while((*q1)->front!=-1)
{
int t1 =delete(q1);
printf("%d\t",t1);
insert(&q2,t1);
}
while((q2)->front!=-1)
{
int t2 =delete(&q2);
insert(q1,t2);
}
}

void reverse(struct queue **q)
{
if((*q)->front==-1)
return;
int t=delete(q);
reverse(q);
printf("%d\t",t);
insert(q,t);
}

int main()
{
struct queue *q1=(struct queue *)malloc(sizeof(struct queue));
q1->front=-1;
q1->rear=-1;
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




