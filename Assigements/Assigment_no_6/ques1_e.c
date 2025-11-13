//stricmp()
#include <stdio.h>
#include<string.h>
int main()
{
    int res;
    char str1[20],str2[20];
    printf("Enter string 1: ");
    gets(str1);
    printf("Enter String 2: ");
    gets(str2);
    res = stricmp(str1,str2);
    if(res==0)
        printf("Equals..");
    else
        printf("not equal..");
}