//Deleting
#include <stdio.h>
int main()
{
int i,k,n;
int a[50];
printf("Enter the size of array ");
scanf("%d",&n);
printf("Enter the elements : ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the position to be deleted:");
scanf("%d",&k);
printf("\n");
for(i=k;i<n;i++)
{
a[i-1]=a[i];
}
n=n-1;
printf("New araay");
for(i=0;i<n;i++)
{
printf(" %d",a[i]);
}
}
