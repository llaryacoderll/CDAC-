//strcpy
#include <stdio.h>
#include <string.h>
int main()
{
    char arr[100],brr[100];
    printf("Enter a string: ");
    gets(arr);

    strcpy(brr,arr);
    printf("String is : %s",brr);
}