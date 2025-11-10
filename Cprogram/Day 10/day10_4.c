// char 2-D Array and size
#include <stdio.h>
int main()
{
    char depts[][50]={"HR","Sales","Marketing","Training"};
    printf("dept[1] = %s\n",depts[1]);
    printf("dept[2] = %s\n",depts[2]);
    printf("dept[3] = %s\n",depts[3]);
    printf("dept[0] = %s\n",depts[0]);

    printf("dept[2][1] = %c\n",depts[2][1]);
    printf("*(*dept+2)+3) = %c\n",*(*(depts+2)+3)+5);
    printf("sizeof depts = %d \n ",sizeof(depts));
    printf("sizeof deptsp[1] = %d \n",sizeof(depts[1]));
    printf("sizeof depts[0][6] = %d\n ",sizeof(depts[0][6]));
    printf("sizeof depts[7] = %d\n ",sizeof(depts[7]));




}