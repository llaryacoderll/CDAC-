// for loop valid syntaxes

#include <stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("1..");                               // vaild syntax
    }
    i=1;
    for(;i<=10;i++)
    {
        printf("2..");                             //vaild synatx
    }
    i=1;

    for(;i<=10;)
    {
        printf("3..");                              //vaild synatx
    }

    for(;;)
    {
        printf("4..");                             //vaild synatx
    }
}