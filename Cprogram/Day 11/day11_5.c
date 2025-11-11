// Structure basic declaration, intialization
// scanf in structure
#include<stdio.h>
#include<string.h>
struct student
{
    int rollno;
    char name[20];
    float marks;
};

int main(){
     struct student s1 = {1, "Amit",80.50};

     struct student s2;
     s2.rollno = 2;
     strcpy(s2.name,"Tanmay");
     s2.marks = 50.00;

     struct student s3;
     printf("enter the student details\n");
     printf("enter the rollno: \n");
     scanf("%d",&s3.rollno);

     printf("enter the name: \n");
     scanf("%s",&s3.name);

     printf("enter the marks: \n");
     scanf("%f",&s3.marks);

    printf("Student details are: \n");
    printf("s1:  %d  %s  %.2f\n",s1.rollno,s1.name,s1.marks);
    printf("s2:  %d  %s  %.2f\n",s2.rollno,s2.name,s2.marks);
    printf("s3:  %d  %s  %.2f\n",s3.rollno,s3.name,s3.marks);

    return 0;



     //s1 is a varible of a struct student
}
