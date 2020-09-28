#include<stdio.h>
#include<stdlib.h>
#define max 100

struct node
{
int data;
struct node *next;
};
struct node *top;

void push(int n)
{
struct node *new=(struct node *)malloc(sizeof(struct node));
new->data=n;
new->next=top;
top=new;
}

int pop()
{
if(top==NULL)
{
printf("Underflow\n");
return 1;
}
int n;
struct node *t=top;
n=t->data;
top=top->next;
free(t);
return n; 
}
void display()
{
if(top<0)
{
printf("The stack is empty\n");
return;
}
else
{
struct node *temp=top;
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
}
}
}
int main()
{
int n,ch,no;
while(ch!=0)
{
printf("\nEnter to do the operation\n");
printf("1 To push\n");
printf("2 To pop\n");
printf("3 To Display\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter the value\t");
scanf("%d",&n);
push(n);
break;
case 2:
pop();
break;
case 3:
printf("Elements in the stack\n");
display();
break;
default:
printf("Invalid\n");
break;
}
}
printf("EXIT\n");
return 0;
}



