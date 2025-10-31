#include <stdio.h>
int main()
{
    int empno,deptno;
    char desgcd;
    printf("Enter Employee Id: ");
    scanf("%d",&empno);
    printf("Enter Deptarment No.: ");
    scanf("%d",&deptno);
    printf("Enter Designation code : ");
    scanf("%*c%c",&desgcd);

    switch(deptno){
        case 10:
            printf("Employee with employee id %d is working in \"Marketing\" department as ",empno);
            break;
        case 20:
            printf("Employee with employee id %d is working in \"Management\" department as ",empno);
            break;
        case 30:
            printf("Employee with employee id %d is working in \"Sales\" department as ",empno);
            break;
         case 40:
            printf("Employee with employee id %d is working in \"Desiging\" department as ",empno);
            break;
    }
    switch (desgcd)
    {
    case 'M':
        printf("\"Manager\"\n");
        break;
    case 'S':
        printf("\"Supervisor\"\n");
        break;
    case 's':
        printf("\"Security Officer\" \n");
        break;
    case 'C':
        printf(" \"Clerk\"\n");
        break;
    
    default:
        break;
    }

}