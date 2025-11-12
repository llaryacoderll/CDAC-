#include <stdio.h>
struct Student
{
    int rollno;
    char name[20];
    int age;
};

int main(){
    struct Student s1={1,"Arya",22};
    struct Student s2=s1;
    printf("%d %s %d\n",s1.rollno,s1.name,s1.age);
    printf("%d %s %d",s2.rollno,s2.name,s2.age);

    
}