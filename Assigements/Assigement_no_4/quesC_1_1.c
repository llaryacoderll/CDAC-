/*7. Write a function to calculate sum and product into a single function.
a. Using global variables (for result)
b. Without using global variables
*/
#include <stdio.h>
int num1,num2;
int sum();
int product();
int main()
{
    printf("Enter 2 number: ");
    scanf("%d %d",&num1,&num2);
    int s = sum();
    int p = product();
    printf("Sum is %d\n",s);
    printf("prodct is %d\n",p);
}
int sum(){
    return num1+num2;
}
int product(){
    return num1*num2;
}