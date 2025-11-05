// while loop

#include <stdio.h>
int main()
{
    int num1;
    printf("Enter a number: ");
    scanf("%d",&num1);

    for(int i=1;i<=10;i++)
    {
        printf("%d X %d = %d\n",num1,i,num1*i);
    }
}