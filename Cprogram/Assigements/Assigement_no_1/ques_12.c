//Extend above program (11) to print ranges for float, double, and long double. Use <float.h>."float" numbers can be printed using %f, %g, %e, %E.

#include<stdio.h>
#include<float.h>

int main()
{
    printf("Datatype \t\t size \t\t Format Specifier \t\t Range\n");
    printf("---------------------------------------------------------------------------------------\n");
    printf("float \t\t\t %d \t\t %%f \t\t\t %.3e to %.3e\n",sizeof(float),FLT_MIN,FLT_MAX);
    printf("double \t\t\t %d \t\t %%lf \t\t\t %.3e to %.3e\n",sizeof(double),DBL_MIN,DBL_MAX);
    printf("long double \t\t %d \t\t %%g \t\t\t %.3e to %.3e\n",sizeof(long double),LDBL_MIN,LDBL_MAX);
    printf("---------------------------------------------------------------------------------------\n");


}