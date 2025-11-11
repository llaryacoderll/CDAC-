#include<stdio.h>
#pragma pack(2)
struct employee
{
    int empid;
    char name[20];
    char gender;
}e1;

typedef struct 
{
    int dd; 
    int mm;
    int yy;
}date;

typedef struct stdent
{
    int rollno;
    char name[20];
    double marks;
}std;
int main()
{
    printf("Size of employee structure : %d\n",sizeof(struct employee));//28
    printf("Size of Student structure : %d\n",sizeof(std)); //32
    printf("Size of date structure : %d\n",sizeof(date));//12

}