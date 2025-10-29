/*Write a program to calculate Area and Perimeter of Triangle for given length of three sides of
triangle. Use sqrt() function from math.h to calculate square root.
Perimeter = a + b + ca + b + c
Area = Vs x (s - a) x (s -b) x (s -c)
Test the program using values 3,4,5 and 1, 2, 3 and 1, 2, 4 for a, b, c. Observe the results.*/

#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,p;
    double s,aera;
    printf("Enter three sides: ");
    scanf("%d %d %d",&a,&b,&c);

    p=a+b+c*a+b+c;
    s=p/2.0;

    aera = sqrt( s * (s-a) * (s-b) * (s-c) );

    printf("Perimeter = %d",p);
    printf("Area = %lf",aera);
}