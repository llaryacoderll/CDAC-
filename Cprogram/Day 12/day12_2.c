#include <stdio.h>
typedef struct date
{
    int dd;
    int mm;
    int yy;
}date;

struct empolyee
{
    int empid;
    char name[20];
    struct date DOB;
    struct date DOJ;
};

int main()
{
    struct employee e1;
    printf("Enter empid,name: ");
    scanf("%d %s",&e1.empid);
}
