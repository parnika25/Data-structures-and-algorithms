//Sparse matix representation and transpose in triplet format
#include<stdio.h>
#include<stdlib.h>
struct node
{ 
int row;
int col;
int val;
struct node *next;
}*head;

//create sparse matrix
void create(int A[5][5],int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if((A[i][j])!=0)
{
struct node *new=(struct node *)malloc(sizeof(struct node));
new->row=i;
new->col=j;
(new->val)=A[i][j];
new->next=NULL;
if(head->next==NULL)
{
head->next=new;
}
else
{
struct node *temp=(head->next);
while(temp->next!=NULL)
temp=temp->next;
temp->next=new;
}
(head->val)++;
}
}
}
}

//Transpose the sparse matrix
void transpose()
{
int temp;
struct node *t1=head->next;
while(t1!=NULL)
{
temp=t1->row;
(t1->row)=(t1->col);
t1->col=temp;
t1=t1->next;
}
}

//Display in triplet form
void display()
{
struct node *temp=head->next;
printf("%d\t%d\t%d\n",head->row,head->col,head->val);
while(temp!=NULL)
{
printf("%d\t%d\t%d\n",temp->row,temp->col,temp->val);
temp=temp->next;
}
}


int main()
{
int A[5][5];
int r,c,ch=1,i,j;
printf("Enter the no. of rows and columns\n");
scanf("%d%d",&r,&c);
head=(struct node *)malloc(sizeof(struct node));
head->row=r;
head->col=c;
head->val=0;
head->next=NULL;
printf("Enter the elements of the matrices\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&A[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",A[i][j]);
}
printf("\n");
}

while(ch!=0)
{
printf("Enter your choice\n");
printf("1 Create\n2 Display in triplet format\n3 Transpose \n0 To Exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
create(A,r,c);
break;
case 2:
display();
break;
case 3:
transpose();
break;
default:
printf("\n");
}
}
printf("EXIT\n");
return 0;
}





