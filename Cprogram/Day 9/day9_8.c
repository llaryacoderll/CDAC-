#include <stdio.h>
#include<string.h>
int main()
{
    char str1="sunbeam";
    char str2[30];
    // if(str1==str2)
    //     printf("equal..");
    // else
    //     printf("not..");

    
    if((strcmp(str1,str2))==0)
        printf("Equal..");
    else
        printf("not");

    
}