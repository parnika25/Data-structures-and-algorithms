#include<stdio.h>
#include<stdlib.h>
#define max 100
struct stack
{
int s[max];
int top1;
int top2;
};

void push1(struct stack **s1,int n)
{
if(((*s1)->top1)==((*s1)->top2)-1)
{
printf("OVERFLOW\n");
return;
}
else
{
((*s1)->top1)++;
(*s1)->s[(*s1)->top1]=n;
}
}

void push2(struct stack **s1,int n)
{
if(((*s1)->top1)==((*s1)->top2)-1)
{
printf("OVERFLOW\n");
return;
}
else
{
(((*s1)->top2)--);
(*s1)->s[(*s1)->top2]=n;
}
}

int pop1(struct stack **s1)
{
int no1;
if(((*s1)->top1)==(-1))
{
printf("Underflow\n");
return 1;
} 
else
{
no1=((*s1)->s)[(*s1)->top1];
(((*s1)->top1)--);
return no1;
}
}

int pop2(struct stack **s1)
{
int no;
if(((*s1)->top2)==10)
{
printf("Underflow\n");
return 1;
} 
else
{
no=((*s1)->s)[(*s1)->top2];
(((*s1)->top2)++);
return no;
}
}

int main()
{
int ch=1,n2,n3;
struct stack *s1=(struct stack *)malloc(sizeof(struct stack));
s1->top1=(-1);
s1->top2=10;
while(ch!=0)
{
printf("\nEnter to do the operation\n");
printf("1 To push in stack 1\n");
printf("2 To pop from stack 1\n");
printf("3 To push in stack 2\n");
printf("4 To pop from stack 2\n");
printf("0 To Exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter the value\t");
scanf("%d",&n2);
push1(&s1,n2);
break;
case 2:
printf("Top data of stack 1:\t%d",pop1(&s1));
break;
case 3:
printf("Enter the value\t");
scanf("%d",&n3);
push2(&s1,n3);
break;
case 4:
printf("Top data of stack 2:\t%d",pop2(&s1));
break;
default:
printf("Invalid\n");
break;
}
}
printf("EXIT\n");
return 0;
}

