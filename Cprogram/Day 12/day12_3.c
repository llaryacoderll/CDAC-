// Nested structure
#include <stdio.h>
struct student{
    int rollno;
    struct fullname{
        char f_name[20];
        char m_name[20];
        char l_name[20];
    }name;
    float marks;
};

int main()
{
    struct student s1;
    printf("Enter rollno: ");
    scanf("%d",&s1.rollno);
    printf("Enter name: ");
    scanf("%s %s %s",&s1.name.f_name,&s1.name.m_name,&s1.name.l_name);
    printf("enter marks: ");
    scanf("%f",&s1.marks);

    printf("Rollno : %d\n",s1.rollno);
    printf("Name : %s %s %s\n",s1.name.f_name,s1.name.m_name,s1.name.l_name);
    printf("marks : %f",s1.marks);
}