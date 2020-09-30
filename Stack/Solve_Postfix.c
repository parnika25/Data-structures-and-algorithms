#include<stdio.h>
#include<stdlib.h>
#define max 100
struct stack
{
int s[max];
int top;
};

void push(struct stack **s1,int n)
{
if(((*s1)->top)==(max-1))
printf("OVERFLOW");
else
{
((*s1)->top)++;
((*s1)->s)[(*s1)->top]=n;
}
}

int pop(struct stack **s1)
{
int no;
if(((*s1)->top)==(-1))
{
printf("Underflow");
return 1;
} 
else
{
no=((*s1)->s)[(*s1)->top];
((*s1)->top)--;
return no;
}
}
typedef enum{plus,minus,times,divide,eos,operand}precedence;
precedence get_token(char exp[],char *symbol,int *n)
{
*symbol=exp[(*n)++];
switch(*symbol)
{
case '+': return plus;
case '-': return minus;
case '*': return times;
case '/': return divide;
case '\0': return eos;
default: return operand;
}
}
int eval_postfix(struct stack **s1,char exp[])
{
precedence token;
char symbol;
int op1,op2;
int n=0;
token=get_token(exp,&symbol,&n);
while(token!=eos)
{
if(token==operand)
push(s1,symbol-'0');
else
{
op2=pop(s1);
op1=pop(s1);
switch(token)
{
case plus: 
push(s1,op1+op2);
break;
case minus:
push(s1,op1-op2);
break;
case times: 
push(s1,op1*op2);
break;
case divide:
push(s1,op1/op2);
break;
}
}
token=get_token(exp,&symbol,&n);
}
}

int main()
{
struct stack *s1=(struct stack*)malloc(sizeof(struct stack));
s1->top=-1;
char ch[30];
scanf("%[^\n]",ch);
eval_postfix(&s1,ch);
printf("%d",pop(&s1));
return 0;
}

