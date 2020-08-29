//inserting
#include <stdio.h>
int main()
{
int i,k,n,item;
int a[50];
printf("Enter the size of array ");
scanf("%d",&n);
printf("Enter the elements : ");

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the position :");
scanf("%d",&k);
printf("Enter the value ");
scanf("%d",&item);
printf("\n");
if(n==50)
{
printf("Overflow");
}
else
{
for(i=n-1;i>=k-1;i--)
{
a[i+1]=a[i];
}
a[k-1]=item;
n=n+1;
printf("New araay");
for(i=0;i<n;i++)
{
printf(" %d",a[i]);
}
}
}
