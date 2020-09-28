#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
struct node *prev;
};

void create(struct node **start,struct node **end,int n)
{
struct node *new=(struct node *)malloc(sizeof(struct node));
new->data=n;
new->next=NULL;
new->prev=NULL;
if((*start)==NULL)
(*start)=(*end)=new;
else
{
(*end)->next=new;
new->prev=*end;
*end=new;
}
}

void display_forward(struct node **start)
{
struct node *temp=*(start);
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
}
printf("\n");
}


void display_backward(struct node **end)
{
struct node *temp=*end;
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->prev;
}
printf("\n");
}

void insert_begin(struct node **start,int n1)
{
struct node *new=(struct node *)malloc(sizeof(struct node));
new->data=n1;
new->next=NULL;
new->prev=NULL;
new->next=(*start);
(*start)->prev=new;
(*start)=new;
}

void insert_nth_node(struct node **start,int n2,int c)
{
int k=1;
struct node *new=(struct node *)malloc(sizeof(struct node));
new->data=n2;
new->next=NULL;
new->prev=NULL;
struct node *temp=(*start);
while(k<(c-1))
{
temp=temp->next;
k++;
}
new->next=temp->next;
temp->next=new;
new->prev=temp;
temp->next->prev=new;
}

void delete_first(struct node **start)
{
struct node *temp=(*start);
(*start) = (*start)->next;
(*start)->prev=NULL;
free(temp);
}

void delete_last(struct node **end)
{
struct node *temp=*end;
(*end)=(*end)->prev;
(*end)->next=NULL;
free(temp);
}

void delete_nth(struct node **start,int n3)
{
int k=1;
struct node *t1=*start;
struct node *t2=*start;
while(k<n3)
{
t1=t2;
t2=t2->next;
k++;
}
t1->next=t2->next;
t2->next->prev=t1;
free(t2);
}


int main()
{
int n,n1,n2,ch,c,n3;
ch=1;
struct node *start=NULL;
struct node *end=NULL;
while(ch!=0)
{
printf("Enter your choice\n");
printf("1 To create the linked list\n");
printf("2 To display the linked list in forward direction\n");
printf("3 To display the linked list in backward direction\n");
printf("4 To insert a node at the beginning\n");
printf("5 To insert a node at the nth position\n");
printf("6 To delete the first node\n");
printf("7 To delete the last node\n");
printf("8 To delete the nth node\n");
printf("0 To exit the loop\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter the data for nodes\t" );
scanf("%d",&n);
create(&start,&end,n);
break;
case 2:
display_forward(&start);
break;
case 3:
display_backward(&end);
break;
case 4:
printf("Enter the data for nodes\t" );
scanf("%d",&n1);
insert_begin(&start,n1);
display_forward(&start);
break;
case 5:
printf("Enter the data for nodes\t" );
scanf("%d",&n2);
printf("Enter the position\t");
scanf("%d",&c);
insert_nth_node(&start,n2,c);
display_forward(&start);
break;
case 6:
delete_first(&start);
display_forward(&start);
break;
case 7:
delete_last(&end);
display_forward(&start);
break;
case 8:
printf("Enter the position\t");
scanf("%d",&n3);
delete_nth(&start,n3);
display_forward(&start);
break;
default:
printf("INVALI INPUT\n");
break;
}
}
printf("EXIT\n");
return 0;
}

