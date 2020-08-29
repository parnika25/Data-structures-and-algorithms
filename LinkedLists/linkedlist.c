#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}; 
struct node *start=NULL;

//Create new nodes
void create_list(int n)
{
struct node *temp;
struct node *new =(struct node *)malloc(sizeof(struct node));
new->data=n;
new->next=NULL;
if(start==NULL)
{
start=new;
}
else
{
temp=start;
while(temp->next!=NULL)
 temp=temp->next;
temp->next=new;
}
}


//Display the list
void display()
{
struct node *temp=start;
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
}
printf("\n");
}


//Insert a node at the beginning
void insert_begin(int e)
{
struct node *new = (struct node *)malloc(sizeof(struct node));
new->data=e;
new->next=start;
start=new;
}


//To insert a given node after a given value
void insert_after(int a,int b)
{
struct node *temp=start;
struct node *new = (struct node *)malloc(sizeof(struct node));
new->data=b;
new->next=NULL;
while(temp->data!=a)
temp=temp->next;
new->next=temp->next;
temp->next=new;
}


//To insert a given node before a given value
void insert_before(int c,int d)
{
struct node *t1,*t2;
t1=t2=start;
struct node *new = (struct node *)malloc(sizeof(struct node));
new->data=d;
new->next=NULL;
while(t2->data!=c)
{
t1=t2;
t2=t2->next;
}
new->next=t2;
t1->next=new;
}


//To count the number of nodes
void count()
{
int k=0;
struct node*temp=start;
while(temp!=NULL)
{
temp=temp->next;
k++;
}
printf("Total no of nodes : %d\n",k);
}


//To check if the given item is present or not and also its position
void check(int item)
{
int pos=1;
struct node *temp=start;
while(temp!=NULL)
{
if(temp->data==item)
{
printf("Item Found\n");
printf("Position of item is   %d\n",pos);
return ;
}
temp=temp->next;
pos++;
}
printf("Item NOT found\n");
return ;
}


//To find the sum all nodes
void sum()
{
int sum=0;
struct node *temp=start;
while(temp!=NULL)
{
sum=sum+temp->data;
temp=temp->next;
}
printf("Sum of all the nodes is \t%d",sum);
printf("\n");
}



int main()
{
int n,choice,item,a,b,c,d,e;
while(1)
{
printf("Enter your choice \n1 To create a new node \n2 To add a node at the beginning\n3 To insert a given node after a given value\n4 To insert a given node before a given value\n5 To display the list\n6 To count the no of nodes\n7 To check if the given item is present or not and also its position\n8 To find the sum all the nodes\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter the values for nodes\t" );
scanf("%d",&n);
create_list(n);
break;
case 2:
printf("Enter the data to be added at the beginning\t");
scanf("%d",&e);
insert_begin(e);
break;
case 3:
printf("Enter the value after which the element has to be added\t");
scanf("%d",&a);
printf("Enter the data to be added\t");
scanf("%d",&b);
insert_after(a,b);
break;
case 4:
printf("Enter the value before which the element has to be added\t");
scanf("%d",&c);
printf("Enter the data to be added\t");
scanf("%d",&d);
insert_before(c,d);
break;
case 5:
display();
break;
case 6:
count();
break;
case 7:
printf("Enter the item to be found\t");
scanf("%d",&item);
check(item);
break;
case 8:
sum();
break;
default:
printf("Invalid Input\n");
}
}
return 0;
}


