//strcmp()
#include <stdio.h>
#include <string.h>
int main()
{
    int res;
    char str1[20],str2[20];
    printf("Enter string str1: ");
    gets(str1);
    printf("Enter string str2: ");
    gets(str2);

    res = strcmp(str1,str2);
    if(res==0)
        printf("Equal..");
    else if(res==1)
        printf("Str1 is greater");
    else
        printf("Str2 is greater..");


}