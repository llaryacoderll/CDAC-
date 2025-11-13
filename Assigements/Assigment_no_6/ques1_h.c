//strstr()
#include <stdio.h>
#include <string.h>
int main()
{
    char *res;
    char str1[20];
    char ch='a';
    printf("Enter a string: ");
    gets(str1);
    res = strstr(str1,ch);
    if (res!=NULL)
        printf("String first occurrences of 'a' : %s",res);
    else    
        printf("Not");
}