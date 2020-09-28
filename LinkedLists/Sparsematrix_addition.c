//Addition of sparse matrices
#include<stdio.h>
#include<stdlib.h>
struct node
{
int row;
int col;
int val;
struct node *next;
};
void create(struct node **head,int r,int c,int v)
{
struct node *temp;
struct node *new = (struct node *)malloc(sizeof(struct node));
new->row=r;
new->col=c;
new->val=v;
new->next=NULL;
if((*head)->next==NULL)
(*head)->next=new;
else
{
temp=((*head)->next);
while(temp->next!=NULL)
temp=temp->next;
temp->next=new;
}
((*head)->val)++;
}

void add(struct node **head1,struct node **head2,struct node **head3)
{
if(((*head1)->row==(*head2)->row) && ((*head2)->col==(*head1)->col))
{
(*head3)=(struct node *)malloc(sizeof(struct node));
(*head3)->row =(*head1)->row;
(*head3)->col =(*head1)->col;
(*head3)->val =((*head1)->val)+((*head2)->val);
(*head3)->next =NULL;
struct node *t3=(*head3);
struct node *t1=(*head1)->next;
while(t1!=NULL)
{
struct node *new = (struct node *)malloc(sizeof(struct node));
new->row=t1->row;
new->col=t1->col;
new->val=t1->val;
new->next=NULL;
t3->next=new;
t3=new;
t1=t1->next;
}
struct node *t2=(*head2)->next;
while(t2!=NULL)
{
struct node *new = (struct node *)malloc(sizeof(struct node));
new->row=t2->row;
new->col=t2->col;
new->val=t2->val;
new->next=NULL;
t3->next=new;
t3=new;
t2=t2->next;
}
}
else
printf("Matrix addition not possible\n");
}
void simplify(struct node **head3)
{
struct node *p1,*p2,*prev;
for(p1=((*head3)->next);p1!=NULL;p1=p1->next)
{
prev=p1;
p2=p1->next;
while(p2!=NULL)
{
if((p1->row) ==(p2->row) && p1->col == (p2->col))
{
p1->val+=p2->val;
prev->next=p2->next;
free(p2);
((*head3)->val)--;
}
prev=p2;
p2=p2->next;
}
}
}
void display(struct node **head)
{
struct node *temp1=(*head)->next;
printf("%d\t%d\t%d\n",(*head)->row,(*head)->col,(*head)->val);
while(temp1!=NULL)
{
printf("%d\t%d\t%d\n",temp1->row,temp1->col,temp1->val);
temp1=temp1->next;
}
}


int main()
{
int r1,r2,c1,c2,v1,v2;
int r,v,c;
printf("Enter the number of rows,nummber of columns,number of elements for sparse matrix 1\n");
scanf("%d%d%d",&r1,&c1,&v1);
printf("Enter the number of rows,nummber of columns,number of elements for sparse matrix 2\n");
scanf("%d%d%d",&r2,&c2,&v2);
//struct node *head1,*head2,*head3;
struct node *head1=(struct node *)malloc(sizeof(struct node));
head1->row=r1;
head1->col=c1;
head1->val=0;
head1->next=NULL;
struct node *head2=(struct node *)malloc(sizeof(struct node));
head2->row=r2;
head2->col=c2;
head2->val=0;
head2->next=NULL;
struct node *head3=NULL;
for(int i=0;i<v1;i++)
{
printf("Enter the row no.,column no. and the value \n");
scanf("%d\t%d\t%d",&r,&c,&v);
create(&head1,r,c,v);
}
printf("Sparse matrix1 in triplet format\n");
display(&head1);
for(int i=0;i<v2;i++)
{
printf("Enter the row no.,column no. and the value \n");
scanf("%d\t%d\t%d",&r,&c,&v);
create(&head2,r,c,v);
}
printf("Sparse matrix2 in triplet format\n");
display(&head2);
add(&head1,&head2,&head3);
simplify(&head3);
printf("Addition of Sparse matrices in triplet format\n");
display(&head3);
return 0;
}






