//Total and average
#include<stdio.h>
struct student
{
int roll,m1,m2,m3,m4,m5;
char name[50];
int total;
float avg;
};

void read(struct student s[100],int n);
void display(struct student s[100],int n);

void main()
{
int i,n,j,total;
printf("Enter the total no of students\t");
scanf("%d",&n);
struct student s[n];
read(s,n);
display(s,n);
}

void read(struct student s[100],int n)
{
int i,j;
for(i=0;i<n;i++)
{
printf("Enter the information of the student \n");
printf("Enter the name : \n");
scanf("%s",s[i].name);
printf("Enter the roll no : \n");
scanf("%d",&s[i].roll);
printf("Enter the marks : \n");
scanf("%d%d%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3,&s[i].m4,&s[i].m5);
s[i].total=s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5;
s[i].avg=s[i].total/5;
}
}

void display(struct student s[100],int n)
{
int i,j,total;
for (i=0;i<n;i++)
{
printf("Details of the student %d\n",i+1);
printf("Name :\t%s\n",s[i].name);
printf("Roll No :\t%d\n",s[i].roll);
printf("Marks in 5 subject :\n");
printf("%d\t%d\t%d\t%d\t%d",s[i].m1,s[i].m2,s[i].m3,s[i].m4,s[i].m5);
printf("\n");
printf("Total: %d\n",s[i].total);
printf("Average :\n %f\n",s[i].avg);
}
}


