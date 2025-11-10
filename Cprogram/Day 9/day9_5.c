#include <stdio.h>
#include<string.h>
int main()
{
    char str1[]="sunbeam";
    char str2[]="sunbeam";
    // if(str1==str2)
    //     printf("equal..");
    // else
    //     printf("not..");

    int result = strcmp(str1,str2);
    
    if(result==0)
        printf("Equal..");
    else
        printf("not");

    
}