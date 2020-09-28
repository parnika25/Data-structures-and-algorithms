#include<stdio.h>
#define max 100
struct stack
{
int s[max];
int top;
}s1;


void push(int n)
{
if(s1.top==(max-1))
printf("OVERFLOW");
else
{
s1.top++;
s1.s[s1.top]=n;
}
}

int pop()
{
int no;
if((s1.top)==(-1))
{
printf("Underflow");
return 1;
} 
else
{
no=(s1.s)[(s1).top];
(s1.top)--;
return no;
}
}


void display()
{
if((s1.top)==(-1))
return;
else
{
int b=pop();
display();
printf("%d\t",b);
push(b);
}
}


int main()
{
int n,ch;
(s1).top=-1;
while(ch!=0)
{
printf("\nEnter to do the operation\n");
printf("1 To push\n");
printf("2 To pop\n");
printf("3 To display\n");
printf("0 To Exit\n");
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
default:
printf("Invalid\n");
break;
case 3:
display();
break;
}
}
printf("EXIT\n");
return 0;
}

