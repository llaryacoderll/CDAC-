// Passing structure to the function using address(pointer)
#include<stdio.h>
typedef struct employee
{
    int empid;
    char name[20];
    float salary;
}emp;

void accept_data(emp e1);
void accept_by_adress(emp *ptr);
void print_data(emp e1);

int main(){
    emp e1;
    printf("pass by value\n");
    accept_data(e1);
    print_data(e1);

    printf("pass by adress\n");
    accept_by_adress(&e1);
    print_data(e1);

return 0;
}
void accept_data(emp e1){
    printf("enter the employee details: \n");
    printf("enter the empid, name, salary\n");
    scanf("%d%s%f",&e1.empid,&e1.name,&e1.salary);
}
void print_data(emp e1){
    printf("emplyee details are: \n");
    printf("%d  %s  %.2f\n",e1.empid,e1.name,e1.salary);
}
void accept_by_adress(emp *ptr){
    printf("enter the employee details: \n");
    printf("enter empid,name,salary: \n");
    scanf("%d%s%f",&ptr->empid,&ptr->name,&ptr->salary);

}
