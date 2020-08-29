//Addition of two Matrices
#include<stdio.h>
void read(int a[10][10],int m,int n);
void add(int a[10][10] ,int b[10][10],int m,int n);
void read(int x[10][10],int m,int n)
{
printf("Enter the elements for the matrix \n");
for(int i=0;i<m;i++)
{
 for(int j=0;j<n;j++)
 {
 scanf("%d",&x[i][j]);
 }
}
}
void add(int a[10][10] ,int b[10][10],int m,int n)
{
int sum [10][10];
printf("Addition of two matrices is:\n");
for(int i=0;i<m;i++)
{
 for(int j=0;j<n;j++)
 {
 sum[i][j]  =  a[i][j]  +  b[i][j];
 printf("%d\t",sum[i][j]);
 }
 printf("\n");
}
}
int main()
{
int m,n,a[10][10],b[10][10];
printf("Enter the no of rows matrices\n");
scanf("%d",&m);
printf("Enter the no of columns matrices\n");
scanf("%d",&n);
read(a,m,n);
read(b,m,n);
add(a,b,m,n);
return 0;
}



