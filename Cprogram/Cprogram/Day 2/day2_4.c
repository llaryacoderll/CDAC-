#include <stdio.h>
int main()
{
    int num1,num2;
    char ch;
    printf("Enter value of num1,num2: ");
    scanf("%d %d",&num1,&num2);

    printf("Enter a char: ");
    scanf("%*c%c",&ch);

    printf("num1=%d num2=%d\n",num1,num2);
    printf("ch=%d ch=%c\n",ch,ch);
}