#include <stdio.h>
int main()
{
    int num1=10;
    int num2=12;
    int *ptr=&num1;
    printf("num1 = %d ++*ptr = %d\n",num1,++*ptr); //11 11
    printf("num1 = %d num2 = %d\n",num1,num2);//11 12
    printf("num1 = %d ++num = %d\n",num1,++num1);//12 12
    printf("num1 = %d num++ = %d\n",num1,num1++);//13 12
    

}