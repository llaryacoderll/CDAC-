#include <stdio.h>
#define SIZE 3
struct Student 
{
    int rollno;
    char name[20];
    int marks;
};

int main()
{
    struct Student s1[SIZE];
    printf("enter student data:\n ");
    for(int i=0;i<3;i++)
    {
        printf("Enter the Rollno: ");
        scanf("%d",&s1[i].rollno);
        printf("Enter the name: ");
        scanf("%s",&s1[i].name);
        printf("Enter the marks: ");
        scanf("%d",&s1[i].marks);
    }
    for(int i=0;i<3;i++)
        printf("%d - %s \t - %d\n",s1[i].rollno,s1[i].name,s1[i].marks);
}