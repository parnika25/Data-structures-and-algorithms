//Menu driven 
#include<stdio.h>
void insert(int a[50],int n);
void delete(int a[50],int n);
void search(int a[50],int n);
void sort(int a[50],int n);
void reverse(int a[50],int n);

void main()
{
int a[50],n,i;
printf("Enter the size of array\t");
scanf("%d",&n);
printf("Enter the elements : \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
insert(a,n);
delete(a,n);
search(a,n);
sort(a,n);
reverse(a,n);
}

void insert(int a[50],int n)
{
int i,k,item;
printf("Enter the position :\t");
scanf("%d",&k);
printf("Enter the value \t");
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
printf("New araay after insertion \n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
printf("\n");
}
}

void delete(int a[50],int n)
{
int i,k;
printf("Enter the position to be deleted: \t");
scanf("%d",&k);
printf("\n");
for(i=k;i<n+1;i++)
{
a[i-1]=a[i];
}
n=n-1;
printf("New araay after deletion\n");
for(i=0;i<n+1;i++)
{
printf("%d\t",a[i]);
}
printf("\n");
}

void search(int a[50],int n)
{
int i,k;
printf("Enter the element to get the position :");
scanf("%d",&k);
printf("\n");
for(i=0;i<n;i++)
{
if(k==a[i])
{
printf("Position Of element is :%d\t",i+1);
}
}
printf("\n");
}

void sort(int a[50],int n)
{
int i,temp,j;
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
printf("New araay after sorting\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
printf("\n");
}

void reverse(int a[50],int n)
{
int temp,i,j;
for(i=0,j=n-1;i<j;i++,j--)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
printf("Reversed Array\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}





