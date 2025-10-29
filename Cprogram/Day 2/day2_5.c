#include <stdio.h>
int main()
{
    int count,num1=6859,num2,num3;
    count = printf("Hello Everyone\n");
    printf("%d\n",count);

    count = printf("num1 = %d\n",num1);
    printf("%d\n",count);

    printf("Enter num1,num2,num3: ");
    count = scanf("%d %d %d",num1,num2,num3);
    printf("%d\n",count);
}