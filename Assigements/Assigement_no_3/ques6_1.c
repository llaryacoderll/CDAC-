/*6. Write a program to accept a number and print all factors excluding the number
Input: 24
Output: all factors: 1, 2, 3, 4, 6, 8, 12*/

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    printf("Factors of %d is ",num);
    int i=1;
    while(i<num)
    {
        if(num%i==0)
            printf("%d ",i);
        i++;
    }
}