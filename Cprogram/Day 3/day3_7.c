#include <stdio.h>
int main()
{
    int num1=20;
    int num2=30;
    printf("+= : num1+=num2 => num1=%d num2=%d\n",num1+=num2,num2);
    printf("-= : num1+=num2 => num1=%d num2=%d\n",num1-=num2,num2);
    printf("*= : num1+=num2 => num1=%d num2=%d\n",num1*=num2,num2);
    printf("/= : num1+=num2 => num1=%d num2=%d\n",num1/=num2,num2);
    printf("%%= : num1+=num2 => num1=%d num2=%d\n",num1%=num2,num2);

}