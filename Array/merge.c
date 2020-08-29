//Merging of two sorted arrays
#include<stdio.h>
void merge(int a[20],int b[20],int n1,int n2);
void main()
{
int i,n1,n2,a[20],b[20];
printf("Enter the no of elements for 1st array");
scanf("%d",&n1);
printf("Enter the elements in sorted order");
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the no of elements for 2nd array");
scanf("%d",&n2);
printf("Enter the elements in sorted order");
for(i=0;i<n2;i++)
{
scanf("%d",&b[i]);
}
merge(a,b,n1,n2);
}


void merge(int a[50],int b[20],int n1,int n2)
{
int i=0,j=0,k=0,c[50];
while(i<n1&&j<n2)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
k++;
}
else if(a[i]>b[j])
{
c[k]=b[j];
j++;
k++;
}
else
{
c[k]=a[i];
i++;
j++;
k++;
}
}
while(i<n1)
{
c[k]=a[i];
i++;
k++;
}
while(j<n2)
{
c[k]=b[j];
j++;
k++;
}
printf("New array");
for(int k=0;k<(n1+n2);k++)
{
printf("%d\t",c[k]);
}
}

