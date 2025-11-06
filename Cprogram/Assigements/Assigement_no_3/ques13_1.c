/*13. Write a program to display n terms of Fibonacci series
Input: 6
Output: 1, 1, 2, 3, 5, 8*/

#include <stdio.h>
int main()
{
    int n,x=1,y=1,z;
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("Fibonacci series: 1 1 ");
    for(int i=3;i<=n;i++)
    {
        z=x+y;
        printf(" %d",z);
        x=y;
        y=z;
    }
}