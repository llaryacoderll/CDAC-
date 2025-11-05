//write a program to accept integer numner and find its average.

#include <stdio.h>
int main()
{
    int n1,n2,n3;
    double avg;
    printf("Enter value of n1,n2,n3: ");
    scanf("%d %d %d",&n1,&n2,&n3);

    avg = (n1+n2+n3)/3.0;
    printf("Average of %d %d %d = %lf",n1,n2,n3,avg);
}