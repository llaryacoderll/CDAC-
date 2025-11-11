// Structure pointer variable(accessing data using pointer)
#include<stdio.h>
typedef struct student
{
    int rollno;
    char name[20];
    float marks;

}student;
int main(){
      student s1 = {1, "Arya", 50};
      student *ptr = &s1;

      printf("s1 : %d  %s  %.2f\n",s1.rollno,s1.name,s1.marks);
      printf("ptr: %d  %s  %.2f\n",ptr->rollno,ptr->name,ptr->marks);

      return 0;


}
