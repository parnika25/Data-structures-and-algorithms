#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}; 

void create(struct node **start,int n)
{
struct node *temp;
struct node *new =(struct node *)malloc(sizeof(struct node));
new->data=n;
new->next=NULL;
if(*start==NULL)
{
*start=new;
new->next=*start;
}
else
{
temp=*start;
while(temp->next!=(*start))
 temp=temp->next;
temp->next=new;
new->next=*start;
}
}


void display(struct node **start)
{
struct node *temp=*start;
do
{
printf("%d\t",temp->data);
temp=temp->next;
}
while(temp!=(*start));
printf("\n");
}

void insert_begin(struct node **start,int n1)
{
struct node *temp=*start;
struct node *new =(struct node *)malloc(sizeof(struct node));
new->data=n1;
new->next=NULL;
while(temp->next!=(*start))
temp=temp->next;
temp->next=new;
new->next=*start;
*start=new;
}

void delete_first(struct node **start)
{
struct node *t1=*start;
struct node *t2=*start;
while(t2->next!=(*start))
t2=t2->next;
(*start)=(*start)->next;
t2->next=(*start);
free(t1);
}

void delete_last(struct node **start)
{
struct node *t1=*start;
struct node *t2=*start;
while(t2->next!=(*start))
{
t1=t2;
t2=t2->next;
}
t1->next=*start;
free(t2);
}
        

int main()
{
int n,n1,ch;
struct node *start=NULL;
while(ch!=0)
{
printf("Enter your choice\n");
printf("1 To create the linked list\n");
printf("2 To display the linked list\n");
printf("3 To insert a node at the beginning\n");
printf("4 To delete the first node\n");
printf("5 To delete the last node\n");
printf("0 To exit the loop\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter the data for nodes\t" );
scanf("%d",&n);
create(&start,n);
break;
case 2:
display(&start);
break;
case 3:
printf("Enter the data for node\t" );
scanf("%d",&n1);
insert_begin(&start,n1);
display(&start);
break;
case 4:
delete_first(&start);
display(&start);
break;
case 5:
delete_last(&start);
display(&start);
break;
default:
printf("INVALI INPUT\n");
break;
}
}
printf("EXIT\n");
return 0;
}

