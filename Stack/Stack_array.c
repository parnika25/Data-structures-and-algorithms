#include<stdio.h>
#define max 100
void push(int n);
int pop();
void display();
int s[max];
int top=-1;
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

void push(int n)
{
if(top==(max-1))
printf("OVERFLOW");
else
{
(top)++;
s[top]=n;
}
}

int pop()
{
int no;
if(top==(-1))
{
printf("Underflow");
return -1;
}
else
{
no=s[top];
(top)--;
return no;
}
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
int b=pop();
display();
printf("%d\t",b);
push(b);
}
}



