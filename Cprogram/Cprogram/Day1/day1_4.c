#include <stdio.h>
int main()
{
    int num1=25;
    float fvar=1.2;
    double dvar=2.5;
    char ch='A';

    printf("Size of num1 = %d\n",sizeof(num1));
    printf("Size of fvar = %d\n",sizeof(fvar));
    printf("Size of dvar = %d\n",sizeof(dvar));
    printf("Size of ch = %d\n",sizeof(ch));
    printf("Size of int = %d\n",sizeof(int));
    printf("Size of float = %d\n",sizeof(float));
    printf("Size of 'A' = %d\n",sizeof('A'));
    printf("Size of num1+dvar = %d\n",sizeof(num1+dvar));


}