/*
write a program to accept a 4 digit number and
a. display face value of each decimal digit
b. display place value of each decimal digit
c. display number in reverse order changing decimal place  value
*/

#include <stdio.h>
int main()
{
    int n,w,x,y,z;
    printf("Enter 4 digit number: ");
    scanf("%d",&n);

    w=n/1000;
    x=n/100%10;
    y=n/10%10;
    z=n%10;

    //a. display face value of each decimal digit
    printf("%d %d %d %d\n",w,x,y,z);
    
    //b. display place value of each decimal digit
    printf("%d = %d + %d + %d + %d\n",n,w*1000,x*100,y*10,z);

    //c. display number in reverse order changing decimal place  value
    printf("%d\n",z*1000+y*100+x*10+w);


}