//Pointer to a structure
#include<stdio.h>
struct student 
{
    char name[50];
    int roll;
    int m1,m2,m3,m4,m5;
    int total;
    float per;
};
void read(struct student *s,int n);
void display(struct student *s,int n);
void main()
{
    int n;
    printf("Enter the number of students :\n");
    scanf("%d",&n);
    struct student p[n];
    read(&p[n],n);
    display(&p[n],n);
}
void read(struct student *s,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the information of the student \n");
        printf("Enter the name of student :\n");
        scanf("%s",(s+i)->name);
        printf("Enter the Roll No:\n");
        scanf("%d",&(s+i)->roll);
        printf("Enter the marks in 5 subject:\n");
        scanf("%d %d %d %d %d",&(s+i)->m1,&(s+i)->m2,&(s+i)->m3,&(s+i)->m4,&(s+i)->m5);
        (s+i)->total=(s+i)->m1+(s+i)->m2+(s+i)->m3+(s+i)->m4+(s+i)->m5;
        (s+i)->per=(s+i)->total/5;
    }
}
void display(struct student *s,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Details of the student %d\n",i+1);
        printf("Name  :%s\n",(s+i)->name);
        printf("Roll  :%d\n",(s+i)->roll);
        printf("Total  :%d\n",(s+i)->total);
        printf("Percentage:%f\n",(s+i)->per);
        printf("\n");
    }
    
}

