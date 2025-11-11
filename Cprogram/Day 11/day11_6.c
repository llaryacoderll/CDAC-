// Different syntax for structure
#include<stdio.h>
struct employee
{
    int empid;
    char name[20];
    float salary
}e1;

typedef struct stdent
{
    int rollno;
    char name[20];
    float marks;
}std; // alias

struct 
{
    int dd;
    int mm;
    int yy;
}d1,d2,d3; // these are variables

typedef struct 
{
    int dd; 
    int mm;
    int yy;
}date; //alias
int main(){
    typedef struct employee emp;
    emp e2; 

    std s1; // s1 is a variable
    date d1; // d1 is a variable

}