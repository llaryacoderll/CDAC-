//b. Without using global variables

#include <stdio.h>

int sum(int a,int b);
int product(int a, int b);
int main()
{
    int num1,num2;
    printf("Enter 2 number: ");
    scanf("%d %d",&num1,&num2);
    int s = sum(num1,num2);
    int p = product(num1,num2);
    printf("Sum is %d\n",s);
    printf("prodct is %d\n",p);
}
int sum(int a,int b){
    return a+b;
}
int product(int a, int b){
    return a*b;
}