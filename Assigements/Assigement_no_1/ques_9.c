//write a program to convert temperture in celisus to fahreheit and vice vers.

#include <stdio.h>
int main()
{
    int temp;
    double c;
    printf("enter a temperature: ");
    scanf("%d",&temp);

    c=5/9.0*(temp-32);
    printf("Temperature in degree Celsius is %lf",c);
}