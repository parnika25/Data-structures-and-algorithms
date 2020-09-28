//Circular header linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}*head;

//Creating
void create(int n)
{
struct node *temp;
struct node *new = (struct node *)malloc(sizeof(struct node));
new->data=n;
new->next=NULL;
if((head->next)==NULL)
head->next=new;
else
{
temp=head->next;
while(temp->next!=head->next)
temp=temp->next;
temp->next=new;
}
new->next=head->next;
(head->data)++;
}

//Insert at beginning
void insert_begin(int n1)
{
struct node *new = (struct node *)malloc(sizeof(struct node));
new->data=n1;
new->next=NULL;
struct node *temp=head->next;
while(temp->next!=(head->next))
temp=temp->next;
temp->next=new;
new->next=(head->next);
head->next=new;
(head->data)++;
}

//Delete the first node
void delete_first()
{
struct node *t1=head->next;
struct node *t2=head->next;
while(t2->next!=head->next)
t2=t2->next;
head->next=(head->next->next);
t2->next=head->next;
free(t1);
(head->data)--;
}

//Delete the last node
void delete_last()
{
struct node *t1=head->next;
struct node *t2=head->next;
while(t2->next!=head->next)
{
t1=t2;
t2=t2->next;
}
t1->next=t2->next;
free(t2);
(head->data)--;
}

//Display
void display()
{
struct node *temp=head->next;

printf("Length of the linked list : %d\n",(head->data));
do
{
printf("%d\t",temp->data);
temp=temp->next;
}
while(temp!=(head->next));
printf("\n");
}

int main()
{
head=(struct node *)malloc(sizeof(struct node));
head->data=0;
head->next=NULL;
int n,n1,ch;
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
create(n);
break;
case 2:
display();
break;
case 3:
printf("Enter the data for node\t" );
scanf("%d",&n1);
insert_begin(n1);
display();
break;
case 4:
delete_first();
display();
break;
case 5:
delete_last();
display();
break;
default:
printf("INVALI INPUT\n");
break;
}
}
printf("EXIT\n");
return 0;
}

