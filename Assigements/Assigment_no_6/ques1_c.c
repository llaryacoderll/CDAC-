//strcat
#include <stdio.h>
#include <string.h>
int main()
{
    char arr[100],brr[100];
    printf("Enter string1: ");
    gets(arr);
    printf("Enter String2: ");
    gets(brr);
    strcat(arr,brr);
    printf("String : %s",arr);
}