//Matrix addition using dynamic allocation
#include<stdio.h>
#include<stdlib.h>
void add(int **p,int **q,int m,int n);

int main()
{
int m,n,i,j;
printf("Enter the no of rows\t");
scanf("%d",&m);
printf("Enter the no of columns\t");
scanf("%d",&n);
int **p = (int **)malloc(m*sizeof(int *));
for(i=0;i<n;i++)
*(p+i) = (int *)malloc(n*sizeof(int));

int **q = (int **)malloc(m*sizeof(int *));
for(i=0;i<n;i++)
*(q+i) = (int *)malloc(n*sizeof(int));

printf("Enter elements for first matrix\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
scanf("%d",(*(p+i)+j));
}

printf("Enter elements for second matrix\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
scanf("%d",(*(q+i)+j));
}
add(p,q,m,n);
return 0;
}


void add(int **p,int **q,int m,int n)
{
int i,j;
int **s = (int **)malloc(m*sizeof(int *));
for(i=0;i<n;i++)
*(s+i) = (int *)malloc(n*sizeof(int ));
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
*(*(s+i)+j)=*(*(p+i)+j)+*(*(q+i)+j);
}
printf("Resultant Matrix is given by \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",*(*(s+i)+j));
}
printf("\n");
}
}

