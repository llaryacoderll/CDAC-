/*8. Write a program to accept a number and print its prime factors.
Input: 180
Output: 180 = 2 * 2 * 3 * 3 * 5*/

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    int temp=num;
    printf("%d = ",num);

    for(int i=2;i<=temp;i++)
    {
        while(temp%i==0)
        {
            printf("%d",i);
            temp=temp/i;
            if(temp!=1)
                printf (" * ");
        }
    }
}