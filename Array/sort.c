//Sorting
#include <stdio.h>
int main()
{
int i,j,n,temp;
int a[50];
printf("Enter the size of array ");
scanf("%d",&n);
printf("Enter the elements : ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("New araay");
for(i=0;i<n;i++)
{
printf(" %d",a[i]);
}
}
