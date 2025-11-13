//strchr()
#include <stdio.h>
#include <string.h>
int main()
{
    char *res;
    char str1[20];
    printf("Enter a string: ");
    gets(str1);
    res = strchr(str1,'a');
    printf("String first occurrences of 'a' : %s",res);
}