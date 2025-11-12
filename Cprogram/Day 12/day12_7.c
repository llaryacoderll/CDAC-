// union example
#include<stdio.h>
struct student
{
    char name[20];
    int rollno;
    int std;
    union result{
        float marks;
        char grade;
    }res;
};

int main(){
    struct student s1;
    printf("enter name,rollno,std: \n");
    scanf("%s%d%d",&s1.name,&s1.rollno,&s1.std);

    if(s1.std >=1 && s1.std<=4){
        printf("enter the grade\n");
        scanf("%*c%c",&s1.res.grade);
    }
    else{
        printf("enter the marks: \n");
        scanf("%f",&s1.res.marks);
    }

    printf("name = %s\n rollno =%d\n std =%d\n",s1.name,s1.rollno,s1.std);

     if(s1.std >=1 && s1.std<=4){
        
        printf("Grade = %c ",s1.res.grade);
    }
    else{
        printf("Marks = %.2f",s1.res.marks);
    }

    return 0;
}