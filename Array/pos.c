//Searching
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
printf("Enter the element to get the position :");
scanf("%d",&k);
printf("\n");
for(i=0;i<n;i++)
{
if(k==a[i])
{
printf("Position Of element is :%d",i+1);
}
}
}

