/*
Write a program to accept two number and
a. find sum
b. find differnce 
c. find product
*/

/* a.find sum

=> input num1,num2
=> read num1,num2
=> add sum=num1+num2
=> print sum
*/

/*b.find diifernce

=> input num1,num2
=> read num1,num2
=> sub result=num1-num2
=> print result

*/

/* c.find product

=> input num1,num2
=> read num1,num2
=> multipy result = num1*num2
=> print result
*/

#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter values of num1,num2: ");
    scanf("%d%d",&num1,&num2);
    
    printf("Addition of %d + %d = %d\n",num1,num2,num1+num2);
    printf("subtraction of %d - %d = %d\n",num1,num2,num1-num2);
    printf("multipy of %d * %d = %d\n",num1,num2,num1*num2);


}