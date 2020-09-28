#include<stdio.h>
#include<stdlib.h>
struct node
{
int coeff;
int expo;
struct node *next;
};

void create(struct node **start,int c,int e)
{
struct node *temp;
struct node *new = (struct node *)malloc(sizeof(struct node));
new->coeff=c;
new->expo=e;
new->next=NULL;
if(*start==NULL)
*start=new;
else
{
temp=*start;
while(temp->next!=NULL)
temp=temp->next;
temp->next=new;
}
}

void display(struct node **start)
{
struct node *temp=*start;
while(temp!=NULL)
{
printf(" + %dx%d",temp->coeff,temp->expo);
temp=temp->next;
}
printf("\n");
}

void add(struct node **start1,struct node **start2,struct node **start3)
{
struct node *t1=*start1;
struct node *t2=*start2;
while((t1!=NULL) && (t2!=NULL))
{
if(t1->expo>t2->expo)
{
create(start3,t1->coeff,t1->expo);
t1=t1->next;
}
else if(t2->expo>t1->expo)
{
create(start3,t2->coeff,t2->expo);
t2=t2->next;
}
else
{
if((t1->coeff)+(t2->coeff))
{
create(start3,((t1->coeff)+(t2->coeff)),t1->expo);
t2=t2->next;
t1=t1->next;
}
else
{
t1=t1->next;
t2=t2->next;
}
}
}
while(t1!=NULL)
{
create(start3,t1->coeff,t1->expo);
t1=t1->next;
}
while(t2!=NULL)
{
create(start3,t2->coeff,t2->expo);
t2=t2->next;
}
}


int main()
{
struct node *start1=NULL;
struct node *start2=NULL;
struct node *start3=NULL;
int c1,e1,choice,c2,e2;
while(choice!=0)
{
printf("Enter your choice\n");
printf("1 To create list1.\n");
printf("2 To create list2.\n");
printf("3 To display list1.\n");
printf("4 To display list2.\n");
printf("5 To add two lists.\n");
printf("0 To exit\n");
scanf("%d",&choice);
switch (choice)
{
case 1:
printf("Enter the coefficient\t");
scanf("%d",&c1);
printf("Enter the exponent\t");
scanf("%d",&e1);
create(&start1,c1,e1);
break;
case 2:
printf("Enter the coefficient\t");
scanf("%d",&c2);
printf("Enter the exponent\t");
scanf("%d",&e2);
create(&start2,c2,e2);
break;
case 3:
display(&start1);
break;
case 4:
display(&start2);
break;
case 5:
add(&start1,&start2,&start3);
display(&start3);
break;
default:
printf("INVALID INPUT\n");
break;
}
}
printf("Exit");
return 0;
}
